
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct TYPE_2__ {size_t queue_id; } ;
struct qed_queue_cid {scalar_t__ qid_usage_idx; TYPE_1__ rel; } ;
struct qed_l2_info {size_t queues; int lock; int * pp_qid_usage; } ;
struct qed_hwfn {struct qed_l2_info* p_l2_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*,size_t,size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct qed_hwfn *VAR_1,
     struct qed_queue_cid *VAR_2)
{
 struct qed_l2_info *VAR_3 = VAR_1->p_l2_info;
 u16 VAR_4 = VAR_2->rel.queue_id;
 bool VAR_5 = 1;
 u8 VAR_6;

 FUNC_3(&VAR_3->lock);

 if (VAR_4 >= VAR_3->queues) {
  FUNC_0(VAR_1,
     "Requested to increase usage for qzone %04x out of %08x\n",
     VAR_4, VAR_3->queues);
  VAR_5 = 0;
  goto out;
 }

 VAR_6 = (u8)FUNC_2(VAR_3->pp_qid_usage[VAR_4],
     VAR_0);
 if (VAR_6 >= VAR_0) {
  VAR_5 = 0;
  goto out;
 }

 FUNC_1(VAR_6, VAR_3->pp_qid_usage[VAR_4]);
 VAR_2->qid_usage_idx = VAR_6;

out:
 FUNC_4(&VAR_3->lock);
 return VAR_5;
}
