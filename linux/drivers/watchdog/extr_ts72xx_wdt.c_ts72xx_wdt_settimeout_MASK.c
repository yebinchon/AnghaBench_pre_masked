
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct ts72xx_wdt_priv {int regval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (struct watchdog_device*) ;
 scalar_t__ FUNC_2 (struct watchdog_device*) ;
 struct ts72xx_wdt_priv* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_4, unsigned int VAR_5)
{
 struct ts72xx_wdt_priv *VAR_6 = FUNC_3(VAR_4);

 if (VAR_5 == 1) {
  VAR_6->regval = VAR_0;
 } else if (VAR_5 == 2) {
  VAR_6->regval = VAR_1;
 } else if (VAR_5 <= 4) {
  VAR_6->regval = VAR_2;
  VAR_5 = 4;
 } else {
  VAR_6->regval = VAR_3;
  if (VAR_5 <= 8)
   VAR_5 = 8;
 }

 VAR_4->timeout = VAR_5;

 if (FUNC_2(VAR_4)) {
  FUNC_1(VAR_4);
  FUNC_0(VAR_4);
 }

 return 0;
}
