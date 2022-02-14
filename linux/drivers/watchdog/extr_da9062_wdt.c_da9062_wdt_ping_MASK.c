
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int dummy; } ;
struct da9062_watchdog {TYPE_1__* hw; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct da9062_watchdog*) ;
 int FUNC_1 (int ,char*,int) ;
 struct da9062_watchdog* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_0)
{
 struct da9062_watchdog *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  FUNC_1(VAR_1->hw->dev, "Failed to ping the watchdog (err = %d)\n",
   VAR_2);

 return VAR_2;
}
