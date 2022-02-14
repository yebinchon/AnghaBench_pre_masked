
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_gpio_bank {int dummy; } ;
struct pinctrl_gpio_range {int gc; } ;
struct pinctrl_dev {int dummy; } ;


 struct stm32_gpio_bank* FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct stm32_gpio_bank*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_0,
   struct pinctrl_gpio_range *VAR_1, unsigned VAR_2,
   bool VAR_3)
{
 struct stm32_gpio_bank *VAR_4 = FUNC_0(VAR_1->gc);
 int VAR_5 = FUNC_1(VAR_2);

 return FUNC_2(VAR_4, VAR_5, !VAR_3, 0);
}
