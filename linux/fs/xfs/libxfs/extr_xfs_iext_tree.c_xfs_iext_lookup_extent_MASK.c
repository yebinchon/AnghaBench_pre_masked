
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_fileoff_t ;
struct xfs_inode {int i_mount; } ;
struct xfs_ifork {int if_height; } ;
struct xfs_iext_rec {int dummy; } ;
struct xfs_iext_cursor {scalar_t__ pos; TYPE_1__* leaf; } ;
struct xfs_bmbt_irec {int dummy; } ;
struct TYPE_2__ {struct TYPE_2__* next; } ;


 int FUNC_0 (int ,int ) ;
 struct xfs_iext_rec* FUNC_1 (struct xfs_iext_cursor*) ;
 TYPE_1__* FUNC_2 (struct xfs_ifork*,int ,int) ;
 int FUNC_3 (struct xfs_bmbt_irec*,struct xfs_iext_rec*) ;
 scalar_t__ FUNC_4 (struct xfs_ifork*) ;
 scalar_t__ FUNC_5 (struct xfs_iext_rec*,int ) ;
 scalar_t__ FUNC_6 (struct xfs_iext_rec*) ;
 int FUNC_7 (struct xfs_ifork*,struct xfs_iext_cursor*) ;
 int VAR_0 ;

bool
FUNC_8(
 struct xfs_inode *VAR_1,
 struct xfs_ifork *VAR_2,
 xfs_fileoff_t VAR_3,
 struct xfs_iext_cursor *VAR_4,
 struct xfs_bmbt_irec *VAR_5)
{
 FUNC_0(VAR_1->i_mount, VAR_0);

 VAR_4->leaf = FUNC_2(VAR_2, VAR_3, 1);
 if (!VAR_4->leaf) {
  VAR_4->pos = 0;
  return 0;
 }

 for (VAR_4->pos = 0; VAR_4->pos < FUNC_4(VAR_2); VAR_4->pos++) {
  struct xfs_iext_rec *VAR_6 = FUNC_1(VAR_4);

  if (FUNC_6(VAR_6))
   break;
  if (FUNC_5(VAR_6, VAR_3) >= 0)
   goto found;
 }


 if (VAR_2->if_height == 1 || !VAR_4->leaf->next)
  return 0;
 VAR_4->leaf = VAR_4->leaf->next;
 VAR_4->pos = 0;
 if (!FUNC_7(VAR_2, VAR_4))
  return 0;
found:
 FUNC_3(VAR_5, FUNC_1(VAR_4));
 return 1;
}
