
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_pinctrl_drv_data {TYPE_1__* pin_groups; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {unsigned int* pins; } ;


 struct samsung_pinctrl_drv_data* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int const,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
    unsigned int VAR_1, unsigned long *VAR_2)
{
 struct samsung_pinctrl_drv_data *VAR_3;
 const unsigned int *VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = VAR_3->pin_groups[VAR_1].pins;
 FUNC_1(VAR_0, VAR_4[0], VAR_2);
 return 0;
}
