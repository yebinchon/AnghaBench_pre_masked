
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2880_priv {int dev; int * gpio; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 struct rt2880_priv* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_1,
      struct pinctrl_gpio_range *VAR_2,
      unsigned int VAR_3)
{
 struct rt2880_priv *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4->gpio[VAR_3]) {
  FUNC_0(VAR_4->dev, "pin %d is not set to gpio mux\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}
