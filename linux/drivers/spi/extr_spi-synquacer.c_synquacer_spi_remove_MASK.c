
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synquacer_spi {int clk; int dev; } ;
struct spi_master {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct spi_master* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 struct synquacer_spi* FUNC_3 (struct spi_master*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_1(VAR_0);
 struct synquacer_spi *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_2->dev);

 FUNC_0(VAR_2->clk);

 return 0;
}
