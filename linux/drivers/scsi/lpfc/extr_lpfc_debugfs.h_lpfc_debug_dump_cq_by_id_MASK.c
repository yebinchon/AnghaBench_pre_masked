
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* mbx_cq; TYPE_3__* nvmels_cq; TYPE_3__* els_cq; TYPE_1__* hdwq; } ;
struct lpfc_hba {int cfg_hdw_queue; TYPE_2__ sli4_hba; } ;
struct TYPE_6__ {int queue_id; } ;
struct TYPE_4__ {TYPE_3__* io_cq; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static inline void
FUNC_2(struct lpfc_hba *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->cfg_hdw_queue; VAR_2++)
  if (VAR_0->sli4_hba.hdwq[VAR_2].io_cq->queue_id == VAR_1)
   break;

 if (VAR_2 < VAR_0->cfg_hdw_queue) {
  FUNC_1("IO CQ[Idx:%d|Qid:%d]\n", VAR_2, VAR_1);
  FUNC_0(VAR_0->sli4_hba.hdwq[VAR_2].io_cq);
  return;
 }

 if (VAR_0->sli4_hba.els_cq->queue_id == VAR_1) {
  FUNC_1("ELS CQ[Qid:%d]\n", VAR_1);
  FUNC_0(VAR_0->sli4_hba.els_cq);
  return;
 }

 if (VAR_0->sli4_hba.nvmels_cq->queue_id == VAR_1) {
  FUNC_1("NVME LS CQ[Qid:%d]\n", VAR_1);
  FUNC_0(VAR_0->sli4_hba.nvmels_cq);
  return;
 }

 if (VAR_0->sli4_hba.mbx_cq->queue_id == VAR_1) {
  FUNC_1("MBX CQ[Qid:%d]\n", VAR_1);
  FUNC_0(VAR_0->sli4_hba.mbx_cq);
 }
}
