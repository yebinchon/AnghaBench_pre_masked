
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_spi_priv {int speed_hz; } ;
struct spi_transfer {unsigned long len; } ;
struct spi_master {int dummy; } ;
struct spi_device {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct uniphier_spi_priv* FUNC_1 (struct spi_master*) ;
 int FUNC_2 (struct spi_device*,struct spi_transfer*) ;
 int FUNC_3 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;
 int FUNC_4 (struct spi_master*,struct spi_device*,struct spi_transfer*) ;

__attribute__((used)) static int FUNC_5(struct spi_master *VAR_3,
         struct spi_device *VAR_4,
         struct spi_transfer *VAR_5)
{
 struct uniphier_spi_priv *VAR_6 = FUNC_1(VAR_3);
 unsigned long VAR_7;


 if (!VAR_5->len)
  return 0;

 FUNC_2(VAR_4, VAR_5);





 VAR_7 = FUNC_0(VAR_1 * VAR_6->speed_hz,
     VAR_2 * VAR_0);
 if (VAR_5->len > VAR_7)
  return FUNC_3(VAR_3, VAR_4, VAR_5);
 else
  return FUNC_4(VAR_3, VAR_4, VAR_5);
}
