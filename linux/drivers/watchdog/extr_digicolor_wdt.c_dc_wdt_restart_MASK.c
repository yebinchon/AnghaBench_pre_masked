
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct dc_wdt {int dummy; } ;


 int FUNC_0 (struct dc_wdt*,int) ;
 int FUNC_1 (int) ;
 struct dc_wdt* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_0, unsigned long VAR_1,
     void *VAR_2)
{
 struct dc_wdt *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(VAR_3, 1);

 FUNC_1(500);

 return 0;
}
