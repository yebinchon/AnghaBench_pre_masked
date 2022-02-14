
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dss_pll {char* name; int * ops; int * hw; struct clk* clkin; int base; int id; } ;
struct hdmi_pll_data {int base; struct dss_pll pll; } ;
struct clk {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;





 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct dss_pll*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5, struct hdmi_pll_data *VAR_6)
{
 struct dss_pll *VAR_7 = &VAR_6->pll;
 struct clk *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(&VAR_5->dev, "sys_clk");
 if (FUNC_1(VAR_8)) {
  FUNC_0("can't get sys_clk\n");
  return FUNC_2(VAR_8);
 }

 VAR_7->name = "hdmi";
 VAR_7->id = VAR_0;
 VAR_7->base = VAR_6->base;
 VAR_7->clkin = VAR_8;

 switch (FUNC_5()) {
 case 130:
 case 129:
 case 131:
  VAR_7->hw = &VAR_3;
  break;

 case 128:
 case 132:
  VAR_7->hw = &VAR_4;
  break;

 default:
  return -VAR_1;
 }

 VAR_7->ops = &VAR_2;

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9)
  return VAR_9;

 return 0;
}
