
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct TYPE_2__ {int max_curr; scalar_t__ active; } ;
struct tcpm_port {int current_limit; TYPE_1__ pps_data; } ;



__attribute__((used)) static int FUNC_0(struct tcpm_port *VAR_0,
        union power_supply_propval *VAR_1)
{
 if (VAR_0->pps_data.active)
  VAR_1->intval = VAR_0->pps_data.max_curr * 1000;
 else
  VAR_1->intval = VAR_0->current_limit * 1000;

 return 0;
}
