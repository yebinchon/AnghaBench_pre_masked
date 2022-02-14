
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_cec {int adap; int notifier; int clk; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct tegra_cec* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct tegra_cec *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(VAR_1->clk);

 FUNC_0(VAR_1->notifier);
 FUNC_1(VAR_1->adap);

 return 0;
}
