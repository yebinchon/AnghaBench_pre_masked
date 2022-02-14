
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ssp_cmd_iu {int cdb; scalar_t__ _r_c; int task_attr; int task_prio; scalar_t__ en_fburst; scalar_t__ _r_b; scalar_t__ _r_a; scalar_t__ add_cdb_len; int LUN; } ;
struct TYPE_6__ {TYPE_2__* cmd; int task_attr; int task_prio; int LUN; } ;
struct sas_task {TYPE_3__ ssp_task; } ;
struct TYPE_4__ {struct ssp_cmd_iu cmd; } ;
struct isci_request {TYPE_1__ ssp; } ;
struct TYPE_5__ {int cmd_len; int cmnd; } ;


 struct sas_task* FUNC_0 (struct isci_request*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct isci_request *VAR_0)
{
 struct ssp_cmd_iu *VAR_1;
 struct sas_task *VAR_2 = FUNC_0(VAR_0);

 VAR_1 = &VAR_0->ssp.cmd;

 FUNC_1(VAR_1->LUN, VAR_2->ssp_task.LUN, 8);
 VAR_1->add_cdb_len = 0;
 VAR_1->_r_a = 0;
 VAR_1->_r_b = 0;
 VAR_1->en_fburst = 0;
 VAR_1->task_prio = VAR_2->ssp_task.task_prio;
 VAR_1->task_attr = VAR_2->ssp_task.task_attr;
 VAR_1->_r_c = 0;

 FUNC_2(&VAR_1->cdb, VAR_2->ssp_task.cmd->cmnd,
         (VAR_2->ssp_task.cmd->cmd_len+3) / sizeof(u32));
}
