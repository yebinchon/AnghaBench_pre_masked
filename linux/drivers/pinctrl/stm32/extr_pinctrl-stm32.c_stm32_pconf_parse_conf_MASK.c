
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_pinctrl {int dev; } ;
struct stm32_gpio_bank {int dummy; } ;
struct pinctrl_gpio_range {int gc; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;







 int FUNC_0 (struct stm32_gpio_bank*,int,int) ;
 int FUNC_1 (int ,char*) ;
 struct stm32_gpio_bank* FUNC_2 (int ) ;
 struct stm32_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 struct pinctrl_gpio_range* FUNC_4 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (struct stm32_gpio_bank*,int,int) ;
 int FUNC_7 (struct stm32_gpio_bank*,int,int) ;
 int FUNC_8 (struct stm32_gpio_bank*,int,int) ;
 int FUNC_9 (struct pinctrl_dev*,struct pinctrl_gpio_range*,unsigned int,int) ;

__attribute__((used)) static int FUNC_10(struct pinctrl_dev *VAR_1,
  unsigned int VAR_2, enum pin_config_param VAR_3,
  enum pin_config_param VAR_4)
{
 struct stm32_pinctrl *VAR_5 = FUNC_3(VAR_1);
 struct pinctrl_gpio_range *VAR_6;
 struct stm32_gpio_bank *VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_6 = FUNC_4(VAR_1, VAR_2);
 if (!VAR_6) {
  FUNC_1(VAR_5->dev, "No gpio range defined.\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_6->gc);
 VAR_8 = FUNC_5(VAR_2);

 switch (VAR_3) {
 case 130:
  VAR_9 = FUNC_7(VAR_7, VAR_8, 0);
  break;
 case 131:
  VAR_9 = FUNC_7(VAR_7, VAR_8, 1);
  break;
 case 128:
  VAR_9 = FUNC_8(VAR_7, VAR_8, VAR_4);
  break;
 case 134:
  VAR_9 = FUNC_6(VAR_7, VAR_8, 0);
  break;
 case 132:
  VAR_9 = FUNC_6(VAR_7, VAR_8, 1);
  break;
 case 133:
  VAR_9 = FUNC_6(VAR_7, VAR_8, 2);
  break;
 case 129:
  FUNC_0(VAR_7, VAR_8, VAR_4);
  VAR_9 = FUNC_9(VAR_1, VAR_6, VAR_2, 0);
  break;
 default:
  VAR_9 = -VAR_0;
 }

 return VAR_9;
}
