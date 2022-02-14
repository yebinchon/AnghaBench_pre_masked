
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {unsigned int timeout; } ;
struct bcm47xx_wdt {int max_timer_ms; } ;


 int VAR_0 ;
 struct bcm47xx_wdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (char*,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1,
     unsigned int VAR_2)
{
 struct bcm47xx_wdt *VAR_3 = FUNC_0(VAR_1);
 u32 VAR_4 = VAR_3->max_timer_ms;

 if (VAR_2 < 1 || VAR_2 > VAR_4 / 1000) {
  FUNC_1("timeout value must be 1<=x<=%d, using %d\n",
   VAR_4 / 1000, VAR_2);
  return -VAR_0;
 }

 VAR_1->timeout = VAR_2;
 return 0;
}
