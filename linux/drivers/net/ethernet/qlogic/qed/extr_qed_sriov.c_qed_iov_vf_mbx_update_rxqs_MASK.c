
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct vfpf_update_rxq_tlv {int flags; int num_rxqs; size_t rx_qid; } ;
struct TYPE_7__ {int capabilities; } ;
struct TYPE_8__ {TYPE_2__ vfdev_info; } ;
struct qed_iov_vf_mbx {TYPE_1__* req_virt; } ;
struct qed_vf_info {TYPE_5__* vf_queues; int relative_vf_id; TYPE_3__ acquire; struct qed_iov_vf_mbx vf_mbx; } ;
struct qed_queue_cid {int dummy; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct TYPE_10__ {TYPE_4__* cids; } ;
struct TYPE_9__ {struct qed_queue_cid* p_cid; scalar_t__ b_is_tx; } ;
struct TYPE_6__ {struct vfpf_update_rxq_tlv update_rxq; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,...) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int ,size_t,size_t) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_vf_info*,size_t,int ) ;
 size_t FUNC_3 (struct qed_hwfn*,struct qed_vf_info*,int) ;
 int FUNC_4 (struct qed_hwfn*,void**,size_t,size_t,size_t,int ,int *) ;

__attribute__((used)) static void FUNC_5(struct qed_hwfn *VAR_11,
           struct qed_ptt *VAR_12,
           struct qed_vf_info *VAR_13)
{
 struct qed_queue_cid *VAR_14[VAR_5];
 u16 VAR_15 = sizeof(struct pfvf_def_resp_tlv);
 struct qed_iov_vf_mbx *VAR_16 = &VAR_13->vf_mbx;
 struct vfpf_update_rxq_tlv *VAR_17;
 u8 VAR_18 = VAR_1;
 u8 VAR_19;
 u8 VAR_20;
 u8 VAR_21;
 int VAR_22;
 u8 VAR_23;

 VAR_17 = &VAR_16->req_virt->update_rxq;
 VAR_20 = !!(VAR_17->flags & VAR_9);
 VAR_19 = !!(VAR_17->flags & VAR_10);

 VAR_21 = FUNC_3(VAR_11, VAR_13, 0);
 if (VAR_21 == VAR_3)
  goto out;




 if ((VAR_13->acquire.vfdev_info.capabilities &
      VAR_8) && VAR_17->num_rxqs != 1) {
  FUNC_0(VAR_11, VAR_6,
      "VF[%d] supports QIDs but sends multiple queues\n",
      VAR_13->relative_vf_id);
  goto out;
 }




 for (VAR_23 = VAR_17->rx_qid; VAR_23 < VAR_17->rx_qid + VAR_17->num_rxqs; VAR_23++) {
  if (!FUNC_2(VAR_11, VAR_13, VAR_23,
       VAR_4) ||
      !VAR_13->vf_queues[VAR_23].cids[VAR_21].p_cid ||
      VAR_13->vf_queues[VAR_23].cids[VAR_21].b_is_tx) {
   FUNC_0(VAR_11, VAR_6,
       "VF[%d]: Incorrect Rxqs [%04x, %02x]\n",
       VAR_13->relative_vf_id, VAR_17->rx_qid,
       VAR_17->num_rxqs);
   goto out;
  }
 }


 for (VAR_23 = 0; VAR_23 < VAR_17->num_rxqs; VAR_23++) {
  u16 VAR_24 = VAR_17->rx_qid + VAR_23;

  VAR_14[VAR_23] = VAR_13->vf_queues[VAR_24].cids[VAR_21].p_cid;
 }

 VAR_22 = FUNC_4(VAR_11, (void **)&VAR_14,
      VAR_17->num_rxqs,
      VAR_20,
      VAR_19,
      VAR_7, ((void*)0));
 if (VAR_22)
  goto out;

 VAR_18 = VAR_2;
out:
 FUNC_1(VAR_11, VAR_12, VAR_13, VAR_0,
        VAR_15, VAR_18);
}
