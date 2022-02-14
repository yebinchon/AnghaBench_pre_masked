
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ci_hdrc_imx_data {int clk; int clk_ipg; int clk_ahb; int clk_per; scalar_t__ need_three_clks; } ;


 int FUNC_0 (int ) ;
 struct ci_hdrc_imx_data* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct ci_hdrc_imx_data *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->need_three_clks) {
  FUNC_0(VAR_1->clk_per);
  FUNC_0(VAR_1->clk_ahb);
  FUNC_0(VAR_1->clk_ipg);
 } else {
  FUNC_0(VAR_1->clk);
 }
}
