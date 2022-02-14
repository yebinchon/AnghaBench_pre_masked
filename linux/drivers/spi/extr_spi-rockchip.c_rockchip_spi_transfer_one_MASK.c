
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int bits_per_word; int len; int rx_buf; int tx_buf; } ;
struct spi_master {int (* can_dma ) (struct spi_master*,struct spi_device*,struct spi_transfer*) ;} ;
struct spi_device {int dummy; } ;
struct rockchip_spi {int n_bytes; int dev; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct rockchip_spi*,struct spi_device*,struct spi_transfer*,int) ;
 int FUNC_4 (struct rockchip_spi*,struct spi_master*,struct spi_transfer*) ;
 int FUNC_5 (struct rockchip_spi*,struct spi_transfer*) ;
 struct rockchip_spi* FUNC_6 (struct spi_master*) ;
 int FUNC_7 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;

__attribute__((used)) static int FUNC_8(
  struct spi_master *VAR_5,
  struct spi_device *VAR_6,
  struct spi_transfer *VAR_7)
{
 struct rockchip_spi *VAR_8 = FUNC_6(VAR_5);
 bool VAR_9;

 FUNC_0(FUNC_2(VAR_8->regs + VAR_3) &&
  (FUNC_2(VAR_8->regs + VAR_2) & VAR_4));

 if (!VAR_7->tx_buf && !VAR_7->rx_buf) {
  FUNC_1(VAR_8->dev, "No buffer for transfer\n");
  return -VAR_0;
 }

 if (VAR_7->len > VAR_1) {
  FUNC_1(VAR_8->dev, "Transfer is too long (%d)\n", VAR_7->len);
  return -VAR_0;
 }

 VAR_8->n_bytes = VAR_7->bits_per_word <= 8 ? 1 : 2;

 VAR_9 = VAR_5->can_dma ? VAR_5->can_dma(VAR_5, VAR_6, VAR_7) : 0;

 FUNC_3(VAR_8, VAR_6, VAR_7, VAR_9);

 if (VAR_9)
  return FUNC_4(VAR_8, VAR_5, VAR_7);

 return FUNC_5(VAR_8, VAR_7);
}
