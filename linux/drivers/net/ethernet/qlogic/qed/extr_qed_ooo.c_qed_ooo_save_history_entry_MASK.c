
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ooo_history {size_t head_idx; size_t num_of_cqes; struct ooo_opaque* p_cqes; } ;
struct qed_ooo_info {struct qed_ooo_history ooo_history; } ;
struct qed_hwfn {int dummy; } ;
struct ooo_opaque {int dummy; } ;



void FUNC_0(struct qed_hwfn *VAR_0,
    struct qed_ooo_info *VAR_1,
    struct ooo_opaque *VAR_2)
{
 struct qed_ooo_history *VAR_3 = &VAR_1->ooo_history;

 if (VAR_3->head_idx == VAR_3->num_of_cqes)
  VAR_3->head_idx = 0;
 VAR_3->p_cqes[VAR_3->head_idx] = *VAR_2;
 VAR_3->head_idx++;
}
