
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_mb_params {void* mcp_param; void* mcp_resp; void* param; void* cmd; } ;
struct qed_hwfn {int dummy; } ;
typedef int mb_params ;


 int FUNC_0 (struct qed_mcp_mb_params*,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_mcp_mb_params*) ;

int FUNC_2(struct qed_hwfn *VAR_0,
  struct qed_ptt *VAR_1,
  u32 VAR_2,
  u32 VAR_3,
  u32 *VAR_4,
  u32 *VAR_5)
{
 struct qed_mcp_mb_params VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cmd = VAR_2;
 VAR_6.param = VAR_3;

 VAR_7 = FUNC_1(VAR_0, VAR_1, &VAR_6);
 if (VAR_7)
  return VAR_7;

 *VAR_4 = VAR_6.mcp_resp;
 *VAR_5 = VAR_6.mcp_param;

 return 0;
}
