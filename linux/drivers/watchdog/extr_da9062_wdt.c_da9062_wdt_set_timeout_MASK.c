
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int timeout; } ;
struct da9062_watchdog {TYPE_1__* hw; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct da9062_watchdog*,unsigned int) ;
 int FUNC_2 (int ,char*,int) ;
 struct da9062_watchdog* FUNC_3 (struct watchdog_device*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_1,
      unsigned int VAR_2)
{
 struct da9062_watchdog *VAR_3 = FUNC_3(VAR_1);
 unsigned int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (VAR_5)
  FUNC_2(VAR_3->hw->dev, "Failed to set watchdog timeout (err = %d)\n",
   VAR_5);
 else
  VAR_1->timeout = VAR_0[VAR_4];

 return VAR_5;
}
