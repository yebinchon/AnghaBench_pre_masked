
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int nents; int sgl; } ;
struct spi_transfer {int len; struct sg_table rx_sg; struct sg_table tx_sg; } ;
struct spi_controller {int dma_rx; int dma_tx; } ;
struct fsl_lpspi_data {int slave_aborted; int dev; int dma_rx_completion; int dma_tx_completion; int is_slave; } ;
struct dma_async_tx_descriptor {void* callback_param; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 struct dma_async_tx_descriptor* FUNC_3 (int ,int ,int ,int ,int) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (struct fsl_lpspi_data*,int ) ;
 int FUNC_7 (struct spi_controller*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct fsl_lpspi_data*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 unsigned long FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct spi_controller *VAR_9,
    struct fsl_lpspi_data *VAR_10,
    struct spi_transfer *VAR_11)
{
 struct dma_async_tx_descriptor *VAR_12, *VAR_13;
 unsigned long VAR_14;
 unsigned long VAR_15;
 struct sg_table *VAR_16 = &VAR_11->tx_sg, *VAR_17 = &VAR_11->rx_sg;
 int VAR_18;

 VAR_18 = FUNC_7(VAR_9);
 if (VAR_18)
  return VAR_18;

 VAR_13 = FUNC_3(VAR_9->dma_rx,
    VAR_17->sgl, VAR_17->nents, VAR_1,
    VAR_3 | VAR_0);
 if (!VAR_13)
  return -VAR_5;

 VAR_13->callback = VAR_7;
 VAR_13->callback_param = (void *)VAR_10;
 FUNC_4(VAR_13);
 FUNC_9(&VAR_10->dma_rx_completion);
 FUNC_2(VAR_9->dma_rx);

 VAR_12 = FUNC_3(VAR_9->dma_tx,
    VAR_16->sgl, VAR_16->nents, VAR_2,
    VAR_3 | VAR_0);
 if (!VAR_12) {
  FUNC_5(VAR_9->dma_tx);
  return -VAR_5;
 }

 VAR_12->callback = VAR_8;
 VAR_12->callback_param = (void *)VAR_10;
 FUNC_4(VAR_12);
 FUNC_9(&VAR_10->dma_tx_completion);
 FUNC_2(VAR_9->dma_tx);

 VAR_10->slave_aborted = 0;

 if (!VAR_10->is_slave) {
  VAR_14 = FUNC_6(VAR_10,
              VAR_11->len);


  VAR_15 = FUNC_11(&VAR_10->dma_tx_completion,
            VAR_14);
  if (!VAR_15) {
   FUNC_1(VAR_10->dev, "I/O Error in DMA TX\n");
   FUNC_5(VAR_9->dma_tx);
   FUNC_5(VAR_9->dma_rx);
   FUNC_8(VAR_10);
   return -VAR_6;
  }

  VAR_15 = FUNC_11(&VAR_10->dma_rx_completion,
            VAR_14);
  if (!VAR_15) {
   FUNC_1(VAR_10->dev, "I/O Error in DMA RX\n");
   FUNC_5(VAR_9->dma_tx);
   FUNC_5(VAR_9->dma_rx);
   FUNC_8(VAR_10);
   return -VAR_6;
  }
 } else {
  if (FUNC_10(&VAR_10->dma_tx_completion) ||
   VAR_10->slave_aborted) {
   FUNC_0(VAR_10->dev,
    "I/O Error in DMA TX interrupted\n");
   FUNC_5(VAR_9->dma_tx);
   FUNC_5(VAR_9->dma_rx);
   FUNC_8(VAR_10);
   return -VAR_4;
  }

  if (FUNC_10(&VAR_10->dma_rx_completion) ||
   VAR_10->slave_aborted) {
   FUNC_0(VAR_10->dev,
    "I/O Error in DMA RX interrupted\n");
   FUNC_5(VAR_9->dma_tx);
   FUNC_5(VAR_9->dma_rx);
   FUNC_8(VAR_10);
   return -VAR_4;
  }
 }

 FUNC_8(VAR_10);

 return 0;
}
