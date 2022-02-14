
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct aspeed_wdt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aspeed_wdt*,int) ;
 struct aspeed_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1)
{
 struct aspeed_wdt *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, VAR_1->timeout * VAR_0);

 return 0;
}
