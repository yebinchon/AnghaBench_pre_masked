
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct uniphier_wdt_dev {int regmap; } ;


 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (struct watchdog_device*) ;
 struct uniphier_wdt_dev* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_0,
      unsigned int VAR_1)
{
 struct uniphier_wdt_dev *VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 == VAR_0->timeout)
  return 0;

 if (FUNC_2(VAR_0)) {
  VAR_4 = FUNC_0(VAR_2->regmap, VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 VAR_0->timeout = VAR_3;

 return 0;
}
