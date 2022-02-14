
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct pinctrl_dev {int dummy; } ;
struct atlas7_pmx {TYPE_2__* pctl_data; } ;
struct TYPE_4__ {TYPE_1__* funcs; } ;
struct TYPE_3__ {char** groups; size_t num_groups; } ;


 struct atlas7_pmx* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
  u32 VAR_1, const char * const **VAR_2,
  u32 * const VAR_3)
{
 struct atlas7_pmx *VAR_4 = FUNC_0(VAR_0);

 *VAR_2 = VAR_4->pctl_data->funcs[VAR_1].groups;
 *VAR_3 = VAR_4->pctl_data->funcs[VAR_1].num_groups;

 return 0;
}
