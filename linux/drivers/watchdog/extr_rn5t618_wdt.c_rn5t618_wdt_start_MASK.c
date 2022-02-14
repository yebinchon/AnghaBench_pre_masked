
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int timeout; } ;
struct rn5t618_wdt {TYPE_1__* rn5t618; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct watchdog_device*,int ) ;
 struct rn5t618_wdt* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_6)
{
 struct rn5t618_wdt *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_6->timeout);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_0(VAR_7->rn5t618->regmap, VAR_2,
     VAR_3,
     VAR_3);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_0(VAR_7->rn5t618->regmap, VAR_4,
     VAR_5,
     VAR_5);
 if (VAR_8)
  return VAR_8;


 return FUNC_0(VAR_7->rn5t618->regmap, VAR_0,
      VAR_1,
      VAR_1);
}
