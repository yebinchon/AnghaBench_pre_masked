
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct vfpf_stop_rxqs_tlv {int num_rxqs; int cqe_completion; int rx_qid; } ;
struct qed_iov_vf_mbx {TYPE_1__* req_virt; } ;
struct qed_vf_info {int relative_vf_id; struct qed_iov_vf_mbx vf_mbx; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct TYPE_2__ {struct vfpf_stop_rxqs_tlv stop_rxqs; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int ,int,scalar_t__) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,struct qed_vf_info*,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_vf_info*,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct qed_hwfn *VAR_6,
         struct qed_ptt *VAR_7,
         struct qed_vf_info *VAR_8)
{
 u16 VAR_9 = sizeof(struct pfvf_def_resp_tlv);
 struct qed_iov_vf_mbx *VAR_10 = &VAR_8->vf_mbx;
 u8 VAR_11 = VAR_1;
 struct vfpf_stop_rxqs_tlv *VAR_12;
 u8 VAR_13;
 int VAR_14;





 VAR_12 = &VAR_10->req_virt->stop_rxqs;
 if (VAR_12->num_rxqs != 1) {
  FUNC_0(VAR_6, VAR_5,
      "Odd; VF[%d] tried stopping multiple Rx queues\n",
      VAR_8->relative_vf_id);
  VAR_11 = VAR_2;
  goto out;
 }


 VAR_13 = FUNC_2(VAR_6, VAR_8, 0);
 if (VAR_13 == VAR_4)
  goto out;

 VAR_14 = FUNC_3(VAR_6, VAR_8, VAR_12->rx_qid,
      VAR_13, VAR_12->cqe_completion);
 if (!VAR_14)
  VAR_11 = VAR_3;
out:
 FUNC_1(VAR_6, VAR_7, VAR_8, VAR_0,
        VAR_9, VAR_11);
}
