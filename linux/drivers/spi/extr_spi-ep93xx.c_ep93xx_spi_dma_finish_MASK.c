
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_master {int dummy; } ;
struct sg_table {int nents; int sgl; } ;
struct ep93xx_spi {struct sg_table tx_sgt; struct dma_chan* dma_tx; struct sg_table rx_sgt; struct dma_chan* dma_rx; } ;
struct dma_chan {TYPE_1__* device; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct ep93xx_spi* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static void FUNC_2(struct spi_master *VAR_1,
      enum dma_data_direction VAR_2)
{
 struct ep93xx_spi *VAR_3 = FUNC_1(VAR_1);
 struct dma_chan *VAR_4;
 struct sg_table *VAR_5;

 if (VAR_2 == VAR_0) {
  VAR_4 = VAR_3->dma_rx;
  VAR_5 = &VAR_3->rx_sgt;
 } else {
  VAR_4 = VAR_3->dma_tx;
  VAR_5 = &VAR_3->tx_sgt;
 }

 FUNC_0(VAR_4->device->dev, VAR_5->sgl, VAR_5->nents, VAR_2);
}
