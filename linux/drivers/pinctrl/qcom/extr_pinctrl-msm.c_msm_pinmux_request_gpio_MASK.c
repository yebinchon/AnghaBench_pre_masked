
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct msm_pingroup {int * funcs; int nfuncs; } ;
struct msm_pinctrl {TYPE_1__* soc; } ;
struct TYPE_2__ {struct msm_pingroup* groups; } ;


 int FUNC_0 (struct pinctrl_dev*,int ,unsigned int) ;
 struct msm_pinctrl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
       struct pinctrl_gpio_range *VAR_1,
       unsigned VAR_2)
{
 struct msm_pinctrl *VAR_3 = FUNC_1(VAR_0);
 const struct msm_pingroup *VAR_4 = &VAR_3->soc->groups[VAR_2];


 if (!VAR_4->nfuncs)
  return 0;


 return FUNC_0(VAR_0, VAR_4->funcs[0], VAR_2);
}
