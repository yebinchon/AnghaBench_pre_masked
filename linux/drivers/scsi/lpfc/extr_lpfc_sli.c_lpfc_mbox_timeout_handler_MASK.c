
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lpfc_sli {int sli_flag; TYPE_4__* mbox_active; } ;
struct lpfc_hba {int hbalock; int link_state; TYPE_2__* pport; struct lpfc_sli sli; } ;
struct TYPE_7__ {int mbxCommand; } ;
struct TYPE_5__ {TYPE_3__ mb; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
struct TYPE_6__ {int work_port_lock; int work_port_events; int port_state; } ;
typedef TYPE_3__ MAILBOX_t ;
typedef TYPE_4__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,int ,int,char*,...) ;
 int FUNC_1 (struct lpfc_hba*) ;
 scalar_t__ FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct lpfc_hba *VAR_7)
{
 LPFC_MBOXQ_t *VAR_8 = VAR_7->sli.mbox_active;
 MAILBOX_t *VAR_9 = ((void*)0);

 struct lpfc_sli *VAR_10 = &VAR_7->sli;


 if (FUNC_2(VAR_7))
  return;

 if (VAR_8 != ((void*)0))
  VAR_9 = &VAR_8->u.mb;





 FUNC_4(&VAR_7->hbalock);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_7, VAR_1,
    VAR_2 | VAR_3,
    "0353 Active Mailbox cleared - mailbox timeout "
    "exiting\n");
  FUNC_5(&VAR_7->hbalock);
  return;
 }


 FUNC_0(VAR_7, VAR_0, VAR_2 | VAR_3,
   "0310 Mailbox command x%x timeout Data: x%x x%x x%px\n",
   VAR_9->mbxCommand,
   VAR_7->pport->port_state,
   VAR_7->sli.sli_flag,
   VAR_7->sli.mbox_active);
 FUNC_5(&VAR_7->hbalock);





 FUNC_4(&VAR_7->pport->work_port_lock);
 VAR_7->pport->work_port_events &= ~VAR_6;
 FUNC_5(&VAR_7->pport->work_port_lock);
 FUNC_4(&VAR_7->hbalock);
 VAR_7->link_state = VAR_4;
 VAR_10->sli_flag &= ~VAR_5;
 FUNC_5(&VAR_7->hbalock);

 FUNC_3(VAR_7);

 FUNC_0(VAR_7, VAR_0, VAR_2 | VAR_3,
   "0345 Resetting board due to mailbox timeout\n");


 FUNC_1(VAR_7);
}
