
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpcap_battery_state_data {int voltage; } ;
struct TYPE_3__ {int voltage_max_design; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
struct cpcap_battery_ddata {TYPE_2__ config; } ;


 struct cpcap_battery_state_data* FUNC_0 (struct cpcap_battery_ddata*) ;

__attribute__((used)) static bool FUNC_1(struct cpcap_battery_ddata *VAR_0)
{
 struct cpcap_battery_state_data *VAR_1 = FUNC_0(VAR_0);


 if (VAR_1->voltage >= (VAR_0->config.info.voltage_max_design - 4000))
  return 1;

 return 0;
}
