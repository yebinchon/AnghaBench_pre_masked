
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct sp805_wdt {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct sp805_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static bool FUNC_2(struct watchdog_device *VAR_2)
{
 struct sp805_wdt *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4 = FUNC_0(VAR_3->base + VAR_1);

 return (VAR_4 & VAR_0) == VAR_0;
}
