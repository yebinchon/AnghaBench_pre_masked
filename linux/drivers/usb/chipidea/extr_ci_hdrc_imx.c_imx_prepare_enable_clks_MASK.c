
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ci_hdrc_imx_data {int clk; int clk_ipg; int clk_ahb; int clk_per; scalar_t__ need_three_clks; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct ci_hdrc_imx_data* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct ci_hdrc_imx_data *VAR_1 = FUNC_3(VAR_0);
 int VAR_2 = 0;

 if (VAR_1->need_three_clks) {
  VAR_2 = FUNC_1(VAR_1->clk_ipg);
  if (VAR_2) {
   FUNC_2(VAR_0,
    "Failed to prepare/enable ipg clk, err=%d\n",
    VAR_2);
   return VAR_2;
  }

  VAR_2 = FUNC_1(VAR_1->clk_ahb);
  if (VAR_2) {
   FUNC_2(VAR_0,
    "Failed to prepare/enable ahb clk, err=%d\n",
    VAR_2);
   FUNC_0(VAR_1->clk_ipg);
   return VAR_2;
  }

  VAR_2 = FUNC_1(VAR_1->clk_per);
  if (VAR_2) {
   FUNC_2(VAR_0,
    "Failed to prepare/enable per clk, err=%d\n",
    VAR_2);
   FUNC_0(VAR_1->clk_ahb);
   FUNC_0(VAR_1->clk_ipg);
   return VAR_2;
  }
 } else {
  VAR_2 = FUNC_1(VAR_1->clk);
  if (VAR_2) {
   FUNC_2(VAR_0,
    "Failed to prepare/enable clk, err=%d\n",
    VAR_2);
   return VAR_2;
  }
 }

 return VAR_2;
}
