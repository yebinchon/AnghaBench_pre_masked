
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct xfs_inode {int i_ino; } ;
struct xfs_bmbt_irec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_trans*,int ,int ,int,struct xfs_bmbt_irec*) ;
 scalar_t__ FUNC_1 (struct xfs_inode*) ;
 int FUNC_2 (struct xfs_mount*,int) ;

void
FUNC_3(
 struct xfs_mount *VAR_2,
 struct xfs_trans *VAR_3,
 struct xfs_inode *VAR_4,
 int VAR_5,
 struct xfs_bmbt_irec *VAR_6)
{
 if (!FUNC_2(VAR_2, VAR_5))
  return;

 FUNC_0(VAR_3, FUNC_1(VAR_4) ?
   VAR_1 : VAR_0, VAR_4->i_ino,
   VAR_5, VAR_6);
}
