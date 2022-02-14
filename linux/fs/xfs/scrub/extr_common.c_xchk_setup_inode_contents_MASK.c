
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_scrub {int ilock_flags; int ip; } ;
struct xfs_inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xfs_scrub*,struct xfs_inode*) ;
 int FUNC_1 (struct xfs_scrub*,unsigned int) ;
 int FUNC_2 (int ,int) ;

int
FUNC_3(
 struct xfs_scrub *VAR_3,
 struct xfs_inode *VAR_4,
 unsigned int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;


 VAR_3->ilock_flags = VAR_1 | VAR_2;
 FUNC_2(VAR_3->ip, VAR_3->ilock_flags);
 VAR_6 = FUNC_1(VAR_3, VAR_5);
 if (VAR_6)
  goto out;
 VAR_3->ilock_flags |= VAR_0;
 FUNC_2(VAR_3->ip, VAR_0);

out:

 return VAR_6;
}
