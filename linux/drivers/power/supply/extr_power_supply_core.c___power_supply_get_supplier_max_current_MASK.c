
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; int member_0; } ;
struct power_supply {TYPE_1__* desc; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* get_property ) (struct power_supply*,int ,union power_supply_propval*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct power_supply*,struct power_supply*) ;
 struct power_supply* FUNC_1 (struct device*) ;
 int FUNC_2 (struct power_supply*,int ,union power_supply_propval*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1,
         void *VAR_2)
{
 union power_supply_propval VAR_3 = {0,};
 struct power_supply *VAR_4 = FUNC_1(VAR_1);
 struct power_supply *VAR_5 = VAR_2;

 if (FUNC_0(VAR_4, VAR_5))
  if (!VAR_4->desc->get_property(VAR_4,
           VAR_0,
           &VAR_3))
   return VAR_3.intval;

 return 0;
}
