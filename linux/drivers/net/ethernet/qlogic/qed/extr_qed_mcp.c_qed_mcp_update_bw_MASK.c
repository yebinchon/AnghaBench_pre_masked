
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_function_info {int bandwidth_max; int bandwidth_min; } ;
struct qed_hwfn {int cdev; TYPE_1__* mcp_info; } ;
struct public_func {int dummy; } ;
struct TYPE_2__ {struct qed_mcp_function_info func_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int *,int *) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,struct public_func*,int ) ;
 int FUNC_5 (struct qed_hwfn*,struct public_func*) ;

__attribute__((used)) static void FUNC_6(struct qed_hwfn *VAR_1, struct qed_ptt *VAR_2)
{
 struct qed_mcp_function_info *VAR_3;
 struct public_func VAR_4;
 u32 VAR_5 = 0, VAR_6 = 0;

 FUNC_4(VAR_1, VAR_2, &VAR_4, FUNC_0(VAR_1));

 FUNC_5(VAR_1, &VAR_4);

 VAR_3 = &VAR_1->mcp_info->func_info;

 FUNC_2(VAR_1->cdev, VAR_3->bandwidth_min);
 FUNC_1(VAR_1->cdev, VAR_3->bandwidth_max);


 FUNC_3(VAR_1, VAR_2, VAR_0, 0, &VAR_5,
      &VAR_6);
}
