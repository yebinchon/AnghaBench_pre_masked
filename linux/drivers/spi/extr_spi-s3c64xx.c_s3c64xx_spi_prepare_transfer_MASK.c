
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_master {int dma_tx; int dma_rx; } ;
struct TYPE_4__ {int ch; } ;
struct TYPE_3__ {int ch; } ;
struct s3c64xx_spi_driver_data {TYPE_2__ tx_dma; TYPE_1__ rx_dma; } ;


 scalar_t__ FUNC_0 (struct s3c64xx_spi_driver_data*) ;
 struct s3c64xx_spi_driver_data* FUNC_1 (struct spi_master*) ;

__attribute__((used)) static int FUNC_2(struct spi_master *VAR_0)
{
 struct s3c64xx_spi_driver_data *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_1))
  return 0;

 VAR_0->dma_rx = VAR_1->rx_dma.ch;
 VAR_0->dma_tx = VAR_1->tx_dma.ch;

 return 0;
}
