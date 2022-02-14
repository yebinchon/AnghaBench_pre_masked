
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xlog {TYPE_1__* l_mp; struct xfs_cil* l_cilp; } ;
struct xfs_cil {scalar_t__ xc_push_seq; scalar_t__ xc_current_sequence; int xc_push_lock; int xc_push_work; TYPE_2__* xc_ctx; int xc_cil; } ;
struct TYPE_4__ {scalar_t__ space_used; } ;
struct TYPE_3__ {int m_cil_workqueue; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct xlog*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(
 struct xlog *VAR_0)
{
 struct xfs_cil *VAR_1 = VAR_0->l_cilp;





 FUNC_0(!FUNC_2(&VAR_1->xc_cil));





 if (VAR_1->xc_ctx->space_used < FUNC_1(VAR_0))
  return;

 FUNC_4(&VAR_1->xc_push_lock);
 if (VAR_1->xc_push_seq < VAR_1->xc_current_sequence) {
  VAR_1->xc_push_seq = VAR_1->xc_current_sequence;
  FUNC_3(VAR_0->l_mp->m_cil_workqueue, &VAR_1->xc_push_work);
 }
 FUNC_5(&VAR_1->xc_push_lock);

}
