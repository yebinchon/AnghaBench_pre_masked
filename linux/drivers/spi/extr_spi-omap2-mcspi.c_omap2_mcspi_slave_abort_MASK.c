
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct omap2_mcspi_dma {int dma_tx_completion; int dma_rx_completion; } ;
struct omap2_mcspi {int slave_aborted; int txdone; struct omap2_mcspi_dma* dma_channels; } ;


 int FUNC_0 (int *) ;
 struct omap2_mcspi* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_0)
{
 struct omap2_mcspi *VAR_1 = FUNC_1(VAR_0);
 struct omap2_mcspi_dma *VAR_2 = VAR_1->dma_channels;

 VAR_1->slave_aborted = 1;
 FUNC_0(&VAR_2->dma_rx_completion);
 FUNC_0(&VAR_2->dma_tx_completion);
 FUNC_0(&VAR_1->txdone);

 return 0;
}
