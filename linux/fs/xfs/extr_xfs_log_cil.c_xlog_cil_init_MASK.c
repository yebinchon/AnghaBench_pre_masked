
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlog {struct xfs_cil* l_cilp; } ;
struct xfs_cil_ctx {int sequence; struct xfs_cil* cil; int busy_extents; int committing; } ;
struct xfs_cil {int xc_current_sequence; struct xlog* xc_log; struct xfs_cil_ctx* xc_ctx; int xc_commit_wait; int xc_ctx_lock; int xc_push_lock; int xc_cil_lock; int xc_committing; int xc_cil; int xc_push_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xfs_cil*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

int
FUNC_7(
 struct xlog *VAR_3)
{
 struct xfs_cil *VAR_4;
 struct xfs_cil_ctx *VAR_5;

 VAR_4 = FUNC_5(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  FUNC_4(VAR_4);
  return -VAR_0;
 }

 FUNC_1(&VAR_4->xc_push_work, VAR_2);
 FUNC_0(&VAR_4->xc_cil);
 FUNC_0(&VAR_4->xc_committing);
 FUNC_6(&VAR_4->xc_cil_lock);
 FUNC_6(&VAR_4->xc_push_lock);
 FUNC_2(&VAR_4->xc_ctx_lock);
 FUNC_3(&VAR_4->xc_commit_wait);

 FUNC_0(&VAR_5->committing);
 FUNC_0(&VAR_5->busy_extents);
 VAR_5->sequence = 1;
 VAR_5->cil = VAR_4;
 VAR_4->xc_ctx = VAR_5;
 VAR_4->xc_current_sequence = VAR_5->sequence;

 VAR_4->xc_log = VAR_3;
 VAR_3->l_cilp = VAR_4;
 return 0;
}
