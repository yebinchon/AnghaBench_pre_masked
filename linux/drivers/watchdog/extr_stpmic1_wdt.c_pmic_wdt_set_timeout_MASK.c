
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {unsigned int timeout; } ;
struct stpmic1_wdt {TYPE_1__* pmic; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct stpmic1_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1,
    unsigned int VAR_2)
{
 struct stpmic1_wdt *VAR_3 = FUNC_1(VAR_1);

 VAR_1->timeout = VAR_2;

 return FUNC_0(VAR_3->pmic->regmap, VAR_0, VAR_2 - 1);
}
