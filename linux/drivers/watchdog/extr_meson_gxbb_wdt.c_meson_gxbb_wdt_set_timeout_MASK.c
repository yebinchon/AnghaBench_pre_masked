
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct meson_gxbb_wdt {scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct watchdog_device*) ;
 struct meson_gxbb_wdt* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_2,
          unsigned int VAR_3)
{
 struct meson_gxbb_wdt *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5 = VAR_3 * 1000;

 if (VAR_5 > VAR_1)
  VAR_5 = VAR_1;

 VAR_2->timeout = VAR_3;

 FUNC_0(VAR_2);

 FUNC_2(VAR_5, VAR_4->reg_base + VAR_0);

 return 0;
}
