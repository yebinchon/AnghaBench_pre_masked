
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct mei_wdt {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mei_wdt*) ;
 struct mei_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_3)
{
 struct mei_wdt *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 if (VAR_4->state != VAR_1)
  return 0;

 VAR_4->state = VAR_2;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4->state = VAR_0;

 return 0;
}
