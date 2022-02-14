
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_transfer {int dummy; } ;
struct driver_data {TYPE_1__* controller; TYPE_2__* pdev; } ;
struct dma_async_tx_descriptor {struct driver_data* callback_param; int callback; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int dma_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 struct dma_async_tx_descriptor* FUNC_3 (struct driver_data*,int ,struct spi_transfer*) ;

int FUNC_4(struct driver_data *VAR_4,
      struct spi_transfer *VAR_5)
{
 struct dma_async_tx_descriptor *VAR_6, *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_4, VAR_1, VAR_5);
 if (!VAR_6) {
  FUNC_0(&VAR_4->pdev->dev,
   "failed to get DMA TX descriptor\n");
  VAR_8 = -VAR_2;
  goto err_tx;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_0, VAR_5);
 if (!VAR_7) {
  FUNC_0(&VAR_4->pdev->dev,
   "failed to get DMA RX descriptor\n");
  VAR_8 = -VAR_2;
  goto err_rx;
 }


 VAR_7->callback = VAR_3;
 VAR_7->callback_param = VAR_4;

 FUNC_1(VAR_7);
 FUNC_1(VAR_6);
 return 0;

err_rx:
 FUNC_2(VAR_4->controller->dma_tx);
err_tx:
 return VAR_8;
}
