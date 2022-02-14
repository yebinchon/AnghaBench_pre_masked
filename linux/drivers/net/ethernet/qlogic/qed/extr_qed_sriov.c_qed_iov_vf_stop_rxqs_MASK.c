
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct qed_vf_queue {TYPE_1__* cids; } ;
struct qed_vf_info {int num_active_rxqs; int relative_vf_id; struct qed_vf_queue* vf_queues; } ;
struct qed_queue_cid {int qid_usage_idx; } ;
struct qed_hwfn {int dummy; } ;
struct TYPE_2__ {int * p_cid; scalar_t__ b_is_tx; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,size_t,size_t,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qed_hwfn*,int *,int,int) ;
 struct qed_queue_cid* FUNC_2 (struct qed_vf_queue*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_vf_info*,size_t,int ) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_3,
    struct qed_vf_info *VAR_4,
    u16 VAR_5,
    u8 VAR_6, bool VAR_7)
{
 struct qed_vf_queue *VAR_8;
 int VAR_9 = 0;

 if (!FUNC_3(VAR_3, VAR_4, VAR_5, VAR_1)) {
  FUNC_0(VAR_3,
      VAR_2,
      "VF[%d] Tried Closing Rx 0x%04x.%02x which is inactive\n",
      VAR_4->relative_vf_id, VAR_5, VAR_6);
  return -VAR_0;
 }

 VAR_8 = &VAR_4->vf_queues[VAR_5];




 if (!VAR_8->cids[VAR_6].p_cid ||
     VAR_8->cids[VAR_6].b_is_tx) {
  struct qed_queue_cid *VAR_10;

  VAR_10 = FUNC_2(VAR_8);
  FUNC_0(VAR_3,
      VAR_2,
      "VF[%d] - Tried Closing Rx 0x%04x.%02x, but Rx is at %04x.%02x\n",
      VAR_4->relative_vf_id,
      VAR_5, VAR_6, VAR_5, VAR_10->qid_usage_idx);
  return -VAR_0;
 }


 VAR_9 = FUNC_1(VAR_3,
       VAR_8->cids[VAR_6].p_cid,
       0, VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_8->cids[VAR_6].p_cid = ((void*)0);
 VAR_4->num_active_rxqs--;

 return 0;
}
