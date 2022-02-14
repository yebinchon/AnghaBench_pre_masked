
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct dwc3_of_simple {int resets; int pulse_resets; scalar_t__ num_clocks; int clks; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct device*) ;
 struct dwc3_of_simple* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct dwc3_of_simple *VAR_1 = FUNC_3(VAR_0);
 struct device *VAR_2 = &VAR_0->dev;

 FUNC_2(VAR_2);

 FUNC_0(VAR_1->num_clocks, VAR_1->clks);
 FUNC_1(VAR_1->num_clocks, VAR_1->clks);
 VAR_1->num_clocks = 0;

 if (!VAR_1->pulse_resets)
  FUNC_7(VAR_1->resets);

 FUNC_8(VAR_1->resets);

 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 FUNC_6(VAR_2);

 return 0;
}
