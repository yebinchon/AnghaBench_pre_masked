
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct da9062_watchdog* FUNC_3 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_2, unsigned long VAR_3,
         void *VAR_4)
{
 struct da9062_watchdog *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5->hw->regmap,
      VAR_0,
      VAR_1);
 if (VAR_6)
  FUNC_0(VAR_5->hw->dev, "Failed to shutdown (err = %d)\n",
     VAR_6);


 FUNC_1(500);

 return VAR_6;
}
