
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_fileoff_t ;
struct xfs_inode {int dummy; } ;
struct xfs_ifork {int dummy; } ;
struct xfs_iext_cursor {int dummy; } ;
struct xfs_bmbt_irec {int br_startoff; int br_blockcount; } ;


 scalar_t__ FUNC_0 (struct xfs_inode*,struct xfs_ifork*,int,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;
 int FUNC_1 (struct xfs_ifork*,struct xfs_iext_cursor*,struct xfs_bmbt_irec*) ;

bool
FUNC_2(
 struct xfs_inode *VAR_0,
 struct xfs_ifork *VAR_1,
 xfs_fileoff_t *VAR_2,
 struct xfs_iext_cursor *VAR_3,
 struct xfs_bmbt_irec *VAR_4)
{

 if (FUNC_0(VAR_0, VAR_1, *VAR_2 - 1, VAR_3, VAR_4) &&
     VAR_4->br_startoff <= *VAR_2 - 1)
  return 1;
 if (!FUNC_1(VAR_1, VAR_3, VAR_4))
  return 0;
 *VAR_2 = VAR_4->br_startoff + VAR_4->br_blockcount;
 return 1;
}
