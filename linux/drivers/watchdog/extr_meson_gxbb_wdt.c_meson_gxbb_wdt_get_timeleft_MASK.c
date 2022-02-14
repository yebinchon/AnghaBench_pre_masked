
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct meson_gxbb_wdt {scalar_t__ reg_base; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (scalar_t__) ;
 struct meson_gxbb_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_2(struct watchdog_device *VAR_3)
{
 struct meson_gxbb_wdt *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_4->reg_base + VAR_1);

 return ((VAR_5 & VAR_2) -
  (VAR_5 >> VAR_0)) / 1000;
}
