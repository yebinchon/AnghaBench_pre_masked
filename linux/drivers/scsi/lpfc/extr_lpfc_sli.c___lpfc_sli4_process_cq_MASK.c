
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_queue {int max_proc_limit; int notify_interval; int CQ_max_cqe; scalar_t__ queue_claimed; int queue_id; TYPE_1__* assoc_qp; int q_flag; } ;
struct TYPE_4__ {int (* sli4_write_cq_db ) (struct lpfc_hba*,struct lpfc_queue*,int,int ) ;} ;
struct lpfc_hba {int cfg_cq_poll_threshold; TYPE_2__ sli4_hba; } ;
typedef struct lpfc_cqe lpfc_cqe ;
struct TYPE_3__ {int EQ_cqe_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_queue*,struct lpfc_cqe*) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int ) ;
 struct lpfc_cqe* FUNC_3 (struct lpfc_queue*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_queue*,int,int ) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_queue*,int,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bool
FUNC_7(struct lpfc_hba *VAR_6, struct lpfc_queue *VAR_7,
 bool (*VAR_8)(struct lpfc_hba *, struct lpfc_queue *,
   struct lpfc_cqe *), unsigned long *VAR_9)
{
 struct lpfc_cqe *VAR_10;
 bool VAR_11 = 0;
 int VAR_12 = 0, VAR_13 = 0;
 bool VAR_14 = 1;


 *VAR_9 = 0;

 if (FUNC_1(&VAR_7->queue_claimed, 0, 1) != 0)
  goto rearm_and_exit;


 VAR_7->q_flag = 0;
 VAR_10 = FUNC_3(VAR_7);
 while (VAR_10) {
  VAR_11 |= VAR_8(VAR_6, VAR_7, VAR_10);
  FUNC_0(VAR_6, VAR_7, VAR_10);

  VAR_13++;
  if (!(++VAR_12 % VAR_7->max_proc_limit))
   break;

  if (!(VAR_12 % VAR_7->notify_interval)) {
   VAR_6->sli4_hba.sli4_write_cq_db(VAR_6, VAR_7, VAR_13,
      VAR_4);
   VAR_13 = 0;
  }

  if (VAR_12 == VAR_3)
   VAR_7->q_flag |= VAR_0;

  VAR_10 = FUNC_3(VAR_7);
 }
 if (VAR_12 >= VAR_6->cfg_cq_poll_threshold) {
  *VAR_9 = 1;
  VAR_14 = 0;
 }


 if (VAR_12 > VAR_7->CQ_max_cqe)
  VAR_7->CQ_max_cqe = VAR_12;

 VAR_7->assoc_qp->EQ_cqe_cnt += VAR_12;


 if (FUNC_6(VAR_12 == 0))
  FUNC_2(VAR_6, VAR_1, VAR_2,
    "0369 No entry from completion queue "
    "qid=%d\n", VAR_7->queue_id);

 VAR_7->queue_claimed = 0;

rearm_and_exit:
 VAR_6->sli4_hba.sli4_write_cq_db(VAR_6, VAR_7, VAR_13,
   VAR_14 ? VAR_5 : VAR_4);

 return VAR_11;
}
