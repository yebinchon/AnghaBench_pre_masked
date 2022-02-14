
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct gpio_wdt_priv {int hw_algo; int state; int gpiod; } ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 struct gpio_wdt_priv* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_0)
{
 struct gpio_wdt_priv *VAR_1 = FUNC_2(VAR_0);

 switch (VAR_1->hw_algo) {
 case 128:

  VAR_1->state = !VAR_1->state;
  FUNC_0(VAR_1->gpiod, VAR_1->state);
  break;
 case 129:

  FUNC_0(VAR_1->gpiod, 1);
  FUNC_1(1);
  FUNC_0(VAR_1->gpiod, 0);
  break;
 }
 return 0;
}
