
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct xfs_scrub {int ilock_flags; struct xfs_inode* ip; TYPE_1__* sm; TYPE_2__* mp; } ;
struct xfs_inode {int dummy; } ;
struct TYPE_4__ {struct xfs_inode* m_rsumip; } ;
struct TYPE_3__ {int sm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xfs_scrub*) ;
 int FUNC_1 (struct xfs_scrub*) ;
 int FUNC_2 (struct xfs_inode*,int) ;
 int FUNC_3 (struct xfs_inode*,int) ;

int
FUNC_4(
 struct xfs_scrub *VAR_3)
{
 struct xfs_inode *VAR_4 = VAR_3->mp->m_rsumip;
 struct xfs_inode *VAR_5 = VAR_3->ip;
 uint VAR_6 = VAR_3->ilock_flags;
 int VAR_7 = 0;
 VAR_3->ip = VAR_4;
 VAR_3->ilock_flags = VAR_0 | VAR_1;
 FUNC_2(VAR_3->ip, VAR_3->ilock_flags);


 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7 || (VAR_3->sm->sm_flags & VAR_2))
  goto out;


 FUNC_1(VAR_3);
out:

 FUNC_3(VAR_3->ip, VAR_3->ilock_flags);
 VAR_3->ilock_flags = VAR_6;
 VAR_3->ip = VAR_5;
 return VAR_7;
}
