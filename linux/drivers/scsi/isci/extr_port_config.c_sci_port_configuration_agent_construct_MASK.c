
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sci_port_configuration_agent {int phy_configured_mask; int phy_ready_mask; int timer_pending; TYPE_1__* phy_valid_port_range; int * link_down_handler; int * link_up_handler; } ;
struct TYPE_2__ {scalar_t__ max_index; scalar_t__ min_index; } ;


 size_t VAR_0 ;

void FUNC_0(
 struct sci_port_configuration_agent *VAR_1)
{
 u32 VAR_2;

 VAR_1->phy_configured_mask = 0x00;
 VAR_1->phy_ready_mask = 0x00;

 VAR_1->link_up_handler = ((void*)0);
 VAR_1->link_down_handler = ((void*)0);

 VAR_1->timer_pending = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->phy_valid_port_range[VAR_2].min_index = 0;
  VAR_1->phy_valid_port_range[VAR_2].max_index = 0;
 }
}
