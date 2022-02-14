
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_scrub {int flags; } ;
struct xfs_inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_scrub*,struct xfs_inode*,int ) ;
 int FUNC_1 (struct xfs_scrub*,int ,int ) ;

int
FUNC_2(
 struct xfs_scrub *VAR_2,
 struct xfs_inode *VAR_3)
{
 int VAR_4;






 if (VAR_2->flags & VAR_1) {
  VAR_4 = FUNC_1(VAR_2, VAR_0, 0);
  if (VAR_4)
   return VAR_4;
 }

 return FUNC_0(VAR_2, VAR_3, 0);
}
