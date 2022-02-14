
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct armada_37xx_pinctrl {unsigned int ngroups; TYPE_1__* groups; } ;
struct TYPE_2__ {unsigned int* pins; unsigned int npins; unsigned int extra_npins; } ;


 int VAR_0 ;
 struct armada_37xx_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_1,
          unsigned int VAR_2,
          const unsigned int **VAR_3,
          unsigned int *VAR_4)
{
 struct armada_37xx_pinctrl *VAR_5 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_5->ngroups)
  return -VAR_0;

 *VAR_3 = VAR_5->groups[VAR_2].pins;
 *VAR_4 = VAR_5->groups[VAR_2].npins +
  VAR_5->groups[VAR_2].extra_npins;

 return 0;
}
