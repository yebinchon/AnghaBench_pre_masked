
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_spq_entry {int list; } ;
struct qed_hwfn {TYPE_1__* p_spq; } ;
struct TYPE_2__ {int free_pool; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_0,
       struct qed_spq_entry *VAR_1)
{
 FUNC_0(&VAR_1->list, &VAR_0->p_spq->free_pool);
}
