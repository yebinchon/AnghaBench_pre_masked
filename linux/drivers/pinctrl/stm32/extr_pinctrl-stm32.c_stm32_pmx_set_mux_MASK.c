
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_pinctrl_group {int pin; } ;
struct stm32_pinctrl {int dev; struct stm32_pinctrl_group* groups; } ;
struct stm32_gpio_bank {int dummy; } ;
struct pinctrl_gpio_range {int gc; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 struct stm32_gpio_bank* FUNC_1 (int ) ;
 struct stm32_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 struct pinctrl_gpio_range* FUNC_3 (struct pinctrl_dev*,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct stm32_pinctrl*,int ,unsigned int) ;
 int FUNC_8 (struct stm32_gpio_bank*,int,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct pinctrl_dev *VAR_1,
       unsigned VAR_2,
       unsigned VAR_3)
{
 bool VAR_4;
 struct stm32_pinctrl *VAR_5 = FUNC_2(VAR_1);
 struct stm32_pinctrl_group *VAR_6 = VAR_5->groups + VAR_3;
 struct pinctrl_gpio_range *VAR_7;
 struct stm32_gpio_bank *VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11;

 VAR_4 = FUNC_7(VAR_5, VAR_6->pin, VAR_2);
 if (!VAR_4) {
  FUNC_0(VAR_5->dev, "invalid function %d on group %d .\n",
    VAR_2, VAR_3);
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_1, VAR_6->pin);
 if (!VAR_7) {
  FUNC_0(VAR_5->dev, "No gpio range defined.\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_7->gc);
 VAR_11 = FUNC_6(VAR_6->pin);

 VAR_9 = FUNC_5(VAR_2);
 VAR_10 = FUNC_4(VAR_2);

 return FUNC_8(VAR_8, VAR_11, VAR_9, VAR_10);
}
