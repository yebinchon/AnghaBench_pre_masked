
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_trans {int t_flags; scalar_t__ t_blk_res; scalar_t__ t_fdblocks_delta; scalar_t__ t_rtx_res; scalar_t__ t_frextents_delta; int t_icount_delta; int t_ifree_delta; int t_dblocks_delta; int t_agcount_delta; int t_rextsize_delta; int t_rbmblocks_delta; int t_rblocks_delta; int t_rextents_delta; int t_imaxpct_delta; int t_rextslog_delta; struct xfs_mount* t_mountp; } ;
struct TYPE_2__ {int sb_frextents; int sb_dblocks; int sb_agcount; int sb_imax_pct; int sb_rextsize; int sb_rbmblocks; int sb_rblocks; int sb_rextents; int sb_rextslog; } ;
struct xfs_mount {int m_sb_lock; TYPE_1__ m_sb; } ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xfs_mount*,int,int) ;
 int FUNC_4 (struct xfs_mount*,int) ;
 int FUNC_5 (struct xfs_mount*,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;

void
FUNC_10(
 struct xfs_trans *VAR_2)
{
 struct xfs_mount *VAR_3 = VAR_2->t_mountp;
 bool VAR_4 = (VAR_2->t_flags & VAR_0) != 0;
 int64_t VAR_5 = 0;
 int64_t VAR_6 = 0;
 int64_t VAR_7 = 0;
 int64_t VAR_8 = 0;
 int VAR_9;


 if (VAR_2->t_blk_res > 0)
  VAR_5 = VAR_2->t_blk_res;
 if ((VAR_2->t_fdblocks_delta != 0) &&
     (FUNC_9(&VAR_3->m_sb) ||
      (VAR_2->t_flags & VAR_1)))
         VAR_5 += VAR_2->t_fdblocks_delta;

 if (VAR_2->t_rtx_res > 0)
  VAR_6 = VAR_2->t_rtx_res;
 if ((VAR_2->t_frextents_delta != 0) &&
     (VAR_2->t_flags & VAR_1))
  VAR_6 += VAR_2->t_frextents_delta;

 if (FUNC_9(&VAR_3->m_sb) ||
      (VAR_2->t_flags & VAR_1)) {
  VAR_7 = VAR_2->t_icount_delta;
  VAR_8 = VAR_2->t_ifree_delta;
 }


 if (VAR_5) {
  VAR_9 = FUNC_3(VAR_3, VAR_5, VAR_4);
  if (VAR_9)
   goto out;
 }

 if (VAR_7) {
  VAR_9 = FUNC_4(VAR_3, VAR_7);
  if (VAR_9)
   goto out_undo_fdblocks;
 }

 if (VAR_8) {
  VAR_9 = FUNC_5(VAR_3, VAR_8);
  if (VAR_9)
   goto out_undo_icount;
 }

 if (VAR_6 == 0 && !(VAR_2->t_flags & VAR_1))
  return;


 FUNC_1(&VAR_3->m_sb_lock);
 if (VAR_6) {
  VAR_9 = FUNC_7(&VAR_3->m_sb.sb_frextents, VAR_6);
  if (VAR_9)
   goto out_undo_ifree;
 }

 if (VAR_2->t_dblocks_delta != 0) {
  VAR_9 = FUNC_7(&VAR_3->m_sb.sb_dblocks, VAR_2->t_dblocks_delta);
  if (VAR_9)
   goto out_undo_frextents;
 }
 if (VAR_2->t_agcount_delta != 0) {
  VAR_9 = FUNC_6(&VAR_3->m_sb.sb_agcount, VAR_2->t_agcount_delta);
  if (VAR_9)
   goto out_undo_dblocks;
 }
 if (VAR_2->t_imaxpct_delta != 0) {
  VAR_9 = FUNC_8(&VAR_3->m_sb.sb_imax_pct, VAR_2->t_imaxpct_delta);
  if (VAR_9)
   goto out_undo_agcount;
 }
 if (VAR_2->t_rextsize_delta != 0) {
  VAR_9 = FUNC_6(&VAR_3->m_sb.sb_rextsize,
         VAR_2->t_rextsize_delta);
  if (VAR_9)
   goto out_undo_imaxpct;
 }
 if (VAR_2->t_rbmblocks_delta != 0) {
  VAR_9 = FUNC_6(&VAR_3->m_sb.sb_rbmblocks,
         VAR_2->t_rbmblocks_delta);
  if (VAR_9)
   goto out_undo_rextsize;
 }
 if (VAR_2->t_rblocks_delta != 0) {
  VAR_9 = FUNC_7(&VAR_3->m_sb.sb_rblocks, VAR_2->t_rblocks_delta);
  if (VAR_9)
   goto out_undo_rbmblocks;
 }
 if (VAR_2->t_rextents_delta != 0) {
  VAR_9 = FUNC_7(&VAR_3->m_sb.sb_rextents,
         VAR_2->t_rextents_delta);
  if (VAR_9)
   goto out_undo_rblocks;
 }
 if (VAR_2->t_rextslog_delta != 0) {
  VAR_9 = FUNC_8(&VAR_3->m_sb.sb_rextslog,
         VAR_2->t_rextslog_delta);
  if (VAR_9)
   goto out_undo_rextents;
 }
 FUNC_2(&VAR_3->m_sb_lock);
 return;

out_undo_rextents:
 if (VAR_2->t_rextents_delta)
  FUNC_7(&VAR_3->m_sb.sb_rextents, -VAR_2->t_rextents_delta);
out_undo_rblocks:
 if (VAR_2->t_rblocks_delta)
  FUNC_7(&VAR_3->m_sb.sb_rblocks, -VAR_2->t_rblocks_delta);
out_undo_rbmblocks:
 if (VAR_2->t_rbmblocks_delta)
  FUNC_6(&VAR_3->m_sb.sb_rbmblocks, -VAR_2->t_rbmblocks_delta);
out_undo_rextsize:
 if (VAR_2->t_rextsize_delta)
  FUNC_6(&VAR_3->m_sb.sb_rextsize, -VAR_2->t_rextsize_delta);
out_undo_imaxpct:
 if (VAR_2->t_rextsize_delta)
  FUNC_8(&VAR_3->m_sb.sb_imax_pct, -VAR_2->t_imaxpct_delta);
out_undo_agcount:
 if (VAR_2->t_agcount_delta)
  FUNC_6(&VAR_3->m_sb.sb_agcount, -VAR_2->t_agcount_delta);
out_undo_dblocks:
 if (VAR_2->t_dblocks_delta)
  FUNC_7(&VAR_3->m_sb.sb_dblocks, -VAR_2->t_dblocks_delta);
out_undo_frextents:
 if (VAR_6)
  FUNC_7(&VAR_3->m_sb.sb_frextents, -VAR_6);
out_undo_ifree:
 FUNC_2(&VAR_3->m_sb_lock);
 if (VAR_8)
  FUNC_5(VAR_3, -VAR_8);
out_undo_icount:
 if (VAR_7)
  FUNC_4(VAR_3, -VAR_7);
out_undo_fdblocks:
 if (VAR_5)
  FUNC_3(VAR_3, -VAR_5, VAR_4);
out:
 FUNC_0(VAR_9 == 0);
 return;
}
