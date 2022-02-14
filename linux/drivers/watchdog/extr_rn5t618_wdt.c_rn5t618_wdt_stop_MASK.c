
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int dummy; } ;
struct rn5t618_wdt {TYPE_1__* rn5t618; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct rn5t618_wdt* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_2)
{
 struct rn5t618_wdt *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_3->rn5t618->regmap, VAR_0,
      VAR_1, 0);
}
