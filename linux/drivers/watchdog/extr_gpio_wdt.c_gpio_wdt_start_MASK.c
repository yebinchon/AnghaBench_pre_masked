
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int status; } ;
struct gpio_wdt_priv {scalar_t__ state; int gpiod; } ;


 int VAR_0 ;
 int FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 struct gpio_wdt_priv* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_1)
{
 struct gpio_wdt_priv *VAR_2 = FUNC_3(VAR_1);

 VAR_2->state = 0;
 FUNC_1(VAR_2->gpiod, VAR_2->state);

 FUNC_2(VAR_0, &VAR_1->status);

 return FUNC_0(VAR_1);
}
