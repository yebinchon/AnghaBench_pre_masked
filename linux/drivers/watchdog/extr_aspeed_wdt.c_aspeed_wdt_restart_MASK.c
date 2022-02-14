
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct aspeed_wdt {int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aspeed_wdt*,int) ;
 int FUNC_1 (int) ;
 struct aspeed_wdt* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_2,
         unsigned long VAR_3, void *VAR_4)
{
 struct aspeed_wdt *VAR_5 = FUNC_2(VAR_2);

 VAR_5->ctrl &= ~VAR_0;
 FUNC_0(VAR_5, 128 * VAR_1 / 1000);

 FUNC_1(1000);

 return 0;
}
