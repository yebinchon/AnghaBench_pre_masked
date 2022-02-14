
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_wcqe_complete {int word3; int parameter; int total_data_placed; int word0; } ;
struct lpfc_sli_ring {int txcmplq; int txq; } ;
struct lpfc_queue {struct lpfc_sli_ring* pring; } ;
struct TYPE_4__ {int wcqe_cmpl; } ;
struct TYPE_5__ {int list; TYPE_1__ cqe; } ;
struct lpfc_iocbq {TYPE_2__ cq_event; } ;
struct TYPE_6__ {int sp_queue_event; } ;
struct lpfc_hba {int hbalock; int hba_flag; TYPE_3__ sli4_hba; int iocb_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct lpfc_wcqe_complete*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int,int ,int,int,...) ;
 struct lpfc_iocbq* FUNC_4 (struct lpfc_hba*) ;
 int VAR_4 ;
 int FUNC_5 (int *,struct lpfc_wcqe_complete*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static bool
FUNC_9(struct lpfc_hba *VAR_5, struct lpfc_queue *VAR_6,
        struct lpfc_wcqe_complete *VAR_7)
{
 struct lpfc_iocbq *VAR_8;
 unsigned long VAR_9;
 struct lpfc_sli_ring *VAR_10 = VAR_6->pring;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;


 if (FUNC_8(FUNC_0(VAR_4, VAR_7))) {

  FUNC_3(VAR_5, VAR_2, VAR_3,
    "0357 ELS CQE error: status=x%x: "
    "CQE: %08x %08x %08x %08x\n",
    FUNC_0(VAR_4, VAR_7),
    VAR_7->word0, VAR_7->total_data_placed,
    VAR_7->parameter, VAR_7->word3);
 }


 VAR_8 = FUNC_4(VAR_5);
 if (!VAR_8) {
  if (!FUNC_2(&VAR_10->txq))
   VAR_11++;
  if (!FUNC_2(&VAR_10->txcmplq))
   VAR_12++;
  FUNC_3(VAR_5, VAR_1, VAR_3,
   "0387 NO IOCBQ data: txq_cnt=%d iocb_cnt=%d "
   "fcp_txcmplq_cnt=%d, els_txcmplq_cnt=%d\n",
   VAR_11, VAR_5->iocb_cnt,
   VAR_13,
   VAR_12);
  return 0;
 }


 FUNC_5(&VAR_8->cq_event.cqe.wcqe_cmpl, VAR_7, sizeof(*VAR_7));
 FUNC_6(&VAR_5->hbalock, VAR_9);
 FUNC_1(&VAR_8->cq_event.list,
        &VAR_5->sli4_hba.sp_queue_event);
 VAR_5->hba_flag |= VAR_0;
 FUNC_7(&VAR_5->hbalock, VAR_9);

 return 1;
}
