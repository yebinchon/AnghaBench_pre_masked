
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scu_task_context {int initiator_request; int connection_rate; size_t task_index; int do_not_dma_ssp_good_response; int task_phase; int remote_node_index; int context_type; int valid; int protocol_type; int logical_port_index; } ;
struct isci_port {int reserved_rni; int physical_port_index; struct isci_host* owning_controller; } ;
struct isci_host {struct scu_task_context* task_context_table; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct scu_task_context*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct isci_port *VAR_3, u16 VAR_4)
{
 struct isci_host *VAR_5 = VAR_3->owning_controller;
 struct scu_task_context *VAR_6;

 VAR_6 = &VAR_5->task_context_table[FUNC_0(VAR_4)];
 FUNC_1(VAR_6, 0, sizeof(struct scu_task_context));

 VAR_6->initiator_request = 1;
 VAR_6->connection_rate = 1;
 VAR_6->logical_port_index = VAR_3->physical_port_index;
 VAR_6->protocol_type = VAR_0;
 VAR_6->task_index = FUNC_0(VAR_4);
 VAR_6->valid = VAR_2;
 VAR_6->context_type = VAR_1;
 VAR_6->remote_node_index = VAR_3->reserved_rni;
 VAR_6->do_not_dma_ssp_good_response = 1;
 VAR_6->task_phase = 0x01;
}
