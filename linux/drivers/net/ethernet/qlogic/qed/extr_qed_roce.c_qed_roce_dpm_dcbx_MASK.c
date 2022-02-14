
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dcbx_no_edpm; } ;


 scalar_t__ FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*) ;

void FUNC_2(struct qed_hwfn *VAR_0, struct qed_ptt *VAR_1)
{
 u8 VAR_2;





 VAR_2 = FUNC_0(VAR_0) ? 1 : 0;
 VAR_0->dcbx_no_edpm = (u8)VAR_2;

 FUNC_1(VAR_0, VAR_1);
}
