
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct jz4740_wdt_drvdata {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct jz4740_wdt_drvdata* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1)
{
 struct jz4740_wdt_drvdata *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(0x0, VAR_2->base + VAR_0);
 return 0;
}
