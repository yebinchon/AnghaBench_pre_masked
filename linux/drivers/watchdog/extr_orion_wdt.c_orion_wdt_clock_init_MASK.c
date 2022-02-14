
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct orion_watchdog {int clk; int clk_rate; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0,
    struct orion_watchdog *VAR_1)
{
 int VAR_2;

 VAR_1->clk = FUNC_2(&VAR_0->dev, ((void*)0));
 if (FUNC_0(VAR_1->clk))
  return FUNC_1(VAR_1->clk);
 VAR_2 = FUNC_4(VAR_1->clk);
 if (VAR_2) {
  FUNC_5(VAR_1->clk);
  return VAR_2;
 }

 VAR_1->clk_rate = FUNC_3(VAR_1->clk);
 return 0;
}
