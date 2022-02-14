
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct msm_pinctrl {int restart_nb; int chip; } ;


 int FUNC_0 (int *) ;
 struct msm_pinctrl* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct platform_device *VAR_0)
{
 struct msm_pinctrl *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->chip);

 FUNC_2(&VAR_1->restart_nb);

 return 0;
}
