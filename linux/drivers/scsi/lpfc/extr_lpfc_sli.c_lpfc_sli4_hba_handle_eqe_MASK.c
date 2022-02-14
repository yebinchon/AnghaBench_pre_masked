
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct lpfc_queue {size_t hdwq; size_t queue_id; int irqwork; int chann; scalar_t__ isr_timestamp; } ;
struct TYPE_4__ {size_t cq_max; TYPE_1__* hdwq; struct lpfc_queue* nvmels_cq; struct lpfc_queue** nvmet_cqset; struct lpfc_queue** cq_lookup; } ;
struct lpfc_hba {size_t cfg_nvmet_mrq; int wq; scalar_t__ ktime_on; TYPE_2__ sli4_hba; } ;
struct lpfc_eqe {int dummy; } ;
struct TYPE_3__ {int hba_eq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct lpfc_eqe*) ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,size_t,size_t,...) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_eqe*,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(struct lpfc_hba *VAR_5, struct lpfc_queue *VAR_6,
    struct lpfc_eqe *VAR_7)
{
 struct lpfc_queue *VAR_8 = ((void*)0);
 uint32_t VAR_9 = VAR_6->hdwq;
 uint16_t VAR_10, VAR_11;

 if (FUNC_6(FUNC_0(VAR_2, VAR_7) != 0)) {
  FUNC_2(VAR_5, VAR_0, VAR_1,
    "0366 Not a valid completion "
    "event: majorcode=x%x, minorcode=x%x\n",
    FUNC_0(VAR_2, VAR_7),
    FUNC_0(VAR_3, VAR_7));
  return;
 }


 VAR_10 = FUNC_0(VAR_4, VAR_7);


 if (VAR_10 <= VAR_5->sli4_hba.cq_max) {
  VAR_8 = VAR_5->sli4_hba.cq_lookup[VAR_10];
  if (VAR_8)
   goto work_cq;
 }


 if (VAR_5->cfg_nvmet_mrq && VAR_5->sli4_hba.nvmet_cqset) {
  VAR_11 = VAR_5->sli4_hba.nvmet_cqset[0]->queue_id;
  if ((VAR_10 >= VAR_11) && (VAR_10 < (VAR_11 + VAR_5->cfg_nvmet_mrq))) {

   VAR_8 = VAR_5->sli4_hba.nvmet_cqset[VAR_10 - VAR_11];
   goto process_cq;
  }
 }

 if (VAR_5->sli4_hba.nvmels_cq &&
     (VAR_10 == VAR_5->sli4_hba.nvmels_cq->queue_id)) {

  VAR_8 = VAR_5->sli4_hba.nvmels_cq;
 }


 if (VAR_8 == ((void*)0)) {
  FUNC_3(VAR_5, VAR_7,
     VAR_5->sli4_hba.hdwq[VAR_9].hba_eq);
  return;
 }

process_cq:
 if (FUNC_6(VAR_10 != VAR_8->queue_id)) {
  FUNC_2(VAR_5, VAR_0, VAR_1,
    "0368 Miss-matched fast-path completion "
    "queue identifier: eqcqid=%d, fcpcqid=%d\n",
    VAR_10, VAR_8->queue_id);
  return;
 }

work_cq:






 if (!FUNC_4(VAR_8->chann, VAR_5->wq, &VAR_8->irqwork))
  FUNC_2(VAR_5, VAR_0, VAR_1,
    "0363 Cannot schedule soft IRQ "
    "for CQ eqcqid=%d, cqid=%d on CPU %d\n",
    VAR_10, VAR_8->queue_id, FUNC_5());
}
