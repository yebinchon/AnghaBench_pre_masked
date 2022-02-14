
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct imx2_wdt_device {int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct imx2_wdt_device* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct watchdog_device *VAR_5 = VAR_4;
 struct imx2_wdt_device *VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_6->regmap, VAR_0,
     VAR_1, VAR_1);

 FUNC_2(VAR_5);

 return VAR_2;
}
