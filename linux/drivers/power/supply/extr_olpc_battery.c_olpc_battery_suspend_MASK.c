
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct olpc_battery_data {TYPE_2__* olpc_bat; TYPE_1__* olpc_ac; } ;
typedef int pm_message_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct olpc_battery_data* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4,
    pm_message_t VAR_5)
{
 struct olpc_battery_data *VAR_6 = FUNC_3(VAR_4);

 if (FUNC_0(&VAR_6->olpc_ac->dev))
  FUNC_2(VAR_0);
 else
  FUNC_1(VAR_0);

 if (FUNC_0(&VAR_6->olpc_bat->dev))
  FUNC_2(VAR_3 | VAR_2
       | VAR_1);
 else
  FUNC_1(VAR_3 | VAR_2
         | VAR_1);

 return 0;
}
