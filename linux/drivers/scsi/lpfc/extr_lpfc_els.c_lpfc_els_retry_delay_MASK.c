
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct lpfc_work_evt {int evt_listp; int evt; scalar_t__ evt_arg1; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_nodelist {struct lpfc_work_evt els_retry_evt; struct lpfc_vport* vport; } ;
struct lpfc_hba {int hbalock; int work_list; } ;


 int VAR_0 ;
 struct lpfc_nodelist* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct lpfc_nodelist*) ;
 int FUNC_4 (struct lpfc_hba*) ;
 struct lpfc_nodelist* VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void
FUNC_7(struct timer_list *VAR_3)
{
 struct lpfc_nodelist *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 struct lpfc_vport *VAR_5 = VAR_4->vport;
 struct lpfc_hba *VAR_6 = VAR_5->phba;
 unsigned long VAR_7;
 struct lpfc_work_evt *VAR_8 = &VAR_4->els_retry_evt;

 FUNC_5(&VAR_6->hbalock, VAR_7);
 if (!FUNC_2(&VAR_8->evt_listp)) {
  FUNC_6(&VAR_6->hbalock, VAR_7);
  return;
 }




 VAR_8->evt_arg1 = FUNC_3(VAR_4);
 if (VAR_8->evt_arg1) {
  VAR_8->evt = VAR_0;
  FUNC_1(&VAR_8->evt_listp, &VAR_6->work_list);
  FUNC_4(VAR_6);
 }
 FUNC_6(&VAR_6->hbalock, VAR_7);
 return;
}
