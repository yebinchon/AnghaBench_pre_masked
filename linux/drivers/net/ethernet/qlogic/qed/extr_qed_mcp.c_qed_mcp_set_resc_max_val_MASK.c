
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_resc_alloc_out_params {int res_id; int mcp_resp; int resc_max_val; int cmd; } ;
struct qed_resc_alloc_in_params {int res_id; int mcp_resp; int resc_max_val; int cmd; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
typedef int out_params ;
typedef int in_params ;
typedef enum qed_resources { ____Placeholder_qed_resources } qed_resources ;


 int VAR_0 ;
 int FUNC_0 (struct qed_resc_alloc_out_params*,int ,int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_resc_alloc_out_params*,struct qed_resc_alloc_out_params*) ;

int
FUNC_2(struct qed_hwfn *VAR_1,
    struct qed_ptt *VAR_2,
    enum qed_resources VAR_3,
    u32 VAR_4, u32 *VAR_5)
{
 struct qed_resc_alloc_out_params VAR_6;
 struct qed_resc_alloc_in_params VAR_7;
 int VAR_8;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cmd = VAR_0;
 VAR_7.res_id = VAR_3;
 VAR_7.resc_max_val = VAR_4;
 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_8 = FUNC_1(VAR_1, VAR_2, &VAR_7,
      &VAR_6);
 if (VAR_8)
  return VAR_8;

 *VAR_5 = VAR_6.mcp_resp;

 return 0;
}
