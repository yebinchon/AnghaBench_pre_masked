
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc2952_poweroff {int timer_trigger; int trigger_delay; int gpio_trigger; int timer_wde; scalar_t__ kernel_panic; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct ltc2952_poweroff *VAR_4 = VAR_3;

 if (VAR_4->kernel_panic || FUNC_1(&VAR_4->timer_wde)) {

  return VAR_1;
 }

 if (FUNC_0(VAR_4->gpio_trigger)) {
  FUNC_3(&VAR_4->timer_trigger, VAR_4->trigger_delay,
         VAR_0);
 } else {
  FUNC_2(&VAR_4->timer_trigger);
 }
 return VAR_1;
}
