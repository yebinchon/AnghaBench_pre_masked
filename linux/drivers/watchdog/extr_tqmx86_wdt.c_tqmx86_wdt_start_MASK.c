
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct tqmx86_wdt {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 struct tqmx86_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1)
{
 struct tqmx86_wdt *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(0x81, VAR_2->io_base + VAR_0);

 return 0;
}
