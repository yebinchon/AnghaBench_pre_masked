
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct dwc3_exynos {int num_clks; size_t suspend_clk_idx; int vdd10; int vdd33; int * clks; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;
 struct dwc3_exynos* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct dwc3_exynos *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 FUNC_1(&VAR_1->dev, ((void*)0), VAR_0);

 for (VAR_3 = VAR_2->num_clks - 1; VAR_3 >= 0; VAR_3--)
  FUNC_0(VAR_2->clks[VAR_3]);

 if (VAR_2->suspend_clk_idx >= 0)
  FUNC_0(VAR_2->clks[VAR_2->suspend_clk_idx]);

 FUNC_3(VAR_2->vdd33);
 FUNC_3(VAR_2->vdd10);

 return 0;
}
