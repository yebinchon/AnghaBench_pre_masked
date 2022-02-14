
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_log_item {int li_seq; TYPE_3__* li_mountp; int li_cil; } ;
struct xfs_cil_ctx {int sequence; } ;
struct TYPE_6__ {TYPE_2__* m_log; } ;
struct TYPE_5__ {TYPE_1__* l_cilp; } ;
struct TYPE_4__ {struct xfs_cil_ctx* xc_ctx; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;

bool
FUNC_2(
 struct xfs_log_item *VAR_0)
{
 struct xfs_cil_ctx *VAR_1;

 if (FUNC_1(&VAR_0->li_cil))
  return 0;

 VAR_1 = VAR_0->li_mountp->m_log->l_cilp->xc_ctx;






 if (FUNC_0(VAR_0->li_seq, VAR_1->sequence) != 0)
  return 0;
 return 1;
}
