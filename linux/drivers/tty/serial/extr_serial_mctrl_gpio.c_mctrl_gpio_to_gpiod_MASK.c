
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mctrl_gpios {struct gpio_desc** gpio; } ;
struct gpio_desc {int dummy; } ;
typedef enum mctrl_gpio_idx { ____Placeholder_mctrl_gpio_idx } mctrl_gpio_idx ;



struct gpio_desc *FUNC_0(struct mctrl_gpios *VAR_0,
          enum mctrl_gpio_idx VAR_1)
{
 if (VAR_0 == ((void*)0))
  return ((void*)0);

 return VAR_0->gpio[VAR_1];
}
