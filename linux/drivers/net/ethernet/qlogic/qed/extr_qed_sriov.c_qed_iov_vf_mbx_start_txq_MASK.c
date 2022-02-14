
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vf_params ;
typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct vfpf_start_txq_tlv {size_t tx_qid; int pbl_size; int pbl_addr; int sb_index; int hw_sb; } ;
struct qed_vf_queue {TYPE_2__* cids; int fw_tx_qid; } ;
struct qed_iov_vf_mbx {TYPE_1__* req_virt; } ;
struct qed_vf_info {int relative_vf_id; int opaque_fid; scalar_t__ abs_vf_id; int vport_id; struct qed_vf_queue* vf_queues; struct qed_iov_vf_mbx vf_mbx; } ;
struct qed_sb_info {size_t vf_qid; size_t vf_legacy; size_t qid_usage_idx; int vfid; int sb_idx; struct qed_sb_info* p_sb; int igu_sb_id; scalar_t__ stats_id; int vport_id; int queue_id; } ;
struct qed_queue_start_common_params {size_t vf_qid; size_t vf_legacy; size_t qid_usage_idx; int vfid; int sb_idx; struct qed_queue_start_common_params* p_sb; int igu_sb_id; scalar_t__ stats_id; int vport_id; int queue_id; } ;
struct qed_queue_cid_vf_params {size_t vf_qid; size_t vf_legacy; size_t qid_usage_idx; int vfid; int sb_idx; struct qed_queue_cid_vf_params* p_sb; int igu_sb_id; scalar_t__ stats_id; int vport_id; int queue_id; } ;
struct qed_queue_cid {int cid; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef int sb_dummy ;
typedef int params ;
struct TYPE_4__ {int b_is_tx; struct qed_queue_cid* p_cid; } ;
struct TYPE_3__ {struct vfpf_start_txq_tlv start_txq; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qed_sb_info*,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_queue_cid*) ;
 struct qed_queue_cid* FUNC_2 (struct qed_hwfn*,int ,struct qed_sb_info*,int,struct qed_sb_info*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_queue_cid*,int ,int ,int ) ;
 int FUNC_4 (struct qed_hwfn*,int ) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_vf_info*,int ) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_vf_info*,size_t,int ) ;
 size_t FUNC_7 (struct qed_hwfn*,struct qed_vf_info*,int) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int ,size_t) ;
 size_t FUNC_9 (struct qed_vf_info*) ;

__attribute__((used)) static void FUNC_10(struct qed_hwfn *VAR_5,
         struct qed_ptt *VAR_6,
         struct qed_vf_info *VAR_7)
{
 struct qed_queue_start_common_params VAR_8;
 struct qed_queue_cid_vf_params VAR_9;
 struct qed_iov_vf_mbx *VAR_10 = &VAR_7->vf_mbx;
 u8 VAR_11 = VAR_1;
 struct vfpf_start_txq_tlv *VAR_12;
 struct qed_vf_queue *VAR_13;
 struct qed_queue_cid *VAR_14;
 struct qed_sb_info VAR_15;
 u8 VAR_16, VAR_17;
 u32 VAR_18 = 0;
 int VAR_19;
 u16 VAR_20;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_12 = &VAR_10->req_virt->start_txq;

 if (!FUNC_6(VAR_5, VAR_7, VAR_12->tx_qid,
      VAR_4) ||
     !FUNC_5(VAR_5, VAR_7, VAR_12->hw_sb))
  goto out;

 VAR_16 = FUNC_7(VAR_5, VAR_7, 1);
 if (VAR_16 == VAR_3)
  goto out;

 VAR_13 = &VAR_7->vf_queues[VAR_12->tx_qid];
 if (VAR_13->cids[VAR_16].p_cid)
  goto out;

 VAR_17 = FUNC_9(VAR_7);


 VAR_8.queue_id = VAR_13->fw_tx_qid;
 VAR_8.vport_id = VAR_7->vport_id;
 VAR_8.stats_id = VAR_7->abs_vf_id + 0x10;


 FUNC_0(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.igu_sb_id = VAR_12->hw_sb;
 VAR_8.p_sb = &VAR_15;
 VAR_8.sb_idx = VAR_12->sb_index;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.vfid = VAR_7->relative_vf_id;
 VAR_9.vf_qid = (u8)VAR_12->tx_qid;
 VAR_9.vf_legacy = VAR_17;
 VAR_9.qid_usage_idx = VAR_16;

 VAR_14 = FUNC_2(VAR_5, VAR_7->opaque_fid,
         &VAR_8, 0, &VAR_9);
 if (!VAR_14)
  goto out;

 VAR_20 = FUNC_4(VAR_5, VAR_7->relative_vf_id);
 VAR_19 = FUNC_3(VAR_5, VAR_14,
          VAR_12->pbl_addr, VAR_12->pbl_size, VAR_20);
 if (VAR_19) {
  VAR_11 = VAR_0;
  FUNC_1(VAR_5, VAR_14);
 } else {
  VAR_11 = VAR_2;
  VAR_13->cids[VAR_16].p_cid = VAR_14;
  VAR_13->cids[VAR_16].b_is_tx = 1;
  VAR_18 = VAR_14->cid;
 }

out:
 FUNC_8(VAR_5, VAR_6, VAR_7, VAR_18, VAR_11);
}
