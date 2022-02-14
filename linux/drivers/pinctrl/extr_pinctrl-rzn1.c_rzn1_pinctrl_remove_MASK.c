
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rzn1_pinctrl {int clk; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct rzn1_pinctrl* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct rzn1_pinctrl *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->clk);

 return 0;
}
