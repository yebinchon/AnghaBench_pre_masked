
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wdt ;
struct TYPE_3__ {int max_timer_ms; } ;
struct ssb_bus {struct platform_device* watchdog; int busnumber; TYPE_1__ extif; TYPE_1__ chipco; } ;
struct platform_device {int dummy; } ;
struct bcm47xx_wdt {int max_timer_ms; int timer_set_ms; int timer_set; TYPE_1__* driver_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 int VAR_1 ;
 struct platform_device* FUNC_2 (int *,char*,int ,struct bcm47xx_wdt*,int) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_6(struct ssb_bus *VAR_6)
{
 struct bcm47xx_wdt VAR_7 = {};
 struct platform_device *VAR_8;

 if (FUNC_4(&VAR_6->chipco)) {
  VAR_7.driver_data = &VAR_6->chipco;
  VAR_7.timer_set = VAR_3;
  VAR_7.timer_set_ms = VAR_2;
  VAR_7.max_timer_ms = VAR_6->chipco.max_timer_ms;
 } else if (FUNC_5(&VAR_6->extif)) {
  VAR_7.driver_data = &VAR_6->extif;
  VAR_7.timer_set = VAR_5;
  VAR_7.timer_set_ms = VAR_4;
  VAR_7.max_timer_ms = VAR_1;
 } else {
  return -VAR_0;
 }

 VAR_8 = FUNC_2(((void*)0), "bcm47xx-wdt",
          VAR_6->busnumber, &VAR_7,
          sizeof(VAR_7));
 if (FUNC_0(VAR_8)) {
  FUNC_3("can not register watchdog device, err: %li\n",
    FUNC_1(VAR_8));
  return FUNC_1(VAR_8);
 }

 VAR_6->watchdog = VAR_8;
 return 0;
}
