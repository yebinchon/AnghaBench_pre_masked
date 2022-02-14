
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct lochnagar_pin_priv {TYPE_2__* func_groups; TYPE_1__* funcs; } ;
struct TYPE_4__ {char** groups; unsigned int ngroups; } ;
struct TYPE_3__ {int type; } ;


 struct lochnagar_pin_priv* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
         unsigned int VAR_1,
         const char * const **VAR_2,
         unsigned int * const VAR_3)
{
 struct lochnagar_pin_priv *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;

 VAR_5 = VAR_4->funcs[VAR_1].type;

 *VAR_2 = VAR_4->func_groups[VAR_5].groups;
 *VAR_3 = VAR_4->func_groups[VAR_5].ngroups;

 return 0;
}
