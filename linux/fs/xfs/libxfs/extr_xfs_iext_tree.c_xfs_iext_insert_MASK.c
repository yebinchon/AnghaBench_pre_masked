
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_fileoff_t ;
struct xfs_inode {int dummy; } ;
struct xfs_ifork {int if_height; int if_bytes; } ;
struct xfs_iext_rec {int dummy; } ;
struct xfs_iext_leaf {int * recs; } ;
struct xfs_iext_cursor {int pos; struct xfs_iext_leaf* leaf; } ;
struct xfs_bmbt_irec {int br_startoff; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xfs_iext_cursor*) ;
 int FUNC_2 (struct xfs_inode*,struct xfs_iext_cursor*,int,int ) ;
 int FUNC_3 (struct xfs_ifork*,struct xfs_iext_cursor*) ;
 int FUNC_4 (struct xfs_ifork*) ;
 int FUNC_5 (struct xfs_ifork*,int ,struct xfs_iext_leaf*,int) ;
 int FUNC_6 (struct xfs_iext_leaf*,int ) ;
 int FUNC_7 (struct xfs_ifork*,struct xfs_iext_leaf*,int) ;
 int FUNC_8 (struct xfs_ifork*,struct xfs_iext_cursor*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,struct xfs_bmbt_irec*) ;
 struct xfs_iext_leaf* FUNC_11 (struct xfs_iext_cursor*,int*) ;
 struct xfs_ifork* FUNC_12 (struct xfs_inode*,int) ;
 int FUNC_13 (struct xfs_ifork*,int ,int ,int,struct xfs_iext_leaf*) ;

void
FUNC_14(
 struct xfs_inode *VAR_2,
 struct xfs_iext_cursor *VAR_3,
 struct xfs_bmbt_irec *VAR_4,
 int VAR_5)
{
 struct xfs_ifork *VAR_6 = FUNC_12(VAR_2, VAR_5);
 xfs_fileoff_t VAR_7 = VAR_4->br_startoff;
 struct xfs_iext_leaf *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;

 FUNC_4(VAR_6);

 if (VAR_6->if_height == 0)
  FUNC_3(VAR_6, VAR_3);
 else if (VAR_6->if_height == 1)
  FUNC_8(VAR_6, VAR_3);

 VAR_9 = FUNC_7(VAR_6, VAR_3->leaf, VAR_3->pos);
 FUNC_0(VAR_9 <= VAR_0);
 FUNC_0(VAR_3->pos >= VAR_9 ||
        FUNC_9(FUNC_1(VAR_3), VAR_4->br_startoff) != 0);

 if (VAR_9 == VAR_0)
  VAR_8 = FUNC_11(VAR_3, &VAR_9);





 if (VAR_3->leaf != VAR_8 && VAR_3->pos == 0 && VAR_9 > 0) {
  FUNC_13(VAR_6, FUNC_6(VAR_3->leaf, 0),
    VAR_7, 1, VAR_3->leaf);
 }

 for (VAR_10 = VAR_9; VAR_10 > VAR_3->pos; VAR_10--)
  VAR_3->leaf->recs[VAR_10] = VAR_3->leaf->recs[VAR_10 - 1];
 FUNC_10(FUNC_1(VAR_3), VAR_4);
 VAR_6->if_bytes += sizeof(struct xfs_iext_rec);

 FUNC_2(VAR_2, VAR_3, VAR_5, VAR_1);

 if (VAR_8)
  FUNC_5(VAR_6, FUNC_6(VAR_8, 0), VAR_8, 2);
}
