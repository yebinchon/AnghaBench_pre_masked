
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct qed_iov_vf_mbx {int dummy; } ;
struct qed_vf_info {int relative_vf_id; int vport_id; int opaque_fid; int abs_vf_id; int vport_instance; struct qed_iov_vf_mbx vf_mbx; } ;
struct qed_sp_vport_update_params {int * rss_params; int vport_id; int opaque_fid; } ;
struct qed_sge_tpa_params {int dummy; } ;
struct qed_rss_params {int dummy; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef int params ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qed_sp_vport_update_params*,int ,int) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,int ,struct qed_sp_vport_update_params*,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,struct qed_vf_info*,struct qed_iov_vf_mbx*,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,struct qed_vf_info*,scalar_t__,int ) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_sp_vport_update_params*,struct qed_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_sp_vport_update_params*,struct qed_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_sp_vport_update_params*,struct qed_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_sp_vport_update_params*,struct qed_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_9 (struct qed_hwfn*,struct qed_vf_info*,struct qed_sp_vport_update_params*,struct qed_rss_params*,struct qed_iov_vf_mbx*,scalar_t__*,scalar_t__*) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_vf_info*,struct qed_sp_vport_update_params*,struct qed_sge_tpa_params*,struct qed_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_sp_vport_update_params*,struct qed_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_12 (struct qed_hwfn*,struct qed_sp_vport_update_params*,struct qed_vf_info*,struct qed_iov_vf_mbx*,scalar_t__*) ;
 int FUNC_13 (struct qed_hwfn*,struct qed_sp_vport_update_params*,int ,int *) ;
 int FUNC_14 (struct qed_rss_params*) ;
 struct qed_rss_params* FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(struct qed_hwfn *VAR_5,
     struct qed_ptt *VAR_6,
     struct qed_vf_info *VAR_7)
{
 struct qed_rss_params *VAR_8 = ((void*)0);
 struct qed_sp_vport_update_params VAR_9;
 struct qed_iov_vf_mbx *VAR_10 = &VAR_7->vf_mbx;
 struct qed_sge_tpa_params VAR_11;
 u16 VAR_12 = 0, VAR_13 = 0;
 u8 VAR_14 = VAR_2;
 u16 VAR_15;
 int VAR_16;


 if (!VAR_7->vport_instance) {
  FUNC_0(VAR_5,
      VAR_3,
      "No VPORT instance available for VF[%d], failing vport update\n",
      VAR_7->abs_vf_id);
  VAR_14 = VAR_0;
  goto out;
 }
 VAR_8 = FUNC_15(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  VAR_14 = VAR_0;
  goto out;
 }

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.opaque_fid = VAR_7->opaque_fid;
 VAR_9.vport_id = VAR_7->vport_id;
 VAR_9.rss_params = ((void*)0);




 FUNC_7(VAR_5, &VAR_9, VAR_10, &VAR_12);
 FUNC_12(VAR_5, &VAR_9, VAR_7, VAR_10, &VAR_12);
 FUNC_11(VAR_5, &VAR_9, VAR_10, &VAR_12);
 FUNC_8(VAR_5, &VAR_9, VAR_10, &VAR_12);
 FUNC_6(VAR_5, &VAR_9, VAR_10, &VAR_12);
 FUNC_5(VAR_5, &VAR_9, VAR_10, &VAR_12);
 FUNC_10(VAR_5, VAR_7, &VAR_9,
     &VAR_11, VAR_10, &VAR_12);

 VAR_13 = VAR_12;





 FUNC_9(VAR_5, VAR_7, &VAR_9, VAR_8,
        VAR_10, &VAR_12, &VAR_13);

 if (FUNC_2(VAR_5, VAR_7->relative_vf_id,
         &VAR_9, &VAR_13)) {
  VAR_13 = 0;
  VAR_14 = VAR_1;
  goto out;
 }

 if (!VAR_13) {
  if (VAR_12)
   FUNC_0(VAR_5, VAR_3,
       "Upper-layer prevents VF vport configuration\n");
  else
   FUNC_0(VAR_5, VAR_3,
       "No feature tlvs found for vport update\n");
  VAR_14 = VAR_1;
  goto out;
 }

 VAR_16 = FUNC_13(VAR_5, &VAR_9, VAR_4, ((void*)0));

 if (VAR_16)
  VAR_14 = VAR_0;

out:
 FUNC_14(VAR_8);
 VAR_15 = FUNC_3(VAR_5, VAR_7, VAR_10, VAR_14,
        VAR_12, VAR_13);
 FUNC_4(VAR_5, VAR_6, VAR_7, VAR_15, VAR_14);
}
