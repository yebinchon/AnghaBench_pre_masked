
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {void* wqp; } ;
struct TYPE_7__ {TYPE_1__ sli4; } ;
struct lpfc_sli_ring {TYPE_2__ sli; } ;
struct lpfc_queue {int queue_id; int assoc_qid; struct lpfc_sli_ring* pring; } ;
struct TYPE_10__ {TYPE_4__* mbx_cq; TYPE_3__* mbx_wq; } ;
struct lpfc_hba {TYPE_5__ sli4_hba; } ;
struct TYPE_9__ {scalar_t__ queue_id; } ;
struct TYPE_8__ {int queue_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_queue*,struct lpfc_queue*,int ,scalar_t__) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_queue*,struct lpfc_queue*,scalar_t__) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_queue*,struct lpfc_queue*,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct lpfc_hba *VAR_7, struct lpfc_queue *VAR_8,
 struct lpfc_queue *VAR_9, struct lpfc_queue *VAR_10, uint16_t *VAR_11,
 int VAR_12, uint32_t VAR_13)
{
 struct lpfc_sli_ring *VAR_14;
 int VAR_15;

 if (!VAR_8 || !VAR_9 || !VAR_10) {
  FUNC_2(VAR_7, VAR_1, VAR_3,
   "6085 Fast-path %s (%d) not allocated\n",
   ((VAR_8) ? ((VAR_9) ? "WQ" : "CQ") : "EQ"), VAR_12);
  return -VAR_0;
 }


 VAR_15 = FUNC_0(VAR_7, VAR_9, VAR_8,
   (VAR_13 == VAR_4) ? VAR_5 : VAR_6, VAR_13);
 if (VAR_15) {
  FUNC_2(VAR_7, VAR_1, VAR_3,
   "6086 Failed setup of CQ (%d), rc = 0x%x\n",
   VAR_12, (uint32_t)VAR_15);
  return VAR_15;
 }

 if (VAR_13 != VAR_4) {

  if (VAR_11)
   *VAR_11 = VAR_9->queue_id;

  FUNC_2(VAR_7, VAR_2, VAR_3,
   "6087 CQ setup: cq[%d]-id=%d, parent eq[%d]-id=%d\n",
   VAR_12, VAR_9->queue_id, VAR_12, VAR_8->queue_id);


  VAR_15 = FUNC_3(VAR_7, VAR_10, VAR_9, VAR_13);
  if (VAR_15) {
   FUNC_2(VAR_7, VAR_1, VAR_3,
    "4618 Fail setup fastpath WQ (%d), rc = 0x%x\n",
    VAR_12, (uint32_t)VAR_15);

   return VAR_15;
  }


  VAR_14 = VAR_10->pring;
  VAR_14->sli.sli4.wqp = (void *)VAR_10;
  VAR_9->pring = VAR_14;

  FUNC_2(VAR_7, VAR_2, VAR_3,
   "2593 WQ setup: wq[%d]-id=%d assoc=%d, cq[%d]-id=%d\n",
   VAR_12, VAR_10->queue_id, VAR_10->assoc_qid, VAR_12, VAR_9->queue_id);
 } else {
  VAR_15 = FUNC_1(VAR_7, VAR_10, VAR_9, VAR_4);
  if (VAR_15) {
   FUNC_2(VAR_7, VAR_1, VAR_3,
    "0539 Failed setup of slow-path MQ: "
    "rc = 0x%x\n", VAR_15);

   return VAR_15;
  }

  FUNC_2(VAR_7, VAR_2, VAR_3,
   "2589 MBX MQ setup: wq-id=%d, parent cq-id=%d\n",
   VAR_7->sli4_hba.mbx_wq->queue_id,
   VAR_7->sli4_hba.mbx_cq->queue_id);
 }

 return 0;
}
