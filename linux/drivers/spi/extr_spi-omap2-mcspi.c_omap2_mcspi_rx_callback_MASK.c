
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {size_t chip_select; int master; } ;
struct omap2_mcspi_dma {int dma_rx_completion; } ;
struct omap2_mcspi {struct omap2_mcspi_dma* dma_channels; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct spi_device*,int,int ) ;
 struct omap2_mcspi* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct spi_device *VAR_1 = VAR_0;
 struct omap2_mcspi *VAR_2 = FUNC_2(VAR_1->master);
 struct omap2_mcspi_dma *VAR_3 = &VAR_2->dma_channels[VAR_1->chip_select];


 FUNC_1(VAR_1, 1, 0);

 FUNC_0(&VAR_3->dma_rx_completion);
}
