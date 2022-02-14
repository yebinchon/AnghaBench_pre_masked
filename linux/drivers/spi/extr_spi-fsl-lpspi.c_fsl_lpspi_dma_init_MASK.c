
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int max_dma_len; int can_dma; int * dma_rx; int * dma_tx; } ;
struct fsl_lpspi_data {int dma_tx_completion; int dma_rx_completion; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int) ;
 void* FUNC_3 (struct device*,char*) ;
 int VAR_1 ;
 int FUNC_4 (struct spi_controller*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2,
         struct fsl_lpspi_data *VAR_3,
         struct spi_controller *VAR_4)
{
 int VAR_5;


 VAR_4->dma_tx = FUNC_3(VAR_2, "tx");
 if (FUNC_0(VAR_4->dma_tx)) {
  VAR_5 = FUNC_1(VAR_4->dma_tx);
  FUNC_2(VAR_2, "can't get the TX DMA channel, error %d!\n", VAR_5);
  VAR_4->dma_tx = ((void*)0);
  goto err;
 }


 VAR_4->dma_rx = FUNC_3(VAR_2, "rx");
 if (FUNC_0(VAR_4->dma_rx)) {
  VAR_5 = FUNC_1(VAR_4->dma_rx);
  FUNC_2(VAR_2, "can't get the RX DMA channel, error %d\n", VAR_5);
  VAR_4->dma_rx = ((void*)0);
  goto err;
 }

 FUNC_5(&VAR_3->dma_rx_completion);
 FUNC_5(&VAR_3->dma_tx_completion);
 VAR_4->can_dma = VAR_1;
 VAR_4->max_dma_len = VAR_0;

 return 0;
err:
 FUNC_4(VAR_4);
 return VAR_5;
}
