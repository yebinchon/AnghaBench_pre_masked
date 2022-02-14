
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; int parent; } ;
struct a21_wdt_drv {int * gpios; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 struct a21_wdt_drv* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_2,
          unsigned int VAR_3)
{
 struct a21_wdt_drv *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3 != 1 && VAR_3 != 30) {
  FUNC_0(VAR_2->parent, "Only 1 and 30 allowed as timeout\n");
  return -VAR_0;
 }

 if (VAR_3 == 30 && VAR_2->timeout == 1) {
  FUNC_0(VAR_2->parent,
   "Transition from fast to slow mode not allowed\n");
  return -VAR_0;
 }

 if (VAR_3 == 1)
  FUNC_1(VAR_4->gpios[VAR_1], 1);
 else
  FUNC_1(VAR_4->gpios[VAR_1], 0);

 VAR_2->timeout = VAR_3;

 return 0;
}
