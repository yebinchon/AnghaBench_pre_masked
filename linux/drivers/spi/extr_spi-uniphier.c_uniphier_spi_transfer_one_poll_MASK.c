
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_spi_priv {scalar_t__ tx_bytes; scalar_t__ rx_bytes; scalar_t__ base; } ;
struct spi_transfer {int dummy; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 struct uniphier_spi_priv* FUNC_2 (struct spi_master*) ;
 int FUNC_3 (struct uniphier_spi_priv*) ;
 int FUNC_4 (struct uniphier_spi_priv*) ;
 int FUNC_5 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;

__attribute__((used)) static int FUNC_6(struct spi_master *VAR_3,
       struct spi_device *VAR_4,
       struct spi_transfer *VAR_5)
{
 struct uniphier_spi_priv *VAR_6 = FUNC_2(VAR_3);
 int VAR_7 = VAR_0 * 10;

 while (VAR_6->tx_bytes) {
  FUNC_3(VAR_6);

  while ((VAR_6->rx_bytes - VAR_6->tx_bytes) > 0) {
   while (!(FUNC_1(VAR_6->base + VAR_1) & VAR_2)
        && VAR_7--)
    FUNC_0(100);

   if (VAR_7 == -1)
    goto irq_transfer;

   FUNC_4(VAR_6);
  }
 }

 return 0;

irq_transfer:
 return FUNC_5(VAR_3, VAR_4, VAR_5);
}
