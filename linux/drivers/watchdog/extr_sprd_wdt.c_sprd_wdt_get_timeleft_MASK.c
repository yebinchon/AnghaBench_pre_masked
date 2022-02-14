
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct sprd_wdt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sprd_wdt*) ;
 struct sprd_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static u32 FUNC_2(struct watchdog_device *VAR_1)
{
 struct sprd_wdt *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 return VAR_3 / VAR_0;
}
