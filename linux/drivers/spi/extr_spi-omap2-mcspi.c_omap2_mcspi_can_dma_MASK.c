
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {scalar_t__ len; } ;
struct spi_master {int dummy; } ;
struct spi_device {size_t chip_select; int master; } ;
struct omap2_mcspi_dma {int dma_tx; int dma_rx; } ;
struct omap2_mcspi {struct omap2_mcspi_dma* dma_channels; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct spi_master*) ;
 struct omap2_mcspi* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct spi_master *VAR_1,
    struct spi_device *VAR_2,
    struct spi_transfer *VAR_3)
{
 struct omap2_mcspi *VAR_4 = FUNC_1(VAR_2->master);
 struct omap2_mcspi_dma *VAR_5 =
  &VAR_4->dma_channels[VAR_2->chip_select];

 if (!VAR_5->dma_rx || !VAR_5->dma_tx)
  return 0;

 if (FUNC_0(VAR_1))
  return 1;

 return (VAR_3->len >= VAR_0);
}
