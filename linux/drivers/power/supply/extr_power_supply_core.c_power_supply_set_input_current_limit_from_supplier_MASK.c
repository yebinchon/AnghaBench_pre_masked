
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; int member_0; } ;
struct power_supply {TYPE_1__* desc; } ;
struct TYPE_2__ {int (* set_property ) (struct power_supply*,int ,union power_supply_propval*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,struct power_supply*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct power_supply*,int ,union power_supply_propval*) ;

int FUNC_2(struct power_supply *VAR_5)
{
 union power_supply_propval VAR_6 = {0,};
 int VAR_7;

 if (!VAR_5->desc->set_property)
  return -VAR_0;






 VAR_7 = FUNC_0(VAR_4, ((void*)0), VAR_5,
          VAR_3);
 if (VAR_7 <= 0)
  return (VAR_7 == 0) ? -VAR_1 : VAR_7;

 VAR_6.intval = VAR_7;

 return VAR_5->desc->set_property(VAR_5,
    VAR_2, &VAR_6);
}
