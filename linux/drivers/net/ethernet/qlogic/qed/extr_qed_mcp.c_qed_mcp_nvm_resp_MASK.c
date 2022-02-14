
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int mcp_nvm_resp; } ;


 int VAR_0 ;
 struct qed_hwfn* FUNC_0 (struct qed_dev*) ;
 int FUNC_1 (int *,int *,int) ;
 struct qed_ptt* FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*) ;

int FUNC_4(struct qed_dev *VAR_1, u8 *VAR_2)
{
 struct qed_hwfn *VAR_3 = FUNC_0(VAR_1);
 struct qed_ptt *VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_2, &VAR_1->mcp_nvm_resp, sizeof(VAR_1->mcp_nvm_resp));
 FUNC_3(VAR_3, VAR_4);

 return 0;
}
