
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; int member_0; } ;
struct power_supply {TYPE_1__* desc; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; int (* get_property ) (struct power_supply*,int ,union power_supply_propval*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct power_supply* FUNC_0 (struct device*) ;
 int FUNC_1 (struct power_supply*,int ,union power_supply_propval*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, void *VAR_3)
{
 union power_supply_propval VAR_4 = {0,};
 struct power_supply *VAR_5 = FUNC_0(VAR_2);
 unsigned int *VAR_6 = VAR_3;

 (*VAR_6)++;
 if (VAR_5->desc->type != VAR_1)
  if (!VAR_5->desc->get_property(VAR_5, VAR_0,
     &VAR_4))
   return VAR_4.intval;

 return 0;
}
