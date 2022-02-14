
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {struct clk* name; } ;
struct device {int of_node; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct device*,char*,struct clk*) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct clk* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct device*,struct clk*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct generic_pm_domain *VAR_0,
      struct device *VAR_1)
{
 struct clk *VAR_2;
 int VAR_3;
 int VAR_4;

 FUNC_2(VAR_1, "attaching to power domain '%s'\n", VAR_0->name);

 VAR_4 = FUNC_6(VAR_1);
 if (VAR_4) {
  FUNC_3(VAR_1, "pm_clk_create failed %d\n", VAR_4);
  return VAR_4;
 }

 VAR_3 = 0;
 while ((VAR_2 = FUNC_4(VAR_1->of_node, VAR_3++)) && !FUNC_0(VAR_2)) {
  FUNC_2(VAR_1, "adding clock '%pC' to list of PM clocks\n", VAR_2);
  VAR_4 = FUNC_5(VAR_1, VAR_2);
  if (VAR_4) {
   FUNC_3(VAR_1, "pm_clk_add_clk failed %d\n", VAR_4);
   FUNC_1(VAR_2);
   FUNC_7(VAR_1);
   return VAR_4;
  }
 }

 return 0;
}
