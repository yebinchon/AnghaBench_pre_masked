
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct nmk_pinctrl {int dev; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 struct nmk_pinctrl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static void FUNC_2(struct pinctrl_dev *VAR_0,
      struct pinctrl_gpio_range *VAR_1,
      unsigned VAR_2)
{
 struct nmk_pinctrl *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->dev, "disable pin %u as GPIO\n", VAR_2);

}
