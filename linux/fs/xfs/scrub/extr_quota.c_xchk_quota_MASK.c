
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct xfs_scrub {scalar_t__ ilock_flags; int ip; TYPE_1__* sm; struct xfs_mount* mp; } ;
struct xfs_quotainfo {int qi_dqperchunk; } ;
struct xfs_mount {struct xfs_quotainfo* m_quotainfo; } ;
struct xchk_quota_info {int last_id; struct xfs_scrub* sc; } ;
struct TYPE_2__ {int sm_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xfs_scrub*,int ,int,int*) ;
 int FUNC_1 (struct xfs_scrub*) ;
 int VAR_3 ;
 int FUNC_2 (struct xfs_scrub*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (struct xfs_mount*,int ,int ,struct xchk_quota_info*) ;

int
FUNC_6(
 struct xfs_scrub *VAR_4)
{
 struct xchk_quota_info VAR_5;
 struct xfs_mount *VAR_6 = VAR_4->mp;
 struct xfs_quotainfo *VAR_7 = VAR_6->m_quotainfo;
 uint VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_2(VAR_4);


 VAR_9 = FUNC_1(VAR_4);
 if (VAR_9)
  goto out;
 if (VAR_4->sm->sm_flags & VAR_2)
  goto out;






 FUNC_4(VAR_4->ip, VAR_4->ilock_flags);
 VAR_4->ilock_flags = 0;
 VAR_5.sc = VAR_4;
 VAR_5.last_id = 0;
 VAR_9 = FUNC_5(VAR_6, VAR_8, VAR_3, &VAR_5);
 VAR_4->ilock_flags = VAR_1;
 FUNC_3(VAR_4->ip, VAR_4->ilock_flags);
 if (!FUNC_0(VAR_4, VAR_0,
   VAR_5.last_id * VAR_7->qi_dqperchunk, &VAR_9))
  goto out;

out:
 return VAR_9;
}
