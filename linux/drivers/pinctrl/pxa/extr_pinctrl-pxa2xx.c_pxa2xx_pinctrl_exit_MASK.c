
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_pinctrl {int pctl_dev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct pxa_pinctrl* FUNC_1 (struct platform_device*) ;

int FUNC_2(struct platform_device *VAR_0)
{
 struct pxa_pinctrl *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pctl_dev);
 return 0;
}
