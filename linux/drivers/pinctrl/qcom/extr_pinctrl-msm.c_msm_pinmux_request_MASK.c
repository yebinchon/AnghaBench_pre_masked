
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct msm_pinctrl {struct gpio_chip chip; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_chip*,unsigned int) ;
 struct msm_pinctrl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_1, unsigned VAR_2)
{
 struct msm_pinctrl *VAR_3 = FUNC_1(VAR_1);
 struct gpio_chip *VAR_4 = &VAR_3->chip;

 return FUNC_0(VAR_4, VAR_2) ? 0 : -VAR_0;
}
