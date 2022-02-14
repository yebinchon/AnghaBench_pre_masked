
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_hwfn {struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {int srq_count; } ;



u32 FUNC_0(struct qed_hwfn *VAR_0)
{
 struct qed_cxt_mngr *VAR_1 = VAR_0->p_cxt_mngr;

 return VAR_1->srq_count;
}
