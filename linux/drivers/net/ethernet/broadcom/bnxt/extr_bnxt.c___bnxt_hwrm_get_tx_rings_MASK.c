
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hwrm_func_qcfg_output {int alloc_tx_rings; } ;
struct hwrm_func_qcfg_input {int fid; int member_0; } ;
struct bnxt {int hwrm_spec_code; struct hwrm_func_qcfg_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct hwrm_func_qcfg_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_func_qcfg_input*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct bnxt *VAR_2, u16 VAR_3, int *VAR_4)
{
 struct hwrm_func_qcfg_output *VAR_5 = VAR_2->hwrm_cmd_resp_addr;
 struct hwrm_func_qcfg_input VAR_6 = {0};
 int VAR_7;

 if (VAR_2->hwrm_spec_code < 0x10601)
  return 0;

 FUNC_1(VAR_2, &VAR_6, VAR_1, -1, -1);
 VAR_6.fid = FUNC_2(VAR_3);
 VAR_7 = FUNC_0(VAR_2, &VAR_6, sizeof(VAR_6), VAR_0);
 if (!VAR_7)
  *VAR_4 = FUNC_3(VAR_5->alloc_tx_rings);

 return VAR_7;
}
