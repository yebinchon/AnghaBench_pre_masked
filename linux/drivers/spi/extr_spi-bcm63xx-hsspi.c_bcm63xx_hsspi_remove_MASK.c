
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct platform_device {int dummy; } ;
struct bcm63xx_hsspi {int clk; int pll_clk; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 struct spi_master* FUNC_2 (struct platform_device*) ;
 struct bcm63xx_hsspi* FUNC_3 (struct spi_master*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct spi_master *VAR_2 = FUNC_2(VAR_1);
 struct bcm63xx_hsspi *VAR_3 = FUNC_3(VAR_2);


 FUNC_0(0, VAR_3->regs + VAR_0);
 FUNC_1(VAR_3->pll_clk);
 FUNC_1(VAR_3->clk);

 return 0;
}
