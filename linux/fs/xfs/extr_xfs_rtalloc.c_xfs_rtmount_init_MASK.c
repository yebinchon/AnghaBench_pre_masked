
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_suminfo_t ;
typedef scalar_t__ xfs_daddr_t ;
typedef int uint ;
struct xfs_sb {scalar_t__ sb_rblocks; int sb_rextslog; int sb_rbmblocks; int sb_blocksize; } ;
struct xfs_mount {int m_rsumlevels; int m_rsumsize; int * m_rtdev_targp; struct xfs_sb m_sb; int * m_rsumip; int m_rbmip; } ;
struct xfs_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct xfs_mount*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct xfs_mount*,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *,scalar_t__,scalar_t__,int ,struct xfs_buf**,int *) ;
 int FUNC_4 (struct xfs_buf*) ;
 int FUNC_5 (struct xfs_mount*,char*,...) ;

int
FUNC_6(
 struct xfs_mount *VAR_2)
{
 struct xfs_buf *VAR_3;
 struct xfs_sb *VAR_4;
 xfs_daddr_t VAR_5;
 int VAR_6;

 VAR_4 = &VAR_2->m_sb;
 if (VAR_4->sb_rblocks == 0)
  return 0;
 if (VAR_2->m_rtdev_targp == ((void*)0)) {
  FUNC_5(VAR_2,
 "Filesystem has a realtime volume, use rtdev=device option");
  return -VAR_1;
 }
 VAR_2->m_rsumlevels = VAR_4->sb_rextslog + 1;
 VAR_2->m_rsumsize =
  (uint)sizeof(xfs_suminfo_t) * VAR_2->m_rsumlevels *
  VAR_4->sb_rbmblocks;
 VAR_2->m_rsumsize = FUNC_2(VAR_2->m_rsumsize, VAR_4->sb_blocksize);
 VAR_2->m_rbmip = *(VAR_2->m_rsumip = ((void*)0));



 VAR_5 = (xfs_daddr_t)FUNC_1(VAR_2, VAR_2->m_sb.sb_rblocks);
 if (FUNC_0(VAR_2, VAR_5) != VAR_2->m_sb.sb_rblocks) {
  FUNC_5(VAR_2, "realtime mount -- %llu != %llu",
   (unsigned long long) FUNC_0(VAR_2, VAR_5),
   (unsigned long long) VAR_2->m_sb.sb_rblocks);
  return -VAR_0;
 }
 VAR_6 = FUNC_3(VAR_2->m_rtdev_targp,
     VAR_5 - FUNC_1(VAR_2, 1),
     FUNC_1(VAR_2, 1), 0, &VAR_3, ((void*)0));
 if (VAR_6) {
  FUNC_5(VAR_2, "realtime device size check failed");
  return VAR_6;
 }
 FUNC_4(VAR_3);
 return 0;
}
