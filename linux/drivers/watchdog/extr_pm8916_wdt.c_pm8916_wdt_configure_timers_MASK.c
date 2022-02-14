
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {scalar_t__ pretimeout; scalar_t__ timeout; } ;
struct pm8916_wdt {scalar_t__ baseaddr; int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 struct pm8916_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_2)
{
 struct pm8916_wdt *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->regmap,
      VAR_3->baseaddr + VAR_0,
      VAR_2->timeout - VAR_2->pretimeout);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_3->regmap,
       VAR_3->baseaddr + VAR_1,
       VAR_2->pretimeout);
}
