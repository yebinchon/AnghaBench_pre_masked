
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct ts72xx_wdt_priv {int control_reg; int regval; int feed_reg; } ;


 int VAR_0 ;
 struct ts72xx_wdt_priv* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1)
{
 struct ts72xx_wdt_priv *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, VAR_2->feed_reg);
 FUNC_1(VAR_2->regval, VAR_2->control_reg);

 return 0;
}
