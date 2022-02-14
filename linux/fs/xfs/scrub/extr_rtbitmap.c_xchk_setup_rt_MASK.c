
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_scrub {int ilock_flags; int ip; TYPE_1__* mp; } ;
struct xfs_inode {int dummy; } ;
struct TYPE_2__ {int m_rbmip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_scrub*,struct xfs_inode*) ;
 int FUNC_1 (int ,int) ;

int
FUNC_2(
 struct xfs_scrub *VAR_2,
 struct xfs_inode *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_2->ilock_flags = VAR_0 | VAR_1;
 VAR_2->ip = VAR_2->mp->m_rbmip;
 FUNC_1(VAR_2->ip, VAR_2->ilock_flags);

 return 0;
}
