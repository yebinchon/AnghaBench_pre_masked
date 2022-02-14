
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
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 struct rn5t618_wdt* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_3)
{
 struct rn5t618_wdt *VAR_4 = FUNC_3(VAR_3);
 unsigned int VAR_5;
 int VAR_6;


 VAR_6 = FUNC_0(VAR_4->rn5t618->regmap, VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4->rn5t618->regmap, VAR_2, VAR_5);
 if (VAR_6)
  return VAR_6;


 return FUNC_1(VAR_4->rn5t618->regmap, VAR_0,
      VAR_1, 0);
}
