
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_controller {int * dma_tx; void* dma_rx; } ;
struct pxa2xx_spi_controller {int rx_param; int dma_filter; int tx_param; } ;
struct driver_data {struct spi_controller* controller; TYPE_1__* pdev; struct pxa2xx_spi_controller* controller_info; } ;
struct device {int dummy; } ;
typedef int dma_cap_mask_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ,int ,int ,struct device*,char*) ;

int FUNC_4(struct driver_data *VAR_2)
{
 struct pxa2xx_spi_controller *VAR_3 = VAR_2->controller_info;
 struct device *VAR_4 = &VAR_2->pdev->dev;
 struct spi_controller *VAR_5 = VAR_2->controller;
 dma_cap_mask_t VAR_6;

 FUNC_1(VAR_6);
 FUNC_0(VAR_0, VAR_6);

 VAR_5->dma_tx = FUNC_3(VAR_6,
    VAR_3->dma_filter, VAR_3->tx_param, VAR_4, "tx");
 if (!VAR_5->dma_tx)
  return -VAR_1;

 VAR_5->dma_rx = FUNC_3(VAR_6,
    VAR_3->dma_filter, VAR_3->rx_param, VAR_4, "rx");
 if (!VAR_5->dma_rx) {
  FUNC_2(VAR_5->dma_tx);
  VAR_5->dma_tx = ((void*)0);
  return -VAR_1;
 }

 return 0;
}
