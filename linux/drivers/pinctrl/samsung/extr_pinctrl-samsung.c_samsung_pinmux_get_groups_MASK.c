
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_pinctrl_drv_data {TYPE_1__* pmx_functions; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {char** groups; unsigned int num_groups; } ;


 struct samsung_pinctrl_drv_data* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
  unsigned VAR_1, const char * const **VAR_2,
  unsigned * const VAR_3)
{
 struct samsung_pinctrl_drv_data *VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 *VAR_2 = VAR_4->pmx_functions[VAR_1].groups;
 *VAR_3 = VAR_4->pmx_functions[VAR_1].num_groups;
 return 0;
}
