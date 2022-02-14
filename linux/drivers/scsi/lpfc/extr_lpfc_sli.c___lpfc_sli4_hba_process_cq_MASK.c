
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_queue {int chann; int queue_id; int sched_irqwork; struct lpfc_hba* phba; } ;
struct lpfc_hba {int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_queue*,int ,unsigned long*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (int ,int ,int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct lpfc_queue *VAR_3)
{
 struct lpfc_hba *VAR_4 = VAR_3->phba;
 unsigned long VAR_5;
 bool VAR_6 = 0;


 VAR_6 |= FUNC_0(VAR_4, VAR_3, VAR_2,
          &VAR_5);

 if (VAR_5) {
  if (!FUNC_3(VAR_3->chann, VAR_4->wq,
        &VAR_3->sched_irqwork, VAR_5))
   FUNC_1(VAR_4, VAR_0, VAR_1,
    "0367 Cannot schedule soft IRQ "
    "for cqid=%d on CPU %d\n",
    VAR_3->queue_id, VAR_3->chann);
 }


 if (VAR_6)
  FUNC_2(VAR_4);
}
