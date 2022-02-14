
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_quotainfo {int dummy; } ;
struct xfs_mount {struct xfs_quotainfo* m_quotainfo; } ;
struct xfs_disk_dquot {void* d_rtb_hardlimit; void* d_rtb_softlimit; void* d_ino_hardlimit; void* d_ino_softlimit; void* d_blk_hardlimit; void* d_blk_softlimit; int d_id; } ;
struct xfs_dquot {struct xfs_disk_dquot q_core; } ;
struct xfs_def_quota {scalar_t__ rtbhardlimit; scalar_t__ rtbsoftlimit; scalar_t__ ihardlimit; scalar_t__ isoftlimit; scalar_t__ bhardlimit; scalar_t__ bsoftlimit; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct xfs_dquot*) ;
 struct xfs_def_quota* FUNC_3 (struct xfs_dquot*,struct xfs_quotainfo*) ;

void
FUNC_4(
 struct xfs_mount *VAR_0,
 struct xfs_dquot *VAR_1)
{
 struct xfs_quotainfo *VAR_2 = VAR_0->m_quotainfo;
 struct xfs_disk_dquot *VAR_3 = &VAR_1->q_core;
 struct xfs_def_quota *VAR_4;
 int VAR_5 = 0;

 FUNC_0(VAR_3->d_id);
 VAR_4 = FUNC_3(VAR_1, VAR_2);

 if (VAR_4->bsoftlimit && !VAR_3->d_blk_softlimit) {
  VAR_3->d_blk_softlimit = FUNC_1(VAR_4->bsoftlimit);
  VAR_5 = 1;
 }
 if (VAR_4->bhardlimit && !VAR_3->d_blk_hardlimit) {
  VAR_3->d_blk_hardlimit = FUNC_1(VAR_4->bhardlimit);
  VAR_5 = 1;
 }
 if (VAR_4->isoftlimit && !VAR_3->d_ino_softlimit)
  VAR_3->d_ino_softlimit = FUNC_1(VAR_4->isoftlimit);
 if (VAR_4->ihardlimit && !VAR_3->d_ino_hardlimit)
  VAR_3->d_ino_hardlimit = FUNC_1(VAR_4->ihardlimit);
 if (VAR_4->rtbsoftlimit && !VAR_3->d_rtb_softlimit)
  VAR_3->d_rtb_softlimit = FUNC_1(VAR_4->rtbsoftlimit);
 if (VAR_4->rtbhardlimit && !VAR_3->d_rtb_hardlimit)
  VAR_3->d_rtb_hardlimit = FUNC_1(VAR_4->rtbhardlimit);

 if (VAR_5)
  FUNC_2(VAR_1);
}
