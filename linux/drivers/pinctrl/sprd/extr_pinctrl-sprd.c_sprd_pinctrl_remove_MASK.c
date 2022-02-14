
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pinctrl {int pctl; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sprd_pinctrl* FUNC_1 (struct platform_device*) ;

int FUNC_2(struct platform_device *VAR_0)
{
 struct sprd_pinctrl *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pctl);
 return 0;
}
