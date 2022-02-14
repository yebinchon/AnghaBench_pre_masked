
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_sb {int sb_meta_uuid; int sb_lsn; int sb_spino_align; int sb_features_log_incompat; int sb_features_incompat; int sb_features_ro_compat; int sb_features_compat; int sb_bad_features2; int sb_features2; int sb_logsunit; int sb_logsectsize; int sb_logsectlog; int sb_dirblklog; int sb_width; int sb_unit; int sb_inoalignmt; int sb_shared_vn; int sb_flags; int sb_frextents; int sb_fdblocks; int sb_ifree; int sb_icount; int sb_imax_pct; int sb_inprogress; int sb_rextslog; int sb_agblklog; int sb_inopblog; int sb_inodelog; int sb_sectlog; int sb_blocklog; int sb_fname; int sb_inopblock; int sb_inodesize; int sb_sectsize; int sb_versionnum; int sb_logblocks; int sb_rbmblocks; int sb_agcount; int sb_agblocks; int sb_rextsize; int sb_rsumino; int sb_rbmino; int sb_rootino; int sb_logstart; int sb_uuid; int sb_rextents; int sb_rblocks; int sb_dblocks; int sb_blocksize; int sb_magicnum; } ;
struct xfs_dsb {int sb_meta_uuid; void* sb_lsn; void* sb_spino_align; void* sb_features_log_incompat; void* sb_features_incompat; void* sb_features_ro_compat; void* sb_features_compat; void* sb_bad_features2; void* sb_features2; void* sb_logsunit; void* sb_logsectsize; int sb_logsectlog; int sb_dirblklog; void* sb_width; void* sb_unit; void* sb_inoalignmt; int sb_shared_vn; int sb_flags; void* sb_frextents; void* sb_fdblocks; void* sb_ifree; void* sb_icount; int sb_imax_pct; int sb_inprogress; int sb_rextslog; int sb_agblklog; int sb_inopblog; int sb_inodelog; int sb_sectlog; int sb_blocklog; int sb_fname; void* sb_inopblock; void* sb_inodesize; void* sb_sectsize; void* sb_versionnum; void* sb_logblocks; void* sb_rbmblocks; void* sb_agcount; void* sb_agblocks; void* sb_rextsize; void* sb_rsumino; void* sb_rbmino; void* sb_rootino; void* sb_logstart; int sb_uuid; void* sb_rextents; void* sb_rblocks; void* sb_dblocks; void* sb_blocksize; void* sb_magicnum; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct xfs_dsb*,struct xfs_sb*) ;
 scalar_t__ FUNC_6 (struct xfs_sb*) ;
 scalar_t__ FUNC_7 (struct xfs_sb*) ;

void
FUNC_8(
 struct xfs_dsb *VAR_0,
 struct xfs_sb *VAR_1)
{
 FUNC_5(VAR_0, VAR_1);

 VAR_0->sb_magicnum = FUNC_1(VAR_1->sb_magicnum);
 VAR_0->sb_blocksize = FUNC_1(VAR_1->sb_blocksize);
 VAR_0->sb_dblocks = FUNC_2(VAR_1->sb_dblocks);
 VAR_0->sb_rblocks = FUNC_2(VAR_1->sb_rblocks);
 VAR_0->sb_rextents = FUNC_2(VAR_1->sb_rextents);
 FUNC_3(&VAR_0->sb_uuid, &VAR_1->sb_uuid, sizeof(VAR_0->sb_uuid));
 VAR_0->sb_logstart = FUNC_2(VAR_1->sb_logstart);
 VAR_0->sb_rootino = FUNC_2(VAR_1->sb_rootino);
 VAR_0->sb_rbmino = FUNC_2(VAR_1->sb_rbmino);
 VAR_0->sb_rsumino = FUNC_2(VAR_1->sb_rsumino);
 VAR_0->sb_rextsize = FUNC_1(VAR_1->sb_rextsize);
 VAR_0->sb_agblocks = FUNC_1(VAR_1->sb_agblocks);
 VAR_0->sb_agcount = FUNC_1(VAR_1->sb_agcount);
 VAR_0->sb_rbmblocks = FUNC_1(VAR_1->sb_rbmblocks);
 VAR_0->sb_logblocks = FUNC_1(VAR_1->sb_logblocks);
 VAR_0->sb_versionnum = FUNC_0(VAR_1->sb_versionnum);
 VAR_0->sb_sectsize = FUNC_0(VAR_1->sb_sectsize);
 VAR_0->sb_inodesize = FUNC_0(VAR_1->sb_inodesize);
 VAR_0->sb_inopblock = FUNC_0(VAR_1->sb_inopblock);
 FUNC_3(&VAR_0->sb_fname, &VAR_1->sb_fname, sizeof(VAR_0->sb_fname));
 VAR_0->sb_blocklog = VAR_1->sb_blocklog;
 VAR_0->sb_sectlog = VAR_1->sb_sectlog;
 VAR_0->sb_inodelog = VAR_1->sb_inodelog;
 VAR_0->sb_inopblog = VAR_1->sb_inopblog;
 VAR_0->sb_agblklog = VAR_1->sb_agblklog;
 VAR_0->sb_rextslog = VAR_1->sb_rextslog;
 VAR_0->sb_inprogress = VAR_1->sb_inprogress;
 VAR_0->sb_imax_pct = VAR_1->sb_imax_pct;
 VAR_0->sb_icount = FUNC_2(VAR_1->sb_icount);
 VAR_0->sb_ifree = FUNC_2(VAR_1->sb_ifree);
 VAR_0->sb_fdblocks = FUNC_2(VAR_1->sb_fdblocks);
 VAR_0->sb_frextents = FUNC_2(VAR_1->sb_frextents);

 VAR_0->sb_flags = VAR_1->sb_flags;
 VAR_0->sb_shared_vn = VAR_1->sb_shared_vn;
 VAR_0->sb_inoalignmt = FUNC_1(VAR_1->sb_inoalignmt);
 VAR_0->sb_unit = FUNC_1(VAR_1->sb_unit);
 VAR_0->sb_width = FUNC_1(VAR_1->sb_width);
 VAR_0->sb_dirblklog = VAR_1->sb_dirblklog;
 VAR_0->sb_logsectlog = VAR_1->sb_logsectlog;
 VAR_0->sb_logsectsize = FUNC_0(VAR_1->sb_logsectsize);
 VAR_0->sb_logsunit = FUNC_1(VAR_1->sb_logsunit);






 VAR_1->sb_bad_features2 = VAR_1->sb_features2;
 VAR_0->sb_features2 = FUNC_1(VAR_1->sb_features2);
 VAR_0->sb_bad_features2 = FUNC_1(VAR_1->sb_bad_features2);

 if (FUNC_6(VAR_1)) {
  VAR_0->sb_features_compat = FUNC_1(VAR_1->sb_features_compat);
  VAR_0->sb_features_ro_compat =
    FUNC_1(VAR_1->sb_features_ro_compat);
  VAR_0->sb_features_incompat =
    FUNC_1(VAR_1->sb_features_incompat);
  VAR_0->sb_features_log_incompat =
    FUNC_1(VAR_1->sb_features_log_incompat);
  VAR_0->sb_spino_align = FUNC_1(VAR_1->sb_spino_align);
  VAR_0->sb_lsn = FUNC_2(VAR_1->sb_lsn);
  if (FUNC_7(VAR_1))
   FUNC_4(&VAR_0->sb_meta_uuid, &VAR_1->sb_meta_uuid);
 }
}
