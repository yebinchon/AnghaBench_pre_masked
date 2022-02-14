
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int dummy; } ;
struct nic7018_wdt {int period; scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (int ,int) ;
 struct nic7018_wdt* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_3(struct watchdog_device *VAR_1)
{
 struct nic7018_wdt *VAR_2 = FUNC_2(VAR_1);
 u8 VAR_3;

 VAR_3 = FUNC_0(VAR_2->io_base + VAR_0) & 0xF;
 if (!VAR_3)
  return 0;

 return FUNC_1(VAR_2->period, VAR_3);
}
