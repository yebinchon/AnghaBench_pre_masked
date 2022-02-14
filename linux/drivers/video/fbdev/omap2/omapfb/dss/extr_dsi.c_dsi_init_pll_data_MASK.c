
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dss_pll {char* name; int * ops; int * hw; int base; struct clk* clkin; int id; } ;
struct dsi_data {scalar_t__ module_id; int pll_base; struct dss_pll pll; } ;
struct clk {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int *,char*) ;
 struct dsi_data* FUNC_4 (struct platform_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct dss_pll*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 struct dsi_data *VAR_8 = FUNC_4(VAR_7);
 struct dss_pll *VAR_9 = &VAR_8->pll;
 struct clk *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_3(&VAR_7->dev, "sys_clk");
 if (FUNC_1(VAR_10)) {
  FUNC_0("can't get sys_clk\n");
  return FUNC_2(VAR_10);
 }

 VAR_9->name = VAR_8->module_id == 0 ? "dsi0" : "dsi1";
 VAR_9->id = VAR_8->module_id == 0 ? VAR_0 : VAR_1;
 VAR_9->clkin = VAR_10;
 VAR_9->base = VAR_8->pll_base;

 switch (FUNC_6()) {
 case 134:
 case 133:
 case 132:
 case 135:
  VAR_9->hw = &VAR_4;
  break;

 case 130:
 case 129:
 case 131:
  VAR_9->hw = &VAR_5;
  break;

 case 128:
  VAR_9->hw = &VAR_6;
  break;

 default:
  return -VAR_2;
 }

 VAR_9->ops = &VAR_3;

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11)
  return VAR_11;

 return 0;
}
