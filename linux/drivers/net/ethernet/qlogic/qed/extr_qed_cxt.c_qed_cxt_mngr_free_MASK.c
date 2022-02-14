
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int * p_cxt_mngr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*) ;
 int FUNC_3 (struct qed_hwfn*) ;

void FUNC_4(struct qed_hwfn *VAR_0)
{
 if (!VAR_0->p_cxt_mngr)
  return;

 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
 FUNC_0(VAR_0->p_cxt_mngr);

 VAR_0->p_cxt_mngr = ((void*)0);
}
