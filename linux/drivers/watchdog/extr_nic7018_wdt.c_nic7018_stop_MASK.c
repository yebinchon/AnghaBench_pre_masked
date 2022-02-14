
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct nic7018_wdt {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 struct nic7018_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_3)
{
 struct nic7018_wdt *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(0, VAR_4->io_base + VAR_0);
 FUNC_0(0, VAR_4->io_base + VAR_2);
 FUNC_0(0xF0, VAR_4->io_base + VAR_1);

 return 0;
}
