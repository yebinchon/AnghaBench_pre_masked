
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrm_cfa_adv_flow_mgnt_qcaps_output {int flags; } ;
struct hwrm_cfa_adv_flow_mgnt_qcaps_input {int member_0; } ;
struct bnxt {int fw_cap; int hwrm_cmd_lock; struct hwrm_cfa_adv_flow_mgnt_qcaps_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bnxt*,struct hwrm_cfa_adv_flow_mgnt_qcaps_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_cfa_adv_flow_mgnt_qcaps_input*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct bnxt *VAR_5)
{
 struct hwrm_cfa_adv_flow_mgnt_qcaps_input VAR_6 = {0};
 struct hwrm_cfa_adv_flow_mgnt_qcaps_output *VAR_7;
 int VAR_8 = 0;
 u32 VAR_9;

 if (!(VAR_5->fw_cap & VAR_0))
  return 0;

 VAR_7 = VAR_5->hwrm_cmd_resp_addr;
 FUNC_1(VAR_5, &VAR_6, VAR_3, -1, -1);

 FUNC_3(&VAR_5->hwrm_cmd_lock);
 VAR_8 = FUNC_0(VAR_5, &VAR_6, sizeof(VAR_6), VAR_4);
 if (VAR_8)
  goto hwrm_cfa_adv_qcaps_exit;

 VAR_9 = FUNC_2(VAR_7->flags);
 if (VAR_9 &
     VAR_2)
  VAR_5->fw_cap |= VAR_1;

hwrm_cfa_adv_qcaps_exit:
 FUNC_4(&VAR_5->hwrm_cmd_lock);
 return VAR_8;
}
