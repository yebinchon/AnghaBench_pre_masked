
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ltc2952_poweroff {int * gpio_trigger; int * gpio_kill; int * gpio_watchdog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,char*,int ) ;
 int * FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *,int ,int ,int,char*,struct ltc2952_poweroff*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ltc2952_poweroff*) ;
 int VAR_4 ;
 int FUNC_11 (struct ltc2952_poweroff*) ;
 struct ltc2952_poweroff* FUNC_12 (struct platform_device*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 int VAR_6;
 struct ltc2952_poweroff *VAR_7 = FUNC_12(VAR_5);

 FUNC_10(VAR_7);

 VAR_7->gpio_watchdog = FUNC_5(&VAR_5->dev, "watchdog",
          VAR_1);
 if (FUNC_0(VAR_7->gpio_watchdog)) {
  VAR_6 = FUNC_1(VAR_7->gpio_watchdog);
  FUNC_2(&VAR_5->dev, "unable to claim gpio \"watchdog\"\n");
  return VAR_6;
 }

 VAR_7->gpio_kill = FUNC_5(&VAR_5->dev, "kill", VAR_1);
 if (FUNC_0(VAR_7->gpio_kill)) {
  VAR_6 = FUNC_1(VAR_7->gpio_kill);
  FUNC_2(&VAR_5->dev, "unable to claim gpio \"kill\"\n");
  return VAR_6;
 }

 VAR_7->gpio_trigger = FUNC_6(&VAR_5->dev, "trigger",
           VAR_0);
 if (FUNC_0(VAR_7->gpio_trigger)) {





  FUNC_2(&VAR_5->dev, "unable to claim gpio \"trigger\"\n");
  VAR_7->gpio_trigger = ((void*)0);
 }

 if (FUNC_8(&VAR_5->dev, FUNC_9(VAR_7->gpio_trigger),
        VAR_4,
        (VAR_2 | VAR_3),
        "ltc2952-poweroff",
        VAR_7)) {
  if (VAR_7->gpio_trigger) {
   FUNC_4(&VAR_5->dev,
     "unable to configure the trigger interrupt\n");
   FUNC_7(&VAR_5->dev, VAR_7->gpio_trigger);
   VAR_7->gpio_trigger = ((void*)0);
  }
  FUNC_3(&VAR_5->dev,
    "power down trigger input will not be used\n");
  FUNC_11(VAR_7);
 }

 return 0;
}
