
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pmx_func {int dummy; } ;
struct samsung_pinctrl_drv_data {unsigned int nr_groups; unsigned int nr_functions; struct samsung_pmx_func* pmx_functions; struct samsung_pmx_func* pin_groups; } ;
typedef struct samsung_pmx_func samsung_pin_group ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 scalar_t__ FUNC_0 (struct samsung_pmx_func*) ;
 int FUNC_1 (struct samsung_pmx_func*) ;
 int FUNC_2 (struct device*,char*) ;
 struct samsung_pmx_func* FUNC_3 (struct device*,struct samsung_pinctrl_drv_data*,unsigned int*) ;
 struct samsung_pmx_func* FUNC_4 (struct device*,struct samsung_pinctrl_drv_data*,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0,
        struct samsung_pinctrl_drv_data *VAR_1)
{
 struct device *VAR_2 = &VAR_0->dev;
 struct samsung_pin_group *VAR_3;
 struct samsung_pmx_func *VAR_4;
 unsigned int VAR_5 = 0, VAR_6 = 0;

 VAR_3 = FUNC_4(VAR_2, VAR_1, &VAR_5);
 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_2, "failed to parse pin groups\n");
  return FUNC_1(VAR_3);
 }

 VAR_4 = FUNC_3(VAR_2, VAR_1, &VAR_6);
 if (FUNC_0(VAR_4)) {
  FUNC_2(VAR_2, "failed to parse pin functions\n");
  return FUNC_1(VAR_4);
 }

 VAR_1->pin_groups = VAR_3;
 VAR_1->nr_groups = VAR_5;
 VAR_1->pmx_functions = VAR_4;
 VAR_1->nr_functions = VAR_6;

 return 0;
}
