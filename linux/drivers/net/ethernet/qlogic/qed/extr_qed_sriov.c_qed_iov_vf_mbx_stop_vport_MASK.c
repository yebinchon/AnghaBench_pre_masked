
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_vf_info {int spoof_chk; int b_malicious; int shadow_config; scalar_t__ configured_features; int vport_id; int opaque_fid; int abs_vf_id; int vport_instance; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct pfvf_def_resp_tlv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int FUNC_1 (struct qed_hwfn*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,int ,int,int ) ;
 scalar_t__ FUNC_4 (struct qed_hwfn*,struct qed_vf_info*) ;
 scalar_t__ FUNC_5 (struct qed_hwfn*,struct qed_vf_info*) ;
 int FUNC_6 (struct qed_hwfn*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct qed_hwfn *VAR_4,
          struct qed_ptt *VAR_5,
          struct qed_vf_info *VAR_6)
{
 u8 VAR_7 = VAR_3;
 int VAR_8;

 VAR_6->vport_instance--;
 VAR_6->spoof_chk = 0;

 if ((FUNC_4(VAR_4, VAR_6)) ||
     (FUNC_5(VAR_4, VAR_6))) {
  VAR_6->b_malicious = 1;
  FUNC_1(VAR_4,
     "VF [%02x] - considered malicious; Unable to stop RX/TX queues\n",
     VAR_6->abs_vf_id);
  VAR_7 = VAR_2;
  goto out;
 }

 VAR_8 = FUNC_6(VAR_4, VAR_6->opaque_fid, VAR_6->vport_id);
 if (VAR_8) {
  FUNC_0(VAR_4, "qed_iov_vf_mbx_stop_vport returned error %d\n",
         VAR_8);
  VAR_7 = VAR_1;
 }


 VAR_6->configured_features = 0;
 FUNC_2(&VAR_6->shadow_config, 0, sizeof(VAR_6->shadow_config));

out:
 FUNC_3(VAR_4, VAR_5, VAR_6, VAR_0,
        sizeof(struct pfvf_def_resp_tlv), VAR_7);
}
