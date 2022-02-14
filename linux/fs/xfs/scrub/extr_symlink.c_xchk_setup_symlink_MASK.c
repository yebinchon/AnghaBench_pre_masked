
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_scrub {int buf; } ;
struct xfs_inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct xfs_scrub*,struct xfs_inode*,int ) ;

int
FUNC_2(
 struct xfs_scrub *VAR_2,
 struct xfs_inode *VAR_3)
{

 VAR_2->buf = FUNC_0(VAR_1 + 1, 0);
 if (!VAR_2->buf)
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_3, 0);
}
