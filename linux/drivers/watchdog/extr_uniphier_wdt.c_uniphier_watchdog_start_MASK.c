
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct uniphier_wdt_dev {int regmap; } ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 struct uniphier_wdt_dev* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_0)
{
 struct uniphier_wdt_dev *VAR_1 = FUNC_2(VAR_0);
 unsigned int VAR_2;

 VAR_2 = FUNC_1(VAR_0->timeout);

 return FUNC_0(VAR_1->regmap, VAR_2);
}
