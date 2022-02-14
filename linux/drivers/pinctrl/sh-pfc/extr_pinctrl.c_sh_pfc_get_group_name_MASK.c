
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_pfc_pinctrl {TYPE_3__* pfc; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_6__ {TYPE_2__* info; } ;
struct TYPE_5__ {TYPE_1__* groups; } ;
struct TYPE_4__ {char const* name; } ;


 struct sh_pfc_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static const char *FUNC_1(struct pinctrl_dev *VAR_0,
      unsigned VAR_1)
{
 struct sh_pfc_pinctrl *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->pfc->info->groups[VAR_1].name;
}
