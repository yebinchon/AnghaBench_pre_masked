
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_master {int * dma_tx; int * dma_rx; } ;
struct TYPE_2__ {struct spi_master* master; } ;
struct spi_imx_data {TYPE_1__ bitbang; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct spi_imx_data *VAR_0)
{
 struct spi_master *VAR_1 = VAR_0->bitbang.master;

 if (VAR_1->dma_rx) {
  FUNC_0(VAR_1->dma_rx);
  VAR_1->dma_rx = ((void*)0);
 }

 if (VAR_1->dma_tx) {
  FUNC_0(VAR_1->dma_tx);
  VAR_1->dma_tx = ((void*)0);
 }
}
