
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_fileoff_t ;
struct xfs_inode {int dummy; } ;
struct TYPE_2__ {int * if_root; } ;
struct xfs_ifork {int if_height; int if_bytes; TYPE_1__ if_u1; } ;
struct xfs_iext_rec {int dummy; } ;
struct xfs_iext_leaf {struct xfs_iext_leaf* next; int * recs; } ;
struct xfs_iext_cursor {int pos; struct xfs_iext_leaf* leaf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfs_inode*,struct xfs_iext_cursor*,int,int ) ;
 int FUNC_2 (struct xfs_ifork*) ;
 int FUNC_3 (struct xfs_ifork*) ;
 int FUNC_4 (struct xfs_iext_leaf*,int ) ;
 int FUNC_5 (struct xfs_ifork*,struct xfs_iext_leaf*,int) ;
 int FUNC_6 (struct xfs_ifork*,struct xfs_iext_cursor*,struct xfs_iext_leaf*,int ,int) ;
 int FUNC_7 (int *) ;
 struct xfs_ifork* FUNC_8 (struct xfs_inode*,int) ;
 int FUNC_9 (struct xfs_ifork*,int ,int ,int,struct xfs_iext_leaf*) ;
 int FUNC_10 (struct xfs_ifork*,struct xfs_iext_cursor*) ;

void
FUNC_11(
 struct xfs_inode *VAR_2,
 struct xfs_iext_cursor *VAR_3,
 int VAR_4)
{
 struct xfs_ifork *VAR_5 = FUNC_8(VAR_2, VAR_4);
 struct xfs_iext_leaf *VAR_6 = VAR_3->leaf;
 xfs_fileoff_t VAR_7 = FUNC_4(VAR_6, 0);
 int VAR_8, VAR_9;

 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_1);

 FUNC_0(VAR_5->if_height > 0);
 FUNC_0(VAR_5->if_u1.if_root != ((void*)0));
 FUNC_0(FUNC_10(VAR_5, VAR_3));

 FUNC_3(VAR_5);

 VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_3->pos) - 1;
 for (VAR_8 = VAR_3->pos; VAR_8 < VAR_9; VAR_8++)
  VAR_6->recs[VAR_8] = VAR_6->recs[VAR_8 + 1];
 FUNC_7(&VAR_6->recs[VAR_9]);
 VAR_5->if_bytes -= sizeof(struct xfs_iext_rec);

 if (VAR_3->pos == 0 && VAR_9 > 0) {
  FUNC_9(VAR_5, VAR_7, FUNC_4(VAR_6, 0), 1,
    VAR_6);
  VAR_7 = FUNC_4(VAR_6, 0);
 } else if (VAR_3->pos == VAR_9) {
  if (VAR_5->if_height > 1 && VAR_6->next)
   VAR_3->leaf = VAR_6->next;
  else
   VAR_3->leaf = ((void*)0);
  VAR_3->pos = 0;
 }

 if (VAR_9 >= VAR_0 / 2)
  return;

 if (VAR_5->if_height > 1)
  FUNC_6(VAR_5, VAR_3, VAR_6, VAR_7, VAR_9);
 else if (VAR_9 == 0)
  FUNC_2(VAR_5);
}
