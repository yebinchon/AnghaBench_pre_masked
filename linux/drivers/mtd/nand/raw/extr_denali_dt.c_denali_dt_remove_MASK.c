
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct denali_dt {int clk; int clk_x; int clk_ecc; int controller; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct denali_dt* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct denali_dt *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->controller);
 FUNC_0(VAR_1->clk_ecc);
 FUNC_0(VAR_1->clk_x);
 FUNC_0(VAR_1->clk);

 return 0;
}
