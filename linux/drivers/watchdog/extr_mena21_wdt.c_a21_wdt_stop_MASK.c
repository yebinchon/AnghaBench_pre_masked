
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct a21_wdt_drv {int * gpios; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct a21_wdt_drv* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1)
{
 struct a21_wdt_drv *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->gpios[VAR_0], 0);

 return 0;
}
