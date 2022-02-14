
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_controller {int * dma_tx; int * dma_rx; } ;
struct driver_data {struct spi_controller* controller; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct driver_data *VAR_0)
{
 struct spi_controller *VAR_1 = VAR_0->controller;

 if (VAR_1->dma_rx) {
  FUNC_1(VAR_1->dma_rx);
  FUNC_0(VAR_1->dma_rx);
  VAR_1->dma_rx = ((void*)0);
 }
 if (VAR_1->dma_tx) {
  FUNC_1(VAR_1->dma_tx);
  FUNC_0(VAR_1->dma_tx);
  VAR_1->dma_tx = ((void*)0);
 }
}
