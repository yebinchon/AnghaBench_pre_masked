
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mctrl_gpios {int mctrl_on; int * irq; } ;
typedef enum mctrl_gpio_idx { ____Placeholder_mctrl_gpio_idx } mctrl_gpio_idx ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct mctrl_gpios *VAR_1)
{
 enum mctrl_gpio_idx VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 if (!VAR_1->mctrl_on)
  return;

 VAR_1->mctrl_on = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  if (!VAR_1->irq[VAR_2])
   continue;

  FUNC_0(VAR_1->irq[VAR_2]);
 }
}
