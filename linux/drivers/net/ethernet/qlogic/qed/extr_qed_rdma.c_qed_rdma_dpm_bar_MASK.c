
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {int db_bar_no_edpm; } ;


 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*) ;

void FUNC_1(struct qed_hwfn *VAR_0, struct qed_ptt *VAR_1)
{
 VAR_0->db_bar_no_edpm = 1;

 FUNC_0(VAR_0, VAR_1);
}
