
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int len; } ;
struct mpc8xxx_spi {struct spi_transfer* xfer_in_progress; int rx_dma; scalar_t__ map_rx_dma; int tx_dma; scalar_t__ map_tx_dma; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;

void FUNC_1(struct mpc8xxx_spi *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 struct spi_transfer *VAR_4 = VAR_2->xfer_in_progress;

 if (VAR_2->map_tx_dma)
  FUNC_0(VAR_3, VAR_2->tx_dma, VAR_4->len, VAR_1);
 if (VAR_2->map_rx_dma)
  FUNC_0(VAR_3, VAR_2->rx_dma, VAR_4->len, VAR_0);
 VAR_2->xfer_in_progress = ((void*)0);
}
