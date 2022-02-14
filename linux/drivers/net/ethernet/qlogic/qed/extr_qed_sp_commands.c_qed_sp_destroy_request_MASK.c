
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_spq_entry {int * queue; } ;
struct qed_hwfn {TYPE_1__* p_spq; } ;
struct TYPE_2__ {int unlimited_pending; } ;


 int FUNC_0 (struct qed_spq_entry*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_spq_entry*) ;

void FUNC_2(struct qed_hwfn *VAR_0,
       struct qed_spq_entry *VAR_1)
{




 if (VAR_1->queue == &VAR_0->p_spq->unlimited_pending)
  FUNC_0(VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
