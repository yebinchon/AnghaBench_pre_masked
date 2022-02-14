
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct jz4740_wdt_drvdata {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 struct jz4740_wdt_drvdata* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1)
{
 struct jz4740_wdt_drvdata *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(0x0, VAR_2->base + VAR_0);
 FUNC_0();

 return 0;
}
