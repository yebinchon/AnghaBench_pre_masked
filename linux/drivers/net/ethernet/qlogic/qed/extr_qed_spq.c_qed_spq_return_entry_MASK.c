
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_spq_entry {int dummy; } ;
struct qed_hwfn {TYPE_1__* p_spq; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (struct qed_hwfn*,struct qed_spq_entry*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct qed_hwfn *VAR_0, struct qed_spq_entry *VAR_1)
{
 FUNC_1(&VAR_0->p_spq->lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->p_spq->lock);
}
