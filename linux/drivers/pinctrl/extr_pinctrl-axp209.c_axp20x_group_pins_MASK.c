
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct axp20x_pctl {TYPE_1__* desc; } ;
struct TYPE_2__ {int * pins; } ;


 struct axp20x_pctl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0, unsigned int VAR_1,
        const unsigned int **VAR_2, unsigned int *VAR_3)
{
 struct axp20x_pctl *VAR_4 = FUNC_0(VAR_0);

 *VAR_2 = (unsigned int *)&VAR_4->desc->pins[VAR_1];
 *VAR_3 = 1;

 return 0;
}
