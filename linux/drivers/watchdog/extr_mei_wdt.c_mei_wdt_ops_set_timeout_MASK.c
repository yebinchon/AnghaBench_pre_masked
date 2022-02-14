
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct mei_wdt {unsigned int timeout; } ;


 struct mei_wdt* FUNC_0 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_0,
       unsigned int VAR_1)
{

 struct mei_wdt *VAR_2 = FUNC_0(VAR_0);


 VAR_2->timeout = VAR_1;
 VAR_0->timeout = VAR_1;

 return 0;
}
