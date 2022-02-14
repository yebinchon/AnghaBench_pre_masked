
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int notifier_call; } ;
struct ltc2952_poweroff {TYPE_1__ panic_notifier; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct ltc2952_poweroff* FUNC_3 (int *,int,int ) ;
 struct ltc2952_poweroff* VAR_3 ;
 int FUNC_4 (struct platform_device*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct platform_device*,struct ltc2952_poweroff*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_8)
{
 int VAR_9;
 struct ltc2952_poweroff *VAR_10;

 if (VAR_7) {
  FUNC_1(&VAR_8->dev, "pm_power_off already registered");
  return -VAR_0;
 }

 VAR_10 = FUNC_3(&VAR_8->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->dev = &VAR_8->dev;
 FUNC_5(VAR_8, VAR_10);

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9)
  return VAR_9;


 VAR_3 = VAR_10;
 VAR_7 = VAR_4;

 VAR_10->panic_notifier.notifier_call = VAR_5;
 FUNC_0(&VAR_6,
           &VAR_10->panic_notifier);
 FUNC_2(&VAR_8->dev, "probe successful\n");

 return 0;
}
