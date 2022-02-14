
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct mpc512x_psc_spi {int clk_ipg; int clk_mclk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct spi_master* FUNC_1 (struct device*) ;
 struct mpc512x_psc_spi* FUNC_2 (struct spi_master*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct spi_master *VAR_1 = FUNC_1(VAR_0);
 struct mpc512x_psc_spi *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->clk_mclk);
 FUNC_0(VAR_2->clk_ipg);

 return 0;
}
