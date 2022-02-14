
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {unsigned int npins; unsigned int* pins; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pinctrl_dev *VAR_1,
      unsigned int VAR_2,
      const unsigned int **VAR_3,
      unsigned int *VAR_4)
{
 *VAR_4 = VAR_0[VAR_2].npins;
 *VAR_3 = VAR_0[VAR_2].pins;

 return 0;
}
