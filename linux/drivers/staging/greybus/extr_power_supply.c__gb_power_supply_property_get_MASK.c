
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union power_supply_propval {int dummy; } power_supply_propval ;
struct gb_power_supply {int dummy; } ;
struct gb_connection {TYPE_1__* bundle; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct gb_power_supply*,int,union power_supply_propval*) ;
 int FUNC_1 (struct gb_power_supply*,int,union power_supply_propval*) ;
 int FUNC_2 (int *,char*,int) ;
 struct gb_connection* FUNC_3 (struct gb_power_supply*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct gb_power_supply *VAR_0,
      enum power_supply_property VAR_1,
      union power_supply_propval *VAR_2)
{
 struct gb_connection *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;





 if (FUNC_4(VAR_1))
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);

 if (VAR_4 < 0)
  FUNC_2(&VAR_3->bundle->dev, "get property %u\n", VAR_1);

 return 0;
}
