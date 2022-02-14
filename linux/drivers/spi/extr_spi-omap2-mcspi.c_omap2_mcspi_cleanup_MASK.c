
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {size_t chip_select; int cs_gpio; TYPE_1__* master; struct omap2_mcspi_cs* controller_state; } ;
struct omap2_mcspi_dma {int * dma_tx; int * dma_rx; } ;
struct omap2_mcspi_cs {int node; } ;
struct omap2_mcspi {struct omap2_mcspi_dma* dma_channels; } ;
struct TYPE_2__ {size_t num_chipselect; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct omap2_mcspi_cs*) ;
 int FUNC_4 (int *) ;
 struct omap2_mcspi* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct spi_device *VAR_0)
{
 struct omap2_mcspi *VAR_1;
 struct omap2_mcspi_dma *VAR_2;
 struct omap2_mcspi_cs *VAR_3;

 VAR_1 = FUNC_5(VAR_0->master);

 if (VAR_0->controller_state) {

  VAR_3 = VAR_0->controller_state;
  FUNC_4(&VAR_3->node);

  FUNC_3(VAR_3);
 }

 if (VAR_0->chip_select < VAR_0->master->num_chipselect) {
  VAR_2 = &VAR_1->dma_channels[VAR_0->chip_select];

  if (VAR_2->dma_rx) {
   FUNC_0(VAR_2->dma_rx);
   VAR_2->dma_rx = ((void*)0);
  }
  if (VAR_2->dma_tx) {
   FUNC_0(VAR_2->dma_tx);
   VAR_2->dma_tx = ((void*)0);
  }
 }

 if (FUNC_2(VAR_0->cs_gpio))
  FUNC_1(VAR_0->cs_gpio);
}
