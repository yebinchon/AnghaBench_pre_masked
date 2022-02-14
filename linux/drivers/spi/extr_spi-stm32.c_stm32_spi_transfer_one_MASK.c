
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_spi {int cur_usedma; TYPE_1__* cfg; int dev; scalar_t__ rx_buf; int rx_len; scalar_t__ tx_buf; int tx_len; } ;
struct spi_transfer {int len; scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct spi_master {scalar_t__ (* can_dma ) (struct spi_master*,struct spi_device*,struct spi_transfer*) ;} ;
struct spi_device {int dummy; } ;
struct TYPE_2__ {int (* transfer_one_irq ) (struct stm32_spi*) ;} ;


 int FUNC_0 (int ,char*) ;
 struct stm32_spi* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (struct stm32_spi*,struct spi_transfer*) ;
 int FUNC_3 (struct stm32_spi*,struct spi_device*,struct spi_transfer*) ;
 scalar_t__ FUNC_4 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_5 (struct stm32_spi*) ;

__attribute__((used)) static int FUNC_6(struct spi_master *VAR_0,
      struct spi_device *VAR_1,
      struct spi_transfer *VAR_2)
{
 struct stm32_spi *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_3->tx_buf = VAR_2->tx_buf;
 VAR_3->rx_buf = VAR_2->rx_buf;
 VAR_3->tx_len = VAR_3->tx_buf ? VAR_2->len : 0;
 VAR_3->rx_len = VAR_3->rx_buf ? VAR_2->len : 0;

 VAR_3->cur_usedma = (VAR_0->can_dma &&
      VAR_0->can_dma(VAR_0, VAR_1, VAR_2));

 VAR_4 = FUNC_3(VAR_3, VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_3->dev, "SPI transfer setup failed\n");
  return VAR_4;
 }

 if (VAR_3->cur_usedma)
  return FUNC_2(VAR_3, VAR_2);
 else
  return VAR_3->cfg->transfer_one_irq(VAR_3);
}
