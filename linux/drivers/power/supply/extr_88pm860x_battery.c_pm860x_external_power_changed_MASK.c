
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct power_supply {TYPE_1__ dev; } ;
struct pm860x_battery_info {int dummy; } ;


 int FUNC_0 (struct pm860x_battery_info*) ;
 struct pm860x_battery_info* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct power_supply *VAR_0)
{
 struct pm860x_battery_info *VAR_1 = FUNC_1(VAR_0->dev.parent);

 FUNC_0(VAR_1);
}
