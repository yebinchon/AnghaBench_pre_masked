
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_vf_queue {TYPE_1__* cids; } ;
struct qed_queue_cid {int dummy; } ;
struct TYPE_2__ {struct qed_queue_cid* p_cid; int b_is_tx; } ;


 int VAR_0 ;

__attribute__((used)) static struct qed_queue_cid *
FUNC_0(struct qed_vf_queue *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->cids[VAR_2].p_cid && !VAR_1->cids[VAR_2].b_is_tx)
   return VAR_1->cids[VAR_2].p_cid;
 }

 return ((void*)0);
}
