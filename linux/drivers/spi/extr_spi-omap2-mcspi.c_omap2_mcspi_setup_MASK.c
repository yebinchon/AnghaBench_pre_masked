
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {size_t chip_select; int mode; int dev; int cs_gpio; struct omap2_mcspi_cs* controller_state; int master; } ;
struct omap2_mcspi_regs {int cs; } ;
struct omap2_mcspi_dma {int dma_tx; int dma_rx; } ;
struct omap2_mcspi_cs {int node; scalar_t__ chctrl0; scalar_t__ chconf0; scalar_t__ mode; scalar_t__ phys; scalar_t__ base; } ;
struct omap2_mcspi {int dev; scalar_t__ phys; scalar_t__ base; struct omap2_mcspi_dma* dma_channels; struct omap2_mcspi_regs ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 struct omap2_mcspi_cs* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct spi_device*) ;
 int FUNC_9 (struct spi_device*,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 struct omap2_mcspi* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct spi_device *VAR_3)
{
 int VAR_4;
 struct omap2_mcspi *VAR_5 = FUNC_14(VAR_3->master);
 struct omap2_mcspi_regs *VAR_6 = &VAR_5->ctx;
 struct omap2_mcspi_dma *VAR_7;
 struct omap2_mcspi_cs *VAR_8 = VAR_3->controller_state;

 VAR_7 = &VAR_5->dma_channels[VAR_3->chip_select];

 if (!VAR_8) {
  VAR_8 = FUNC_6(sizeof *VAR_8, VAR_1);
  if (!VAR_8)
   return -VAR_0;
  VAR_8->base = VAR_5->base + VAR_3->chip_select * 0x14;
  VAR_8->phys = VAR_5->phys + VAR_3->chip_select * 0x14;
  VAR_8->mode = 0;
  VAR_8->chconf0 = 0;
  VAR_8->chctrl0 = 0;
  VAR_3->controller_state = VAR_8;

  FUNC_7(&VAR_8->node, &VAR_6->cs);

  if (FUNC_4(VAR_3->cs_gpio)) {
   VAR_4 = FUNC_5(VAR_3->cs_gpio, FUNC_1(&VAR_3->dev));
   if (VAR_4) {
    FUNC_0(&VAR_3->dev, "failed to request gpio\n");
    return VAR_4;
   }
   FUNC_3(VAR_3->cs_gpio,
      !(VAR_3->mode & VAR_2));
  }
 }

 if (!VAR_7->dma_rx || !VAR_7->dma_tx) {
  VAR_4 = FUNC_8(VAR_3);
  if (VAR_4)
   FUNC_2(&VAR_3->dev, "not using DMA for McSPI (%d)\n",
     VAR_4);
 }

 VAR_4 = FUNC_10(VAR_5->dev);
 if (VAR_4 < 0) {
  FUNC_13(VAR_5->dev);

  return VAR_4;
 }

 VAR_4 = FUNC_9(VAR_3, ((void*)0));
 FUNC_11(VAR_5->dev);
 FUNC_12(VAR_5->dev);

 return VAR_4;
}
