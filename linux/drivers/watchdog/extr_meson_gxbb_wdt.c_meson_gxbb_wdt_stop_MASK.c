
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct meson_gxbb_wdt {scalar_t__ reg_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct meson_gxbb_wdt* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_2)
{
 struct meson_gxbb_wdt *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(FUNC_0(VAR_3->reg_base + VAR_1) & ~VAR_0,
        VAR_3->reg_base + VAR_1);

 return 0;
}
