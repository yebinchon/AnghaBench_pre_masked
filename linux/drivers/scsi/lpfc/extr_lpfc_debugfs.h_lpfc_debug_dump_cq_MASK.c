
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_queue {scalar_t__ assoc_qid; scalar_t__ queue_id; } ;
struct TYPE_4__ {TYPE_1__* hdwq; struct lpfc_queue* nvmels_cq; struct lpfc_queue* nvmels_wq; struct lpfc_queue* els_cq; struct lpfc_queue* els_wq; struct lpfc_queue* mbx_cq; struct lpfc_queue* mbx_wq; } ;
struct lpfc_hba {int cfg_hdw_queue; TYPE_2__ sli4_hba; } ;
struct TYPE_3__ {struct lpfc_queue* hba_eq; struct lpfc_queue* io_cq; struct lpfc_queue* io_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_queue*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static inline void
FUNC_2(struct lpfc_hba *VAR_4, int VAR_5, int VAR_6)
{
 struct lpfc_queue *VAR_7, *VAR_8, *VAR_9;
 char *VAR_10;
 int VAR_11;


 VAR_9 = ((void*)0);

 if (VAR_5 == VAR_1) {
  VAR_7 = VAR_4->sli4_hba.hdwq[VAR_6].io_wq;
  VAR_8 = VAR_4->sli4_hba.hdwq[VAR_6].io_cq;
  VAR_10 = "IO";
 } else if (VAR_5 == VAR_2) {
  VAR_7 = VAR_4->sli4_hba.mbx_wq;
  VAR_8 = VAR_4->sli4_hba.mbx_cq;
  VAR_10 = "MBX";
 } else if (VAR_5 == VAR_0) {
  VAR_7 = VAR_4->sli4_hba.els_wq;
  VAR_8 = VAR_4->sli4_hba.els_cq;
  VAR_10 = "ELS";
 } else if (VAR_5 == VAR_3) {
  VAR_7 = VAR_4->sli4_hba.nvmels_wq;
  VAR_8 = VAR_4->sli4_hba.nvmels_cq;
  VAR_10 = "NVMELS";
 } else
  return;

 for (VAR_11 = 0; VAR_11 < VAR_4->cfg_hdw_queue; VAR_11++) {
  VAR_9 = VAR_4->sli4_hba.hdwq[VAR_11].hba_eq;
  if (VAR_8->assoc_qid == VAR_9->queue_id)
   break;
 }
 if (VAR_11 == VAR_4->cfg_hdw_queue) {
  FUNC_1("Couldn't find EQ for CQ. Using EQ[0]\n");
  VAR_11 = 0;
  VAR_9 = VAR_4->sli4_hba.hdwq[0].hba_eq;
 }

 if (VAR_5 == VAR_1)
  FUNC_1("%s CQ: WQ[Idx:%d|Qid%d]->CQ[Idx%d|Qid%d]"
   "->EQ[Idx:%d|Qid:%d]:\n",
   VAR_10, VAR_6, VAR_7->queue_id, VAR_6, VAR_8->queue_id,
   VAR_11, VAR_9->queue_id);
 else
  FUNC_1("%s CQ: WQ[Qid:%d]->CQ[Qid:%d]"
   "->EQ[Idx:%d|Qid:%d]:\n",
   VAR_10, VAR_7->queue_id, VAR_8->queue_id,
   VAR_11, VAR_9->queue_id);

 FUNC_0(VAR_8);
}
