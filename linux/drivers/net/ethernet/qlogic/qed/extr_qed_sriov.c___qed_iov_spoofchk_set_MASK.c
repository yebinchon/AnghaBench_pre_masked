
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_vf_info {int spoof_chk; int req_spoofchk_val; int relative_vf_id; int vport_id; int opaque_fid; } ;
struct qed_sp_vport_update_params {int update_anti_spoofing_en_flg; int anti_spoofing_en; int vport_id; int opaque_fid; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qed_sp_vport_update_params*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_sp_vport_update_params*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct qed_hwfn *VAR_2,
      struct qed_vf_info *VAR_3, bool VAR_4)
{
 struct qed_sp_vport_update_params VAR_5;
 int VAR_6;

 if (VAR_4 == VAR_3->spoof_chk) {
  FUNC_0(VAR_2, VAR_0,
      "Spoofchk value[%d] is already configured\n", VAR_4);
  return 0;
 }

 FUNC_1(&VAR_5, 0, sizeof(struct qed_sp_vport_update_params));
 VAR_5.opaque_fid = VAR_3->opaque_fid;
 VAR_5.vport_id = VAR_3->vport_id;
 VAR_5.update_anti_spoofing_en_flg = 1;
 VAR_5.anti_spoofing_en = VAR_4;

 VAR_6 = FUNC_2(VAR_2, &VAR_5, VAR_1, ((void*)0));
 if (!VAR_6) {
  VAR_3->spoof_chk = VAR_4;
  VAR_3->req_spoofchk_val = VAR_3->spoof_chk;
  FUNC_0(VAR_2, VAR_0,
      "Spoofchk val[%d] configured\n", VAR_4);
 } else {
  FUNC_0(VAR_2, VAR_0,
      "Spoofchk configuration[val:%d] failed for VF[%d]\n",
      VAR_4, VAR_3->relative_vf_id);
 }

 return VAR_6;
}
