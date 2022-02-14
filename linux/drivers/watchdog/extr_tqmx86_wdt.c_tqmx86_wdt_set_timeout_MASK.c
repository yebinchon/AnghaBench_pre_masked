
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {unsigned int timeout; } ;
struct tqmx86_wdt {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int,scalar_t__) ;
 unsigned int FUNC_2 (unsigned int) ;
 struct tqmx86_wdt* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_1, unsigned int VAR_2)
{
 struct tqmx86_wdt *VAR_3 = FUNC_3(VAR_1);
 u8 VAR_4;

 VAR_2 = FUNC_2(VAR_2);
 VAR_4 = FUNC_0(VAR_2) | 0x90;
 VAR_4 += 3;
 FUNC_1(VAR_4, VAR_3->io_base + VAR_0);

 VAR_1->timeout = VAR_2;

 return 0;
}
