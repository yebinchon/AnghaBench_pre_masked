
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct platform_device {int dummy; } ;
struct efm32_spi_ddata {int clk; int rxirq; int txirq; int bitbang; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct efm32_spi_ddata*,int ,int ) ;
 int FUNC_2 (int ,struct efm32_spi_ddata*) ;
 struct spi_master* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 struct efm32_spi_ddata* FUNC_5 (struct spi_master*) ;
 int FUNC_6 (struct spi_master*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct spi_master *VAR_2 = FUNC_3(VAR_1);
 struct efm32_spi_ddata *VAR_3 = FUNC_5(VAR_2);

 FUNC_4(&VAR_3->bitbang);

 FUNC_1(VAR_3, 0, VAR_0);

 FUNC_2(VAR_3->txirq, VAR_3);
 FUNC_2(VAR_3->rxirq, VAR_3);
 FUNC_0(VAR_3->clk);
 FUNC_6(VAR_2);

 return 0;
}
