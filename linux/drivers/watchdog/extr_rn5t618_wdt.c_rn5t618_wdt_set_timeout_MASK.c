
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct watchdog_device {int timeout; } ;
struct rn5t618_wdt {TYPE_1__* rn5t618; } ;
struct TYPE_5__ {int time; int reg_val; } ;
struct TYPE_4__ {int regmap; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_2__* VAR_3 ;
 struct rn5t618_wdt* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_4,
       unsigned int VAR_5)
{
 struct rn5t618_wdt *VAR_6 = FUNC_2(VAR_4);
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {
  if (VAR_3[VAR_8].time + 1 >= VAR_5)
   break;
 }

 if (VAR_8 == FUNC_0(VAR_3))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_6->rn5t618->regmap, VAR_1,
     VAR_2,
     VAR_3[VAR_8].reg_val);
 if (!VAR_7)
  VAR_4->timeout = VAR_3[VAR_8].time;

 return VAR_7;
}
