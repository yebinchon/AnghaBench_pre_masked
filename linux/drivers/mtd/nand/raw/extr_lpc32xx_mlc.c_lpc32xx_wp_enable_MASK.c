
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpc32xx_nand_host {TYPE_1__* ncfg; } ;
struct TYPE_2__ {int wp_gpio; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct lpc32xx_nand_host *VAR_0)
{
 if (FUNC_0(VAR_0->ncfg->wp_gpio))
  FUNC_1(VAR_0->ncfg->wp_gpio, 0);
}
