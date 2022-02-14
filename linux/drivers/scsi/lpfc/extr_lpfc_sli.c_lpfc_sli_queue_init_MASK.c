
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cmdidx; scalar_t__ local_getidx; scalar_t__ next_cmdidx; } ;
struct TYPE_4__ {TYPE_1__ sli3; } ;
struct lpfc_sli_ring {int ringno; int ring_lock; int txcmplq; int txq; scalar_t__ flag; int postbufq; int iocb_continue_saveq; int iocb_continueq; TYPE_2__ sli; } ;
struct lpfc_sli {int num_rings; struct lpfc_sli_ring* sli3_ring; int mboxq_cmpl; int mboxq; } ;
struct lpfc_hba {int hbalock; struct lpfc_sli sli; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct lpfc_hba *VAR_0)
{
 struct lpfc_sli *VAR_1;
 struct lpfc_sli_ring *VAR_2;
 int VAR_3;

 VAR_1 = &VAR_0->sli;
 FUNC_2(&VAR_0->hbalock);
 FUNC_0(&VAR_1->mboxq);
 FUNC_0(&VAR_1->mboxq_cmpl);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_rings; VAR_3++) {
  VAR_2 = &VAR_1->sli3_ring[VAR_3];
  VAR_2->ringno = VAR_3;
  VAR_2->sli.sli3.next_cmdidx = 0;
  VAR_2->sli.sli3.local_getidx = 0;
  VAR_2->sli.sli3.cmdidx = 0;
  FUNC_0(&VAR_2->iocb_continueq);
  FUNC_0(&VAR_2->iocb_continue_saveq);
  FUNC_0(&VAR_2->postbufq);
  VAR_2->flag = 0;
  FUNC_0(&VAR_2->txq);
  FUNC_0(&VAR_2->txcmplq);
  FUNC_1(&VAR_2->ring_lock);
 }
 FUNC_3(&VAR_0->hbalock);
}
