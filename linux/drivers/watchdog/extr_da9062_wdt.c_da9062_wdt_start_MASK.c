
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct watchdog_device {int dummy; } ;
struct TYPE_3__ {int timeout; } ;
struct da9062_watchdog {TYPE_2__* hw; TYPE_1__ wdtdev; } ;
struct TYPE_4__ {int dev; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct da9062_watchdog*,unsigned int) ;
 int FUNC_2 (int ,char*,int) ;
 struct da9062_watchdog* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_0)
{
 struct da9062_watchdog *VAR_1 = FUNC_3(VAR_0);
 unsigned int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1->wdtdev.timeout);
 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_2(VAR_1->hw->dev, "Watchdog failed to start (err = %d)\n",
   VAR_3);

 return VAR_3;
}
