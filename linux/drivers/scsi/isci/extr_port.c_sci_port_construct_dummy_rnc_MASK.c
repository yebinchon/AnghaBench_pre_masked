
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t remote_node_index; int remote_node_port_width; int nexus_loss_timer_enable; int check_bit; int is_valid; int is_remote_node_context; scalar_t__ arbitration_wait_time; scalar_t__ function_number; int logical_port_index; scalar_t__ remote_sas_address_lo; scalar_t__ remote_sas_address_hi; } ;
union scu_remote_node_context {TYPE_2__ ssp; } ;
typedef size_t u16 ;
struct isci_port {int physical_port_index; TYPE_1__* owning_controller; } ;
struct TYPE_3__ {union scu_remote_node_context* remote_node_context_table; } ;


 int FUNC_0 (union scu_remote_node_context*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct isci_port *VAR_0, u16 VAR_1)
{
 union scu_remote_node_context *VAR_2;

 VAR_2 = &VAR_0->owning_controller->remote_node_context_table[VAR_1];

 FUNC_0(VAR_2, 0, sizeof(union scu_remote_node_context));

 VAR_2->ssp.remote_sas_address_hi = 0;
 VAR_2->ssp.remote_sas_address_lo = 0;

 VAR_2->ssp.remote_node_index = VAR_1;
 VAR_2->ssp.remote_node_port_width = 1;
 VAR_2->ssp.logical_port_index = VAR_0->physical_port_index;

 VAR_2->ssp.nexus_loss_timer_enable = 0;
 VAR_2->ssp.check_bit = 0;
 VAR_2->ssp.is_valid = 1;
 VAR_2->ssp.is_remote_node_context = 1;
 VAR_2->ssp.function_number = 0;
 VAR_2->ssp.arbitration_wait_time = 0;
}
