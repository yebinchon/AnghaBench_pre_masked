
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int nents; int sgl; } ;
struct spi_transfer {int len; int bits_per_word; struct sg_table rx_sg; struct sg_table tx_sg; } ;
struct spi_master {int dma_rx; int dev; int dma_tx; } ;
struct TYPE_3__ {struct spi_master* master; } ;
struct spi_imx_data {unsigned int wml; TYPE_2__* devtype_data; int dma_rx_completion; int * dev; int dma_tx_completion; TYPE_1__ bitbang; } ;
struct scatterlist {int dummy; } ;
struct dma_async_tx_descriptor {void* callback_param; int callback; } ;
struct TYPE_4__ {int fifo_size; int (* reset ) (struct spi_imx_data*) ;int (* setup_wml ) (struct spi_imx_data*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 struct dma_async_tx_descriptor* FUNC_2 (int ,int ,int ,int ,int) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (struct scatterlist*) ;
 struct scatterlist* FUNC_7 (int ,int ) ;
 unsigned int FUNC_8 (int ) ;
 unsigned long FUNC_9 (struct spi_imx_data*,int) ;
 int FUNC_10 (struct spi_master*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (struct spi_imx_data*) ;
 int FUNC_12 (struct spi_imx_data*) ;
 unsigned long FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct spi_imx_data *VAR_8,
    struct spi_transfer *VAR_9)
{
 struct dma_async_tx_descriptor *VAR_10, *VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;
 struct spi_master *VAR_14 = VAR_8->bitbang.master;
 struct sg_table *VAR_15 = &VAR_9->tx_sg, *VAR_16 = &VAR_9->rx_sg;
 struct scatterlist *VAR_17 = FUNC_7(VAR_16->sgl, VAR_16->nents);
 unsigned int VAR_18, VAR_19;
 int VAR_20;


 VAR_18 = FUNC_8(VAR_9->bits_per_word);
 for (VAR_19 = VAR_8->devtype_data->fifo_size / 2; VAR_19 > 0; VAR_19--) {
  if (!(FUNC_6(VAR_17) % (VAR_19 * VAR_18)))
   break;
 }

 if (VAR_19 == 0)
  VAR_19 = 1;

 VAR_8->wml = VAR_19;

 VAR_20 = FUNC_10(VAR_14);
 if (VAR_20)
  return VAR_20;

 if (!VAR_8->devtype_data->setup_wml) {
  FUNC_0(VAR_8->dev, "No setup_wml()?\n");
  return -VAR_4;
 }
 VAR_8->devtype_data->setup_wml(VAR_8);





 VAR_11 = FUNC_2(VAR_14->dma_rx,
    VAR_16->sgl, VAR_16->nents, VAR_1,
    VAR_3 | VAR_0);
 if (!VAR_11)
  return -VAR_4;

 VAR_11->callback = VAR_6;
 VAR_11->callback_param = (void *)VAR_8;
 FUNC_3(VAR_11);
 FUNC_5(&VAR_8->dma_rx_completion);
 FUNC_1(VAR_14->dma_rx);

 VAR_10 = FUNC_2(VAR_14->dma_tx,
    VAR_15->sgl, VAR_15->nents, VAR_2,
    VAR_3 | VAR_0);
 if (!VAR_10) {
  FUNC_4(VAR_14->dma_tx);
  return -VAR_4;
 }

 VAR_10->callback = VAR_7;
 VAR_10->callback_param = (void *)VAR_8;
 FUNC_3(VAR_10);
 FUNC_5(&VAR_8->dma_tx_completion);
 FUNC_1(VAR_14->dma_tx);

 VAR_12 = FUNC_9(VAR_8, VAR_9->len);


 VAR_13 = FUNC_13(&VAR_8->dma_tx_completion,
      VAR_12);
 if (!VAR_13) {
  FUNC_0(VAR_8->dev, "I/O Error in DMA TX\n");
  FUNC_4(VAR_14->dma_tx);
  FUNC_4(VAR_14->dma_rx);
  return -VAR_5;
 }

 VAR_13 = FUNC_13(&VAR_8->dma_rx_completion,
           VAR_12);
 if (!VAR_13) {
  FUNC_0(&VAR_14->dev, "I/O Error in DMA RX\n");
  VAR_8->devtype_data->reset(VAR_8);
  FUNC_4(VAR_14->dma_rx);
  return -VAR_5;
 }

 return VAR_9->len;
}
