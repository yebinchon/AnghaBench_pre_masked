
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; int pretimeout; int min_timeout; } ;
struct sprd_wdt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sprd_wdt*,int ,int ) ;
 struct sprd_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1,
       u32 VAR_2)
{
 struct sprd_wdt *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2 < VAR_1->min_timeout)
  return -VAR_0;

 VAR_1->pretimeout = VAR_2;

 return FUNC_0(VAR_3, VAR_1->timeout, VAR_2);
}
