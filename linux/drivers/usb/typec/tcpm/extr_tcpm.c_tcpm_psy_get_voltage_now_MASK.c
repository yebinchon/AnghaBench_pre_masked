
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct tcpm_port {int supply_voltage; } ;



__attribute__((used)) static int FUNC_0(struct tcpm_port *VAR_0,
        union power_supply_propval *VAR_1)
{
 VAR_1->intval = VAR_0->supply_voltage * 1000;

 return 0;
}
