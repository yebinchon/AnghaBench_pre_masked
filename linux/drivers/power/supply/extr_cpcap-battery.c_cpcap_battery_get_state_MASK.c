
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_battery_state_data {int dummy; } ;
struct cpcap_battery_ddata {struct cpcap_battery_state_data* state; } ;
typedef enum cpcap_battery_state { ____Placeholder_cpcap_battery_state } cpcap_battery_state ;


 int VAR_0 ;

__attribute__((used)) static struct cpcap_battery_state_data *
FUNC_0(struct cpcap_battery_ddata *VAR_1,
   enum cpcap_battery_state VAR_2)
{
 if (VAR_2 >= VAR_0)
  return ((void*)0);

 return &VAR_1->state[VAR_2];
}
