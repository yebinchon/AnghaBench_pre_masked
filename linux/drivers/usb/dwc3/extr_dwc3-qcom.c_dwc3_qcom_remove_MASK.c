
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct dwc3_qcom {int num_clocks; int resets; int * clks; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 struct dwc3_qcom* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct dwc3_qcom *VAR_1 = FUNC_3(VAR_0);
 struct device *VAR_2 = &VAR_0->dev;
 int VAR_3;

 FUNC_2(VAR_2);

 for (VAR_3 = VAR_1->num_clocks - 1; VAR_3 >= 0; VAR_3--) {
  FUNC_0(VAR_1->clks[VAR_3]);
  FUNC_1(VAR_1->clks[VAR_3]);
 }
 VAR_1->num_clocks = 0;

 FUNC_6(VAR_1->resets);

 FUNC_4(VAR_2);
 FUNC_5(VAR_2);

 return 0;
}
