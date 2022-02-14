
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int available; struct dpaa2_dq const* storage; } ;
struct qbman_swp {TYPE_2__ vdq; } ;
struct TYPE_3__ {scalar_t__ tok; } ;
struct dpaa2_dq {TYPE_1__ dq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct qbman_swp *VAR_1, const struct dpaa2_dq *VAR_2)
{
 if (VAR_2->dq.tok != VAR_0)
  return 0;






 ((struct dpaa2_dq *)VAR_2)->dq.tok = 0;






 if (VAR_1->vdq.storage == VAR_2) {
  VAR_1->vdq.storage = ((void*)0);
  FUNC_0(&VAR_1->vdq.available);
 }

 return 1;
}
