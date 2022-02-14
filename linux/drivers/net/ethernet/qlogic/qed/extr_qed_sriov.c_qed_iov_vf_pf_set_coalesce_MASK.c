
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct vfpf_update_coalesce {size_t rx_coal; size_t tx_coal; size_t qid; } ;
struct qed_vf_queue {TYPE_2__* cids; int fw_rx_qid; } ;
struct qed_iov_vf_mbx {TYPE_1__* req_virt; } ;
struct qed_vf_info {size_t rx_coal; size_t tx_coal; int abs_vf_id; struct qed_vf_queue* vf_queues; struct qed_iov_vf_mbx vf_mbx; } ;
struct qed_queue_cid {int dummy; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct TYPE_4__ {int p_cid; int b_is_tx; } ;
struct TYPE_3__ {struct vfpf_update_coalesce update_coalesce; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct qed_queue_cid* FUNC_1 (struct qed_vf_queue*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int ,int,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_vf_info*,size_t,int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_vf_info*,size_t,int ) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,size_t,struct qed_queue_cid*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ptt*,size_t,int ) ;

__attribute__((used)) static void FUNC_7(struct qed_hwfn *VAR_6,
           struct qed_ptt *VAR_7,
           struct qed_vf_info *VAR_8)
{
 struct qed_iov_vf_mbx *VAR_9 = &VAR_8->vf_mbx;
 struct vfpf_update_coalesce *VAR_10;
 u8 VAR_11 = VAR_2;
 struct qed_queue_cid *VAR_12;
 u16 VAR_13, VAR_14;
 int VAR_15 = 0, VAR_16;
 u16 VAR_17;

 VAR_10 = &VAR_9->req_virt->update_coalesce;

 VAR_13 = VAR_10->rx_coal;
 VAR_14 = VAR_10->tx_coal;
 VAR_17 = VAR_10->qid;

 if (!FUNC_3(VAR_6, VAR_8, VAR_17,
      VAR_4) && VAR_13) {
  FUNC_0(VAR_6, VAR_5,
      "VF[%d]: Invalid Rx queue_id = %d\n",
      VAR_8->abs_vf_id, VAR_17);
  goto out;
 }

 if (!FUNC_4(VAR_6, VAR_8, VAR_17,
      VAR_4) && VAR_14) {
  FUNC_0(VAR_6, VAR_5,
      "VF[%d]: Invalid Tx queue_id = %d\n",
      VAR_8->abs_vf_id, VAR_17);
  goto out;
 }

 FUNC_0(VAR_6,
     VAR_5,
     "VF[%d]: Setting coalesce for VF rx_coal = %d, tx_coal = %d at queue = %d\n",
     VAR_8->abs_vf_id, VAR_13, VAR_14, VAR_17);

 if (VAR_13) {
  VAR_12 = FUNC_1(&VAR_8->vf_queues[VAR_17]);

  VAR_15 = FUNC_5(VAR_6, VAR_7, VAR_13, VAR_12);
  if (VAR_15) {
   FUNC_0(VAR_6,
       VAR_5,
       "VF[%d]: Unable to set rx queue = %d coalesce\n",
       VAR_8->abs_vf_id, VAR_8->vf_queues[VAR_17].fw_rx_qid);
   goto out;
  }
  VAR_8->rx_coal = VAR_13;
 }

 if (VAR_14) {
  struct qed_vf_queue *VAR_18 = &VAR_8->vf_queues[VAR_17];

  for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
   if (!VAR_18->cids[VAR_16].p_cid)
    continue;

   if (!VAR_18->cids[VAR_16].b_is_tx)
    continue;

   VAR_15 = FUNC_6(VAR_6, VAR_7, VAR_14,
        VAR_18->cids[VAR_16].p_cid);

   if (VAR_15) {
    FUNC_0(VAR_6,
        VAR_5,
        "VF[%d]: Unable to set tx queue coalesce\n",
        VAR_8->abs_vf_id);
    goto out;
   }
  }
  VAR_8->tx_coal = VAR_14;
 }

 VAR_11 = VAR_3;
out:
 FUNC_2(VAR_6, VAR_7, VAR_8, VAR_0,
        sizeof(struct pfvf_def_resp_tlv), VAR_11);
}
