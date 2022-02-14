
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_scrub {int flags; } ;
struct xfs_inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_scrub*,struct xfs_inode*,int) ;

int
FUNC_1(
 struct xfs_scrub *VAR_1,
 struct xfs_inode *VAR_2)
{
 return FUNC_0(VAR_1, VAR_2, VAR_1->flags & VAR_0);
}
