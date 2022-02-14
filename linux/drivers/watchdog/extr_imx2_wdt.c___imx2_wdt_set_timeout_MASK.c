
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct imx2_wdt_device {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct imx2_wdt_device* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static void FUNC_3(struct watchdog_device *VAR_2,
       unsigned int VAR_3)
{
 struct imx2_wdt_device *VAR_4 = FUNC_2(VAR_2);

 FUNC_1(VAR_4->regmap, VAR_0, VAR_1,
      FUNC_0(VAR_3));
}
