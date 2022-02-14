
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_valid; } ;
union scu_remote_node_context {TYPE_1__ ssp; } ;
typedef size_t u8 ;
typedef size_t u32 ;
typedef size_t u16 ;
struct isci_port {size_t physical_port_index; size_t reserved_rni; struct isci_host* owning_controller; } ;
struct isci_host {TYPE_2__* smu_registers; union scu_remote_node_context* remote_node_context_table; } ;
struct TYPE_4__ {int interrupt_status; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct isci_host*,size_t) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct isci_port *VAR_2)
{
 struct isci_host *VAR_3 = VAR_2->owning_controller;
 u8 VAR_4 = VAR_2->physical_port_index;
 union scu_remote_node_context *VAR_5;
 u16 VAR_6 = VAR_2->reserved_rni;
 u32 VAR_7;

 VAR_5 = &VAR_3->remote_node_context_table[VAR_6];

 VAR_5->ssp.is_valid = 0;





 FUNC_0(&VAR_3->smu_registers->interrupt_status);
 FUNC_2(10);

 VAR_7 = VAR_1 |
    VAR_4 << VAR_0 | VAR_6;

 FUNC_1(VAR_3, VAR_7);
}
