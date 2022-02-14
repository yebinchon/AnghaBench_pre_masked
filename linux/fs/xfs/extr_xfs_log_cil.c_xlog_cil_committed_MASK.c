
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_mount {int m_flags; } ;
struct xfs_cil_ctx {int busy_extents; int lv_chain; TYPE_2__* cil; int committing; int start_lsn; } ;
struct TYPE_4__ {int xc_push_lock; TYPE_1__* xc_log; int xc_commit_wait; } ;
struct TYPE_3__ {int l_ailp; struct xfs_mount* l_mp; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_cil_ctx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xfs_mount*,int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct xfs_mount*,struct xfs_cil_ctx*) ;

__attribute__((used)) static void
FUNC_11(
 struct xfs_cil_ctx *VAR_1,
 bool VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_1->cil->xc_log->l_mp;
 if (VAR_2) {
  FUNC_3(&VAR_1->cil->xc_push_lock);
  FUNC_5(&VAR_1->cil->xc_commit_wait);
  FUNC_4(&VAR_1->cil->xc_push_lock);
 }

 FUNC_8(VAR_1->cil->xc_log->l_ailp, VAR_1->lv_chain,
     VAR_1->start_lsn, VAR_2);

 FUNC_7(&VAR_1->busy_extents);
 FUNC_6(VAR_3, &VAR_1->busy_extents,
        (VAR_3->m_flags & VAR_0) && !VAR_2);

 FUNC_3(&VAR_1->cil->xc_push_lock);
 FUNC_1(&VAR_1->committing);
 FUNC_4(&VAR_1->cil->xc_push_lock);

 FUNC_9(VAR_1->lv_chain);

 if (!FUNC_2(&VAR_1->busy_extents))
  FUNC_10(VAR_3, VAR_1);
 else
  FUNC_0(VAR_1);
}
