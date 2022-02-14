
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_pm_domain {int num_clks; struct clk** clk; } ;
struct device {int of_node; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct clk* FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct imx_pm_domain *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; ; VAR_4++) {
  struct clk *VAR_6 = FUNC_3(VAR_2->of_node, VAR_4);
  if (FUNC_0(VAR_6))
   break;
  if (VAR_4 >= VAR_1) {
   FUNC_2(VAR_2, "more than %d clocks\n", VAR_1);
   VAR_5 = -VAR_0;
   goto clk_err;
  }
  VAR_3->clk[VAR_4] = VAR_6;
 }
 VAR_3->num_clks = VAR_4;

 return 0;

clk_err:
 while (VAR_4--)
  FUNC_1(VAR_3->clk[VAR_4]);

 return VAR_5;
}
