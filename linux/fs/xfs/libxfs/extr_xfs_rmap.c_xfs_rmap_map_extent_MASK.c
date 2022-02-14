
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_trans {int t_mountp; } ;
struct xfs_inode {int i_ino; } ;
struct xfs_bmbt_irec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_trans*,int ,int ,int,struct xfs_bmbt_irec*) ;
 scalar_t__ FUNC_1 (struct xfs_inode*) ;
 int FUNC_2 (int ,int) ;

void
FUNC_3(
 struct xfs_trans *VAR_2,
 struct xfs_inode *VAR_3,
 int VAR_4,
 struct xfs_bmbt_irec *VAR_5)
{
 if (!FUNC_2(VAR_2->t_mountp, VAR_4))
  return;

 FUNC_0(VAR_2, FUNC_1(VAR_3) ?
   VAR_1 : VAR_0, VAR_3->i_ino,
   VAR_4, VAR_5);
}
