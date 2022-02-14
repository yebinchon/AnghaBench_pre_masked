
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct at91wdt {scalar_t__ next_heartbeat; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct at91wdt* FUNC_0 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_1(struct watchdog_device *VAR_2)
{
 struct at91wdt *VAR_3 = FUNC_0(VAR_2);

 VAR_3->next_heartbeat = VAR_1 + VAR_2->timeout * VAR_0;
 return 0;
}
