
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int status; } ;
struct gpio_wdt_priv {int always_running; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpio_wdt_priv*) ;
 int FUNC_1 (int ,int *) ;
 struct gpio_wdt_priv* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1)
{
 struct gpio_wdt_priv *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2->always_running) {
  FUNC_0(VAR_2);
 } else {
  FUNC_1(VAR_0, &VAR_1->status);
 }

 return 0;
}
