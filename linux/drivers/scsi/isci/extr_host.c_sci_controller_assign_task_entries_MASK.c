
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct isci_host {TYPE_1__* smu_registers; scalar_t__ task_context_entries; } ;
struct TYPE_2__ {int * task_context_assignment; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct isci_host *VAR_3)
{
 u32 VAR_4;






 VAR_4 =
  FUNC_2(&VAR_3->smu_registers->task_context_assignment[0]);

 VAR_4 |= (FUNC_1(VAR_2, 0)) |
  (FUNC_1(VAR_0, VAR_3->task_context_entries - 1)) |
  (FUNC_0(VAR_1));

 FUNC_3(VAR_4,
  &VAR_3->smu_registers->task_context_assignment[0]);

}
