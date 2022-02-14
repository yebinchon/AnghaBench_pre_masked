
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_inode {int dummy; } ;
struct xfs_ifork {int dummy; } ;
struct xfs_iext_cursor {scalar_t__ pos; int leaf; } ;
struct xfs_bmbt_irec {scalar_t__ br_startoff; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_iext_cursor*) ;
 int FUNC_1 (struct xfs_inode*,struct xfs_iext_cursor*,int,int ) ;
 int FUNC_2 (struct xfs_inode*,struct xfs_iext_cursor*,int,int ) ;
 int FUNC_3 (struct xfs_bmbt_irec*,int ) ;
 int FUNC_4 (struct xfs_ifork*) ;
 int FUNC_5 (int ,struct xfs_bmbt_irec*) ;
 struct xfs_ifork* FUNC_6 (struct xfs_inode*,int) ;
 int FUNC_7 (struct xfs_ifork*,scalar_t__,scalar_t__,int,int ) ;

void
FUNC_8(
 struct xfs_inode *VAR_1,
 int VAR_2,
 struct xfs_iext_cursor *VAR_3,
 struct xfs_bmbt_irec *VAR_4)
{
 struct xfs_ifork *VAR_5 = FUNC_6(VAR_1, VAR_2);

 FUNC_4(VAR_5);

 if (VAR_3->pos == 0) {
  struct xfs_bmbt_irec VAR_6;

  FUNC_3(&VAR_6, FUNC_0(VAR_3));
  if (VAR_4->br_startoff != VAR_6.br_startoff) {
   FUNC_7(VAR_5, VAR_6.br_startoff,
     VAR_4->br_startoff, 1, VAR_3->leaf);
  }
 }

 FUNC_2(VAR_1, VAR_3, VAR_2, VAR_0);
 FUNC_5(FUNC_0(VAR_3), VAR_4);
 FUNC_1(VAR_1, VAR_3, VAR_2, VAR_0);
}
