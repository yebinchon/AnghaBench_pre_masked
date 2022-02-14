
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct platform_device {int dummy; } ;
struct mpc8xxx_spi {int dummy; } ;


 int FUNC_0 (struct mpc8xxx_spi*) ;
 struct spi_master* FUNC_1 (struct platform_device*) ;
 struct mpc8xxx_spi* FUNC_2 (struct spi_master*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_1(VAR_0);
 struct mpc8xxx_spi *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2);
 return 0;
}
