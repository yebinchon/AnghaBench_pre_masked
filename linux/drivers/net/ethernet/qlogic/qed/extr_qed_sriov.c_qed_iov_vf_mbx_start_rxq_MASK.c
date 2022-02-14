
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vf_params ;
typedef size_t u8 ;
struct vfpf_start_rxq_tlv {size_t rx_qid; int cqe_pbl_size; int cqe_pbl_addr; int rxq_addr; int bd_max_bytes; int sb_index; int hw_sb; } ;
struct qed_vf_queue {TYPE_2__* cids; int fw_rx_qid; } ;
struct qed_iov_vf_mbx {TYPE_1__* req_virt; } ;
struct qed_vf_info {int num_active_rxqs; scalar_t__ abs_vf_id; int opaque_fid; int relative_vf_id; int vport_id; struct qed_vf_queue* vf_queues; struct qed_iov_vf_mbx vf_mbx; } ;
struct qed_sb_info {size_t vf_qid; size_t vf_legacy; size_t qid_usage_idx; int vfid; int sb_idx; struct qed_sb_info* p_sb; int igu_sb_id; scalar_t__ stats_id; int vport_id; int queue_id; } ;
struct qed_queue_start_common_params {size_t vf_qid; size_t vf_legacy; size_t qid_usage_idx; int vfid; int sb_idx; struct qed_queue_start_common_params* p_sb; int igu_sb_id; scalar_t__ stats_id; int vport_id; int queue_id; } ;
struct qed_queue_cid_vf_params {size_t vf_qid; size_t vf_legacy; size_t qid_usage_idx; int vfid; int sb_idx; struct qed_queue_cid_vf_params* p_sb; int igu_sb_id; scalar_t__ stats_id; int vport_id; int queue_id; } ;
struct qed_queue_cid {int dummy; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef int sb_dummy ;
typedef int params ;
struct TYPE_4__ {int b_is_tx; struct qed_queue_cid* p_cid; } ;
struct TYPE_3__ {struct vfpf_start_rxq_tlv start_rxq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (struct qed_hwfn*,scalar_t__,int ) ;
 int FUNC_2 (struct qed_sb_info*,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_queue_cid*) ;
 struct qed_queue_cid* FUNC_4 (struct qed_hwfn*,int ,struct qed_sb_info*,int,struct qed_sb_info*) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_queue_cid*,int ,int ,int ,int ) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_vf_info*,size_t,int ) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_vf_info*,int ) ;
 size_t FUNC_8 (struct qed_hwfn*,struct qed_vf_info*,int) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,size_t,int) ;
 size_t FUNC_10 (struct qed_vf_info*) ;

__attribute__((used)) static void FUNC_11(struct qed_hwfn *VAR_7,
         struct qed_ptt *VAR_8,
         struct qed_vf_info *VAR_9)
{
 struct qed_queue_start_common_params VAR_10;
 struct qed_queue_cid_vf_params VAR_11;
 struct qed_iov_vf_mbx *VAR_12 = &VAR_9->vf_mbx;
 u8 VAR_13 = VAR_2;
 u8 VAR_14, VAR_15 = 0;
 struct vfpf_start_rxq_tlv *VAR_16;
 struct qed_vf_queue *VAR_17;
 struct qed_queue_cid *VAR_18;
 struct qed_sb_info VAR_19;
 int VAR_20;

 VAR_16 = &VAR_12->req_virt->start_rxq;

 if (!FUNC_6(VAR_7, VAR_9, VAR_16->rx_qid,
      VAR_5) ||
     !FUNC_7(VAR_7, VAR_9, VAR_16->hw_sb))
  goto out;

 VAR_14 = FUNC_8(VAR_7, VAR_9, 0);
 if (VAR_14 == VAR_4)
  goto out;

 VAR_17 = &VAR_9->vf_queues[VAR_16->rx_qid];
 if (VAR_17->cids[VAR_14].p_cid)
  goto out;

 VAR_15 = FUNC_10(VAR_9);


 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.queue_id = VAR_17->fw_rx_qid;
 VAR_10.vport_id = VAR_9->vport_id;
 VAR_10.stats_id = VAR_9->abs_vf_id + 0x10;

 FUNC_2(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.igu_sb_id = VAR_16->hw_sb;
 VAR_10.p_sb = &VAR_19;
 VAR_10.sb_idx = VAR_16->sb_index;

 FUNC_2(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.vfid = VAR_9->relative_vf_id;
 VAR_11.vf_qid = (u8)VAR_16->rx_qid;
 VAR_11.vf_legacy = VAR_15;
 VAR_11.qid_usage_idx = VAR_14;
 VAR_18 = FUNC_4(VAR_7, VAR_9->opaque_fid,
         &VAR_10, 1, &VAR_11);
 if (!VAR_18)
  goto out;




 if (!(VAR_15 & VAR_6))
  FUNC_1(VAR_7,
         VAR_0 +
         FUNC_0(VAR_9->abs_vf_id, VAR_16->rx_qid),
         0);

 VAR_20 = FUNC_5(VAR_7, VAR_18,
          VAR_16->bd_max_bytes,
          VAR_16->rxq_addr,
          VAR_16->cqe_pbl_addr, VAR_16->cqe_pbl_size);
 if (VAR_20) {
  VAR_13 = VAR_1;
  FUNC_3(VAR_7, VAR_18);
 } else {
  VAR_17->cids[VAR_14].p_cid = VAR_18;
  VAR_17->cids[VAR_14].b_is_tx = 0;
  VAR_13 = VAR_3;
  VAR_9->num_active_rxqs++;
 }

out:
 FUNC_9(VAR_7, VAR_8, VAR_9, VAR_13,
          !!(VAR_15 &
      VAR_6));
}
