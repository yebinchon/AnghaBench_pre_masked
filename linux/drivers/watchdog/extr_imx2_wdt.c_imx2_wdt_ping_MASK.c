
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct imx2_wdt_device {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 struct imx2_wdt_device* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_3)
{
 struct imx2_wdt_device *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4->regmap, VAR_2, VAR_0);
 FUNC_0(VAR_4->regmap, VAR_2, VAR_1);
 return 0;
}
