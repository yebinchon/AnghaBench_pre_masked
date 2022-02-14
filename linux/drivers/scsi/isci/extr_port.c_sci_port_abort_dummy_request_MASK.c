
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct scu_task_context {int abort; } ;
struct isci_port {size_t physical_port_index; int reserved_tag; struct isci_host* owning_controller; } ;
struct isci_host {struct scu_task_context* task_context_table; } ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct isci_host*,size_t) ;

__attribute__((used)) static void FUNC_2(struct isci_port *VAR_2)
{
 struct isci_host *VAR_3 = VAR_2->owning_controller;
 u16 VAR_4 = VAR_2->reserved_tag;
 struct scu_task_context *VAR_5;
 u32 VAR_6;

 VAR_5 = &VAR_3->task_context_table[FUNC_0(VAR_4)];
 VAR_5->abort = 1;

 VAR_6 = VAR_1 |
    VAR_2->physical_port_index << VAR_0 |
    FUNC_0(VAR_4);

 FUNC_1(VAR_3, VAR_6);
}
