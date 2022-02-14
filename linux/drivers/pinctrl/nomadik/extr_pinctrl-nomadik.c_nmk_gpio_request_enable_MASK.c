
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {struct gpio_chip* gc; } ;
struct pinctrl_dev {int dummy; } ;
struct nmk_pinctrl {int dev; } ;
struct nmk_gpio_chip {int clk; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct nmk_gpio_chip*,unsigned int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned int) ;
 int FUNC_4 (int ,char*) ;
 struct nmk_gpio_chip* FUNC_5 (struct gpio_chip*) ;
 struct nmk_pinctrl* FUNC_6 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_3,
       struct pinctrl_gpio_range *VAR_4,
       unsigned VAR_5)
{
 struct nmk_pinctrl *VAR_6 = FUNC_6(VAR_3);
 struct nmk_gpio_chip *VAR_7;
 struct gpio_chip *VAR_8;
 unsigned VAR_9;

 if (!VAR_4) {
  FUNC_4(VAR_6->dev, "invalid range\n");
  return -VAR_0;
 }
 if (!VAR_4->gc) {
  FUNC_4(VAR_6->dev, "missing GPIO chip in range\n");
  return -VAR_0;
 }
 VAR_8 = VAR_4->gc;
 VAR_7 = FUNC_5(VAR_8);

 FUNC_3(VAR_6->dev, "enable pin %u as GPIO\n", VAR_5);

 FUNC_2(VAR_7->clk);
 VAR_9 = VAR_5 % VAR_2;

 FUNC_0(VAR_7, VAR_9, VAR_1);
 FUNC_1(VAR_7->clk);

 return 0;
}
