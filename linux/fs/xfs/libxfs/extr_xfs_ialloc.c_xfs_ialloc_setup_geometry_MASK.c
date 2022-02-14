
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef long long uint ;
struct xfs_sb {int sb_inopblog; int sb_blocksize; int sb_spino_align; int sb_imax_pct; int sb_dblocks; int sb_inodesize; scalar_t__ sb_inoalignmt; int sb_inopblock; scalar_t__ sb_agblklog; } ;
struct xfs_mount {int m_dalign; struct xfs_sb m_sb; } ;
struct xfs_ino_geometry {int* inobt_mxr; int* inobt_mnr; int ialloc_inos; int ialloc_blks; int ialloc_min_blks; int inode_cluster_size_raw; int blocks_per_cluster; int cluster_align; int inoalign_mask; int ialloc_align; void* cluster_align_inodes; void* inodes_per_cluster; int inode_cluster_size; void* maxicount; int inobt_maxlevels; scalar_t__ agino_log; } ;


 struct xfs_ino_geometry* FUNC_0 (struct xfs_mount*) ;
 scalar_t__ FUNC_1 (struct xfs_mount*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct xfs_mount*,int) ;
 void* FUNC_3 (struct xfs_mount*,int) ;
 int VAR_1 ;
 long long VAR_2 ;
 int VAR_3 ;
 long long FUNC_4 (struct xfs_mount*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_7 (int*,long long) ;
 void* FUNC_8 (struct xfs_mount*,int,int) ;
 scalar_t__ FUNC_9 (struct xfs_sb*) ;
 scalar_t__ FUNC_10 (struct xfs_sb*) ;

void
FUNC_11(
 struct xfs_mount *VAR_5)
{
 struct xfs_sb *VAR_6 = &VAR_5->m_sb;
 struct xfs_ino_geometry *VAR_7 = FUNC_0(VAR_5);
 uint64_t VAR_8;
 uint VAR_9;


 VAR_7->agino_log = VAR_6->sb_inopblog + VAR_6->sb_agblklog;
 VAR_7->inobt_mxr[0] = FUNC_8(VAR_5, VAR_6->sb_blocksize, 1);
 VAR_7->inobt_mxr[1] = FUNC_8(VAR_5, VAR_6->sb_blocksize, 0);
 VAR_7->inobt_mnr[0] = VAR_7->inobt_mxr[0] / 2;
 VAR_7->inobt_mnr[1] = VAR_7->inobt_mxr[1] / 2;

 VAR_7->ialloc_inos = FUNC_6(VAR_4, VAR_1,
   VAR_6->sb_inopblock);
 VAR_7->ialloc_blks = VAR_7->ialloc_inos >> VAR_6->sb_inopblog;

 if (VAR_6->sb_spino_align)
  VAR_7->ialloc_min_blks = VAR_6->sb_spino_align;
 else
  VAR_7->ialloc_min_blks = VAR_7->ialloc_blks;


 VAR_9 = (1LL << FUNC_4(VAR_5)) >> VAR_2;
 VAR_7->inobt_maxlevels = FUNC_7(VAR_7->inobt_mnr,
   VAR_9);







 if (VAR_6->sb_imax_pct && VAR_7->ialloc_blks) {




  VAR_8 = VAR_6->sb_dblocks * VAR_6->sb_imax_pct;
  FUNC_5(VAR_8, 100);
  FUNC_5(VAR_8, VAR_7->ialloc_blks);
  VAR_7->maxicount = FUNC_3(VAR_5,
    VAR_8 * VAR_7->ialloc_blks);
 } else {
  VAR_7->maxicount = 0;
 }
 VAR_7->inode_cluster_size_raw = VAR_3;
 if (FUNC_10(&VAR_5->m_sb)) {
  int VAR_10 = VAR_7->inode_cluster_size_raw;

  VAR_10 *= VAR_5->m_sb.sb_inodesize / VAR_0;
  if (VAR_5->m_sb.sb_inoalignmt >= FUNC_1(VAR_5, VAR_10))
   VAR_7->inode_cluster_size_raw = VAR_10;
 }


 if (VAR_7->inode_cluster_size_raw > VAR_5->m_sb.sb_blocksize)
  VAR_7->blocks_per_cluster = FUNC_1(VAR_5,
    VAR_7->inode_cluster_size_raw);
 else
  VAR_7->blocks_per_cluster = 1;
 VAR_7->inode_cluster_size = FUNC_2(VAR_5, VAR_7->blocks_per_cluster);
 VAR_7->inodes_per_cluster = FUNC_3(VAR_5, VAR_7->blocks_per_cluster);


 if (FUNC_9(&VAR_5->m_sb) &&
     VAR_5->m_sb.sb_inoalignmt >= VAR_7->blocks_per_cluster)
  VAR_7->cluster_align = VAR_5->m_sb.sb_inoalignmt;
 else
  VAR_7->cluster_align = 1;
 VAR_7->inoalign_mask = VAR_7->cluster_align - 1;
 VAR_7->cluster_align_inodes = FUNC_3(VAR_5, VAR_7->cluster_align);





 if (VAR_5->m_dalign && VAR_7->inoalign_mask &&
     !(VAR_5->m_dalign & VAR_7->inoalign_mask))
  VAR_7->ialloc_align = VAR_5->m_dalign;
 else
  VAR_7->ialloc_align = 0;
}
