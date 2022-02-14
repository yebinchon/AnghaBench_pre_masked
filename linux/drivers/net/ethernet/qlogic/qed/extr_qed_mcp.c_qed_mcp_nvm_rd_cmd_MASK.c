
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_mb_params {int data_dst_size; void* mcp_param; void* mcp_resp; int * p_data_dst; void* param; void* cmd; } ;
struct qed_hwfn {int dummy; } ;
typedef int mb_params ;


 int VAR_0 ;
 int FUNC_0 (void**,int *,void*) ;
 int FUNC_1 (struct qed_mcp_mb_params*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,struct qed_mcp_mb_params*) ;

int FUNC_3(struct qed_hwfn *VAR_1,
         struct qed_ptt *VAR_2,
         u32 VAR_3,
         u32 VAR_4,
         u32 *VAR_5,
         u32 *VAR_6, u32 *VAR_7, u32 *VAR_8)
{
 struct qed_mcp_mb_params VAR_9;
 u8 VAR_10[VAR_0];
 int VAR_11;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.cmd = VAR_3;
 VAR_9.param = VAR_4;
 VAR_9.p_data_dst = VAR_10;


 VAR_9.data_dst_size = VAR_0;

 VAR_11 = FUNC_2(VAR_1, VAR_2, &VAR_9);
 if (VAR_11)
  return VAR_11;

 *VAR_5 = VAR_9.mcp_resp;
 *VAR_6 = VAR_9.mcp_param;

 *VAR_7 = *VAR_6;
 FUNC_0(VAR_8, VAR_10, *VAR_7);

 return 0;
}
