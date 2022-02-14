
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct platform_device {int dummy; } ;
struct bcm2835aux_spi {int clk; } ;


 int FUNC_0 (struct bcm2835aux_spi*) ;
 int FUNC_1 (struct bcm2835aux_spi*) ;
 int FUNC_2 (int ) ;
 struct spi_master* FUNC_3 (struct platform_device*) ;
 struct bcm2835aux_spi* FUNC_4 (struct spi_master*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_3(VAR_0);
 struct bcm2835aux_spi *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2);

 FUNC_1(VAR_2);


 FUNC_2(VAR_2->clk);

 return 0;
}
