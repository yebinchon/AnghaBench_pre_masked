
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct lpc32xx_nand_host {TYPE_1__* ncfg; int clk; int dma_chan; int irq; int nand_chip; } ;
struct TYPE_2__ {int wp_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct lpc32xx_nand_host*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct lpc32xx_nand_host*) ;
 int FUNC_6 (int *) ;
 struct lpc32xx_nand_host* FUNC_7 (struct platform_device*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct lpc32xx_nand_host *VAR_2 = FUNC_7(VAR_1);

 FUNC_6(&VAR_2->nand_chip);
 FUNC_3(VAR_2->irq, VAR_2);
 if (VAR_0)
  FUNC_2(VAR_2->dma_chan);

 FUNC_0(VAR_2->clk);
 FUNC_1(VAR_2->clk);

 FUNC_5(VAR_2);
 FUNC_4(VAR_2->ncfg->wp_gpio);

 return 0;
}
