
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int timeout; } ;
struct jz4740_wdt_drvdata {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct watchdog_device*,int ) ;
 int FUNC_2 (scalar_t__) ;
 struct jz4740_wdt_drvdata* FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_2)
{
 struct jz4740_wdt_drvdata *VAR_3 = FUNC_3(VAR_2);
 u8 VAR_4;

 VAR_4 = FUNC_2(VAR_3->base + VAR_0);

 FUNC_0();
 FUNC_1(VAR_2, VAR_2->timeout);


 if (!(VAR_4 & VAR_1))
  FUNC_4(VAR_1, VAR_3->base + VAR_0);

 return 0;
}
