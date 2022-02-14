
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imxfb_info {int enabled; scalar_t__ regs; int clk_ipg; int clk_ahb; int clk_per; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct imxfb_info *VAR_1)
{
 if (!VAR_1->enabled)
  return;

 FUNC_1("Disabling LCD controller\n");

 FUNC_0(VAR_1->clk_per);
 FUNC_0(VAR_1->clk_ahb);
 FUNC_0(VAR_1->clk_ipg);
 VAR_1->enabled = 0;

 FUNC_2(0, VAR_1->regs + VAR_0);
}
