
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {int cdev; scalar_t__ b_int_enabled; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int ) ;

void FUNC_2(struct qed_hwfn *VAR_1, struct qed_ptt *VAR_2)
{
 VAR_1->b_int_enabled = 0;

 if (FUNC_0(VAR_1->cdev))
  return;

 FUNC_1(VAR_1, VAR_2, VAR_0, 0);
}
