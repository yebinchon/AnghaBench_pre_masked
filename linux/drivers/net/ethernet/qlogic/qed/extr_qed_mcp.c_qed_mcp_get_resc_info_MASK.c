
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_resc_alloc_out_params {int res_id; int resc_start; int resc_num; int mcp_resp; int cmd; } ;
struct qed_resc_alloc_in_params {int res_id; int resc_start; int resc_num; int mcp_resp; int cmd; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef int out_params ;
typedef int in_params ;
typedef enum qed_resources { ____Placeholder_qed_resources } qed_resources ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_resc_alloc_out_params*,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_resc_alloc_out_params*,struct qed_resc_alloc_out_params*) ;

int
FUNC_2(struct qed_hwfn *VAR_2,
        struct qed_ptt *VAR_3,
        enum qed_resources VAR_4,
        u32 *VAR_5, u32 *VAR_6, u32 *VAR_7)
{
 struct qed_resc_alloc_out_params VAR_8;
 struct qed_resc_alloc_in_params VAR_9;
 int VAR_10;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.cmd = VAR_0;
 VAR_9.res_id = VAR_4;
 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_10 = FUNC_1(VAR_2, VAR_3, &VAR_9,
      &VAR_8);
 if (VAR_10)
  return VAR_10;

 *VAR_5 = VAR_8.mcp_resp;

 if (*VAR_5 == VAR_1) {
  *VAR_6 = VAR_8.resc_num;
  *VAR_7 = VAR_8.resc_start;
 }

 return 0;
}
