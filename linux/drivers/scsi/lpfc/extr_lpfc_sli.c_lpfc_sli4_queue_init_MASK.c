
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct lpfc_sli_ring {int ring_lock; int iocb_continueq; int txcmplq; int txq; scalar_t__ txcmplq_cnt; void* ringno; scalar_t__ flag; } ;
struct lpfc_sli {int mboxq_cmpl; int mboxq; } ;
struct TYPE_10__ {TYPE_4__* nvmels_wq; TYPE_3__* els_wq; TYPE_2__* hdwq; } ;
struct lpfc_hba {int cfg_hdw_queue; int cfg_enable_fc4_type; int hbalock; TYPE_5__ sli4_hba; struct lpfc_sli sli; } ;
struct TYPE_9__ {struct lpfc_sli_ring* pring; } ;
struct TYPE_8__ {struct lpfc_sli_ring* pring; } ;
struct TYPE_7__ {TYPE_1__* io_wq; } ;
struct TYPE_6__ {struct lpfc_sli_ring* pring; } ;


 int FUNC_0 (int *) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct lpfc_hba *VAR_3)
{
 struct lpfc_sli *VAR_4;
 struct lpfc_sli_ring *VAR_5;
 int VAR_6;

 VAR_4 = &VAR_3->sli;
 FUNC_2(&VAR_3->hbalock);
 FUNC_0(&VAR_4->mboxq);
 FUNC_0(&VAR_4->mboxq_cmpl);

 for (VAR_6 = 0; VAR_6 < VAR_3->cfg_hdw_queue; VAR_6++) {
  VAR_5 = VAR_3->sli4_hba.hdwq[VAR_6].io_wq->pring;
  VAR_5->flag = 0;
  VAR_5->ringno = VAR_2;
  VAR_5->txcmplq_cnt = 0;
  FUNC_0(&VAR_5->txq);
  FUNC_0(&VAR_5->txcmplq);
  FUNC_0(&VAR_5->iocb_continueq);
  FUNC_1(&VAR_5->ring_lock);
 }
 VAR_5 = VAR_3->sli4_hba.els_wq->pring;
 VAR_5->flag = 0;
 VAR_5->ringno = VAR_0;
 VAR_5->txcmplq_cnt = 0;
 FUNC_0(&VAR_5->txq);
 FUNC_0(&VAR_5->txcmplq);
 FUNC_0(&VAR_5->iocb_continueq);
 FUNC_1(&VAR_5->ring_lock);

 if (VAR_3->cfg_enable_fc4_type & VAR_1) {
  VAR_5 = VAR_3->sli4_hba.nvmels_wq->pring;
  VAR_5->flag = 0;
  VAR_5->ringno = VAR_0;
  VAR_5->txcmplq_cnt = 0;
  FUNC_0(&VAR_5->txq);
  FUNC_0(&VAR_5->txcmplq);
  FUNC_0(&VAR_5->iocb_continueq);
  FUNC_1(&VAR_5->ring_lock);
 }

 FUNC_3(&VAR_3->hbalock);
}
