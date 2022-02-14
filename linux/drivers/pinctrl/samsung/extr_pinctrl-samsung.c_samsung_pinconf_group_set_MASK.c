
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_pinctrl_drv_data {TYPE_1__* pin_groups; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {unsigned int* pins; unsigned int num_pins; } ;


 struct samsung_pinctrl_drv_data* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int const,unsigned long*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
   unsigned VAR_1, unsigned long *VAR_2,
   unsigned VAR_3)
{
 struct samsung_pinctrl_drv_data *VAR_4;
 const unsigned int *VAR_5;
 unsigned int VAR_6;

 VAR_4 = FUNC_0(VAR_0);
 VAR_5 = VAR_4->pin_groups[VAR_1].pins;

 for (VAR_6 = 0; VAR_6 < VAR_4->pin_groups[VAR_1].num_pins; VAR_6++)
  FUNC_1(VAR_0, VAR_5[VAR_6], VAR_2, VAR_3);

 return 0;
}
