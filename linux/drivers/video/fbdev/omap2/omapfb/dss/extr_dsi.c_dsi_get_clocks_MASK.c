
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dsi_data {struct clk* dss_clk; } ;
struct clk {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int *,char*) ;
 struct dsi_data* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct dsi_data *VAR_1 = FUNC_4(VAR_0);
 struct clk *VAR_2;

 VAR_2 = FUNC_3(&VAR_0->dev, "fck");
 if (FUNC_1(VAR_2)) {
  FUNC_0("can't get fck\n");
  return FUNC_2(VAR_2);
 }

 VAR_1->dss_clk = VAR_2;

 return 0;
}
