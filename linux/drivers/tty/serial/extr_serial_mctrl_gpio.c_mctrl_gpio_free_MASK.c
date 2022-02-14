
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mctrl_gpios {scalar_t__* gpio; scalar_t__* irq; TYPE_1__* port; } ;
struct device {int dummy; } ;
typedef enum mctrl_gpio_idx { ____Placeholder_mctrl_gpio_idx } mctrl_gpio_idx ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,struct mctrl_gpios*) ;
 int FUNC_1 (struct device*,scalar_t__) ;
 int FUNC_2 (struct device*,struct mctrl_gpios*) ;

void FUNC_3(struct device *VAR_1, struct mctrl_gpios *VAR_2)
{
 enum mctrl_gpio_idx VAR_3;

 if (VAR_2 == ((void*)0))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->irq[VAR_3])
   FUNC_0(VAR_2->port->dev, VAR_2->irq[VAR_3], VAR_2);

  if (VAR_2->gpio[VAR_3])
   FUNC_1(VAR_1, VAR_2->gpio[VAR_3]);
 }
 FUNC_2(VAR_1, VAR_2);
}
