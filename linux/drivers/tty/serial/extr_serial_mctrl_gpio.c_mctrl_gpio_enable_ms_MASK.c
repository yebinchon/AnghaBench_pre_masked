
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mctrl_gpios {int mctrl_on; int * irq; int mctrl_prev; } ;
typedef enum mctrl_gpio_idx { ____Placeholder_mctrl_gpio_idx } mctrl_gpio_idx ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mctrl_gpios*,int *) ;

void FUNC_2(struct mctrl_gpios *VAR_1)
{
 enum mctrl_gpio_idx VAR_2;

 if (VAR_1 == ((void*)0))
  return;


 if (VAR_1->mctrl_on)
  return;

 VAR_1->mctrl_on = 1;


 FUNC_1(VAR_1, &VAR_1->mctrl_prev);

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  if (!VAR_1->irq[VAR_2])
   continue;

  FUNC_0(VAR_1->irq[VAR_2]);
 }
}
