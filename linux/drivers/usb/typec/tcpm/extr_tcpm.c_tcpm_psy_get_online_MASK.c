
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct TYPE_2__ {scalar_t__ active; } ;
struct tcpm_port {TYPE_1__ pps_data; scalar_t__ vbus_charge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct tcpm_port *VAR_3,
          union power_supply_propval *VAR_4)
{
 if (VAR_3->vbus_charge) {
  if (VAR_3->pps_data.active)
   VAR_4->intval = VAR_2;
  else
   VAR_4->intval = VAR_0;
 } else {
  VAR_4->intval = VAR_1;
 }

 return 0;
}
