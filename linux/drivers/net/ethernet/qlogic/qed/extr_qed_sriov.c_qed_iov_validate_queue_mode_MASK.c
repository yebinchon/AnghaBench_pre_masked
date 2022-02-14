
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct qed_vf_queue_cid {int b_is_tx; int p_cid; } ;
struct qed_vf_info {TYPE_1__* vf_queues; } ;
struct qed_hwfn {int dummy; } ;
typedef enum qed_iov_validate_q_mode { ____Placeholder_qed_iov_validate_q_mode } qed_iov_validate_q_mode ;
struct TYPE_2__ {struct qed_vf_queue_cid* cids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(struct qed_hwfn *VAR_4,
     struct qed_vf_info *VAR_5,
     u16 VAR_6,
     enum qed_iov_validate_q_mode VAR_7,
     bool VAR_8)
{
 int VAR_9;

 if (VAR_7 == VAR_3)
  return 1;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  struct qed_vf_queue_cid *VAR_10;

  VAR_10 = &VAR_5->vf_queues[VAR_6].cids[VAR_9];

  if (!VAR_10->p_cid)
   continue;

  if (VAR_10->b_is_tx != VAR_8)
   continue;

  return VAR_7 == VAR_2;
 }


 return VAR_7 == VAR_1;
}
