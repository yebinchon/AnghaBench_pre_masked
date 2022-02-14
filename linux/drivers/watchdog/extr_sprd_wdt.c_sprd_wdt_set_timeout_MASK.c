
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int pretimeout; int timeout; } ;
struct sprd_wdt {int dummy; } ;


 int FUNC_0 (struct sprd_wdt*,int ,int ) ;
 struct sprd_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_0,
    u32 VAR_1)
{
 struct sprd_wdt *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1 == VAR_0->timeout)
  return 0;

 VAR_0->timeout = VAR_1;

 return FUNC_0(VAR_2, VAR_1, VAR_0->pretimeout);
}
