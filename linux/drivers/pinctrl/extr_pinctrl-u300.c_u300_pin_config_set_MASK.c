
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {unsigned int pin_base; unsigned int base; int gc; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 struct pinctrl_gpio_range* FUNC_1 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_2 (int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1, unsigned VAR_2,
          unsigned long *VAR_3, unsigned VAR_4)
{
 struct pinctrl_gpio_range *VAR_5 =
  FUNC_1(VAR_1, VAR_2);
 int VAR_6, VAR_7;

 if (!VAR_5)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {

  VAR_6 = FUNC_2(VAR_5->gc,
   (VAR_2 - VAR_5->pin_base + VAR_5->base),
   FUNC_0(VAR_3[VAR_7]));
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
