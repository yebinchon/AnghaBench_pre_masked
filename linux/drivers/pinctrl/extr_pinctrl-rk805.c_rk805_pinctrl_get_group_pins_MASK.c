
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk805_pctrl_info {TYPE_1__* groups; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {unsigned int* pins; unsigned int npins; } ;


 struct rk805_pctrl_info* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
     unsigned int VAR_1,
     const unsigned int **VAR_2,
     unsigned int *VAR_3)
{
 struct rk805_pctrl_info *VAR_4 = FUNC_0(VAR_0);

 *VAR_2 = VAR_4->groups[VAR_1].pins;
 *VAR_3 = VAR_4->groups[VAR_1].npins;

 return 0;
}
