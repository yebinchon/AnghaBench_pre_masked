
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct scsi_qla_host {int dpc_flags; struct qla_hw_data* hw; } ;
struct qla_hw_data {struct task_struct* dpc_thread; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct task_struct*) ;

void
FUNC_2(struct scsi_qla_host *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_1->hw;
 struct task_struct *VAR_3 = VAR_2->dpc_thread;

 if (!FUNC_0(VAR_0, &VAR_1->dpc_flags) && VAR_3)
  FUNC_1(VAR_3);
}
