
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int cdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ,int ) ;

int FUNC_3(struct qed_hwfn *VAR_0,
      struct qed_ptt *VAR_1, u8 VAR_2, u8 VAR_3)
{
 if (FUNC_0(VAR_0->cdev))
  return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_3);
}
