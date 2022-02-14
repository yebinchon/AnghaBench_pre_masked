
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rzn1_pinctrl {unsigned int ngroups; TYPE_1__* groups; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {unsigned int* pins; unsigned int npins; } ;


 int VAR_0 ;
 struct rzn1_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_1,
          unsigned int VAR_2, const unsigned int **VAR_3,
          unsigned int *VAR_4)
{
 struct rzn1_pinctrl *VAR_5 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_5->ngroups)
  return -VAR_0;

 *VAR_3 = VAR_5->groups[VAR_2].pins;
 *VAR_4 = VAR_5->groups[VAR_2].npins;

 return 0;
}
