
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dev; } ;
struct spi_device {int chip_select; struct spi_master* master; } ;
struct omap2_mcspi_dma {int * dma_rx; int * dma_tx; int dma_tx_ch_name; int dma_rx_ch_name; int dma_tx_completion; int dma_rx_completion; } ;
struct omap2_mcspi {struct omap2_mcspi_dma* dma_channels; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 struct omap2_mcspi* FUNC_5 (struct spi_master*) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_0)
{
 struct spi_master *VAR_1 = VAR_0->master;
 struct omap2_mcspi *VAR_2;
 struct omap2_mcspi_dma *VAR_3;
 int VAR_4 = 0;

 VAR_2 = FUNC_5(VAR_1);
 VAR_3 = VAR_2->dma_channels + VAR_0->chip_select;

 FUNC_4(&VAR_3->dma_rx_completion);
 FUNC_4(&VAR_3->dma_tx_completion);

 VAR_3->dma_rx = FUNC_3(&VAR_1->dev,
          VAR_3->dma_rx_ch_name);
 if (FUNC_0(VAR_3->dma_rx)) {
  VAR_4 = FUNC_1(VAR_3->dma_rx);
  VAR_3->dma_rx = ((void*)0);
  goto no_dma;
 }

 VAR_3->dma_tx = FUNC_3(&VAR_1->dev,
          VAR_3->dma_tx_ch_name);
 if (FUNC_0(VAR_3->dma_tx)) {
  VAR_4 = FUNC_1(VAR_3->dma_tx);
  VAR_3->dma_tx = ((void*)0);
  FUNC_2(VAR_3->dma_rx);
  VAR_3->dma_rx = ((void*)0);
 }

no_dma:
 return VAR_4;
}
