
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct vfpf_bulletin_update_mac_tlv {int mac; } ;
struct TYPE_4__ {int is_trusted_configured; } ;
struct qed_iov_vf_mbx {TYPE_2__* req_virt; } ;
struct TYPE_6__ {struct qed_bulletin_content* p_virt; } ;
struct qed_vf_info {int abs_vf_id; TYPE_1__ p_vf_info; struct qed_iov_vf_mbx vf_mbx; TYPE_3__ bulletin; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_bulletin_content {int mac; } ;
struct pfvf_def_resp_tlv {int dummy; } ;
struct TYPE_5__ {struct vfpf_bulletin_update_mac_tlv bulletin_update_mac; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int ,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct qed_hwfn *VAR_5,
      struct qed_ptt *VAR_6,
      struct qed_vf_info *VAR_7)
{
 struct qed_bulletin_content *VAR_8 = VAR_7->bulletin.p_virt;
 struct qed_iov_vf_mbx *VAR_9 = &VAR_7->vf_mbx;
 struct vfpf_bulletin_update_mac_tlv *VAR_10;
 u8 VAR_11 = VAR_3;
 int VAR_12 = 0;

 if (!VAR_7->p_vf_info.is_trusted_configured) {
  FUNC_0(VAR_5,
      VAR_4,
      "Blocking bulletin update request from untrusted VF[%d]\n",
      VAR_7->abs_vf_id);
  VAR_11 = VAR_2;
  VAR_12 = -VAR_1;
  goto send_status;
 }

 VAR_10 = &VAR_9->req_virt->bulletin_update_mac;
 FUNC_1(VAR_8->mac, VAR_10->mac);
 FUNC_0(VAR_5, VAR_4,
     "Updated bulletin of VF[%d] with requested MAC[%pM]\n",
     VAR_7->abs_vf_id, VAR_10->mac);

send_status:
 FUNC_2(VAR_5, VAR_6, VAR_7,
        VAR_0,
        sizeof(struct pfvf_def_resp_tlv), VAR_11);
 return VAR_12;
}
