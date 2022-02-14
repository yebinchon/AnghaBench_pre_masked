
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_pinctrl_priv {TYPE_1__* socdata; } ;
struct pinctrl_gpio_range {unsigned int* pins; int npins; unsigned int pin_base; scalar_t__ id; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {int (* get_gpio_muxval ) (unsigned int,unsigned int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct uniphier_pinctrl_priv* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct pinctrl_dev*,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_1,
         struct pinctrl_gpio_range *VAR_2,
         unsigned VAR_3)
{
 struct uniphier_pinctrl_priv *VAR_4 = FUNC_1(VAR_1);
 unsigned int VAR_5;
 int VAR_6, VAR_7;

 if (VAR_2->pins) {
  for (VAR_7 = 0; VAR_7 < VAR_2->npins; VAR_7++)
   if (VAR_2->pins[VAR_7] == VAR_3)
    break;

  if (FUNC_0(VAR_7 == VAR_2->npins))
   return -VAR_0;

  VAR_5 = VAR_7;
 } else {
  VAR_5 = VAR_3 - VAR_2->pin_base;
 }

 VAR_5 += VAR_2->id;

 VAR_6 = VAR_4->socdata->get_gpio_muxval(VAR_3, VAR_5);

 return FUNC_3(VAR_1, VAR_3, VAR_6);
}
