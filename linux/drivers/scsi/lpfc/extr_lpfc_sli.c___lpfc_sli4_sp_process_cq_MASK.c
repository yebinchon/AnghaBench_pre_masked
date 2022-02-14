
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_queue {int type; int chann; int queue_id; int sched_spwork; int subtype; struct lpfc_hba* phba; } ;
struct lpfc_hba {int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct lpfc_hba*,struct lpfc_queue*,int ,unsigned long*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int ,int ,int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_queue *VAR_6)
{
 struct lpfc_hba *VAR_7 = VAR_6->phba;
 unsigned long VAR_8;
 bool VAR_9 = 0;


 switch (VAR_6->type) {
 case 129:
  VAR_9 |= FUNC_0(VAR_7, VAR_6,
      VAR_5,
      &VAR_8);
  break;
 case 128:
  if (VAR_6->subtype == VAR_2)
   VAR_9 |= FUNC_0(VAR_7, VAR_6,
      VAR_3,
      &VAR_8);
  else
   VAR_9 |= FUNC_0(VAR_7, VAR_6,
      VAR_4,
      &VAR_8);
  break;
 default:
  FUNC_1(VAR_7, VAR_0, VAR_1,
    "0370 Invalid completion queue type (%d)\n",
    VAR_6->type);
  return;
 }

 if (VAR_8) {
  if (!FUNC_3(VAR_6->chann, VAR_7->wq,
        &VAR_6->sched_spwork, VAR_8))
   FUNC_1(VAR_7, VAR_0, VAR_1,
    "0394 Cannot schedule soft IRQ "
    "for cqid=%d on CPU %d\n",
    VAR_6->queue_id, VAR_6->chann);
 }


 if (VAR_9)
  FUNC_2(VAR_7);
}
