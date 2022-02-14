
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nents; int sgl; } ;
struct spi_transfer {TYPE_1__ tx_sg; } ;
struct spi_device {size_t chip_select; int master; } ;
struct omap2_mcspi_dma {scalar_t__ dma_tx; } ;
struct omap2_mcspi {struct omap2_mcspi_dma* dma_channels; } ;
struct dma_slave_config {int dummy; } ;
struct dma_async_tx_descriptor {struct spi_device* callback_param; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct dma_async_tx_descriptor* FUNC_1 (scalar_t__,int ,int ,int ,int) ;
 int FUNC_2 (scalar_t__,struct dma_slave_config*) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (struct spi_device*,int ,int) ;
 int VAR_3 ;
 struct omap2_mcspi* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct spi_device *VAR_4,
    struct spi_transfer *VAR_5,
    struct dma_slave_config VAR_6)
{
 struct omap2_mcspi *VAR_7;
 struct omap2_mcspi_dma *VAR_8;

 VAR_7 = FUNC_5(VAR_4->master);
 VAR_8 = &VAR_7->dma_channels[VAR_4->chip_select];

 if (VAR_8->dma_tx) {
  struct dma_async_tx_descriptor *VAR_9;

  FUNC_2(VAR_8->dma_tx, &VAR_6);

  VAR_9 = FUNC_1(VAR_8->dma_tx, VAR_5->tx_sg.sgl,
          VAR_5->tx_sg.nents,
          VAR_1,
          VAR_2 | VAR_0);
  if (VAR_9) {
   VAR_9->callback = VAR_3;
   VAR_9->callback_param = VAR_4;
   FUNC_3(VAR_9);
  } else {

  }
 }
 FUNC_0(VAR_8->dma_tx);
 FUNC_4(VAR_4, 0, 1);

}
