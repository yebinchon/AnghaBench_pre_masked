
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct qla_hw_data {struct task_struct* dpc_thread; int * dpc_hp_wq; int nic_core_unrecoverable; int idc_state_handler; int nic_core_reset; int * dpc_lp_wq; int idc_aen; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static void
FUNC_3(struct qla_hw_data *VAR_0)
{

 if (VAR_0->dpc_lp_wq) {
  FUNC_0(&VAR_0->idc_aen);
  FUNC_1(VAR_0->dpc_lp_wq);
  VAR_0->dpc_lp_wq = ((void*)0);
 }

 if (VAR_0->dpc_hp_wq) {
  FUNC_0(&VAR_0->nic_core_reset);
  FUNC_0(&VAR_0->idc_state_handler);
  FUNC_0(&VAR_0->nic_core_unrecoverable);
  FUNC_1(VAR_0->dpc_hp_wq);
  VAR_0->dpc_hp_wq = ((void*)0);
 }


 if (VAR_0->dpc_thread) {
  struct task_struct *VAR_1 = VAR_0->dpc_thread;





  VAR_0->dpc_thread = ((void*)0);
  FUNC_2(VAR_1);
 }
}
