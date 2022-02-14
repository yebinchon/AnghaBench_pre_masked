
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spi_master {int max_dma_len; int can_dma; int * dma_rx; int * dma_tx; } ;
struct TYPE_6__ {TYPE_2__* master; } ;
struct spi_imx_data {int wml; TYPE_3__ bitbang; int dma_tx_completion; int dma_rx_completion; TYPE_1__* devtype_data; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int fifo_size; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,int) ;
 void* FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*) ;
 int VAR_3 ;
 int FUNC_6 (struct spi_imx_data*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4, struct spi_imx_data *VAR_5,
        struct spi_master *VAR_6)
{
 int VAR_7;


 if (FUNC_5("fsl,imx6dl"))
  return 0;

 VAR_5->wml = VAR_5->devtype_data->fifo_size / 2;


 VAR_6->dma_tx = FUNC_3(VAR_4, "tx");
 if (FUNC_0(VAR_6->dma_tx)) {
  VAR_7 = FUNC_1(VAR_6->dma_tx);
  FUNC_2(VAR_4, "can't get the TX DMA channel, error %d!\n", VAR_7);
  VAR_6->dma_tx = ((void*)0);
  goto err;
 }


 VAR_6->dma_rx = FUNC_3(VAR_4, "rx");
 if (FUNC_0(VAR_6->dma_rx)) {
  VAR_7 = FUNC_1(VAR_6->dma_rx);
  FUNC_2(VAR_4, "can't get the RX DMA channel, error %d\n", VAR_7);
  VAR_6->dma_rx = ((void*)0);
  goto err;
 }

 FUNC_4(&VAR_5->dma_rx_completion);
 FUNC_4(&VAR_5->dma_tx_completion);
 VAR_6->can_dma = VAR_3;
 VAR_6->max_dma_len = VAR_0;
 VAR_5->bitbang.master->flags = VAR_1 |
      VAR_2;

 return 0;
err:
 FUNC_6(VAR_5);
 return VAR_7;
}
