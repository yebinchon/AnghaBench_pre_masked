
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int dummy; } ;
struct da9062_watchdog {TYPE_1__* hw; } ;
struct TYPE_2__ {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct da9062_watchdog*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct da9062_watchdog* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_3)
{
 struct da9062_watchdog *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_4->hw->dev, "Failed to ping the watchdog (err = %d)\n",
   VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_4->hw->regmap,
     VAR_0,
     VAR_1,
     VAR_2);
 if (VAR_5)
  FUNC_1(VAR_4->hw->dev, "Watchdog failed to stop (err = %d)\n",
   VAR_5);

 return VAR_5;
}
