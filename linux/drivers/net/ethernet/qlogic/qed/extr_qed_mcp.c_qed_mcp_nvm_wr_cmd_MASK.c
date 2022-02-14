
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef void* u32 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_mb_params {void** p_data_src; void* mcp_param; void* mcp_resp; scalar_t__ data_src_size; void* param; void* cmd; } ;
struct TYPE_2__ {int valid; } ;
struct qed_hwfn {TYPE_1__ nvm_info; } ;
typedef int mb_params ;


 int FUNC_0 (struct qed_mcp_mb_params*,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_mcp_mb_params*) ;

__attribute__((used)) static int
FUNC_2(struct qed_hwfn *VAR_0,
     struct qed_ptt *VAR_1,
     u32 VAR_2,
     u32 VAR_3,
     u32 *VAR_4,
     u32 *VAR_5, u32 VAR_6, u32 *VAR_7)
{
 struct qed_mcp_mb_params VAR_8;
 int VAR_9;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.cmd = VAR_2;
 VAR_8.param = VAR_3;
 VAR_8.p_data_src = VAR_7;
 VAR_8.data_src_size = (u8)VAR_6;
 VAR_9 = FUNC_1(VAR_0, VAR_1, &VAR_8);
 if (VAR_9)
  return VAR_9;

 *VAR_4 = VAR_8.mcp_resp;
 *VAR_5 = VAR_8.mcp_param;


 VAR_0->nvm_info.valid = 0;

 return 0;
}
