
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct sprd_wdt {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct sprd_wdt* FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_4)
{
 struct sprd_wdt *VAR_5 = FUNC_3(VAR_4);
 u32 VAR_6;

 FUNC_2(VAR_5->base);
 VAR_6 = FUNC_0(VAR_5->base + VAR_1);
 VAR_6 &= ~(VAR_0 | VAR_3 |
  VAR_2);
 FUNC_4(VAR_6, VAR_5->base + VAR_1);
 FUNC_1(VAR_5->base);
 return 0;
}
