
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union xfs_btree_rec {int dummy; } xfs_btree_rec ;
typedef union xfs_btree_ptr {int dummy; } xfs_btree_ptr ;
typedef union xfs_btree_key {int dummy; } xfs_btree_key ;
struct xfs_btree_cur {int bc_nlevels; TYPE_1__* bc_ops; int bc_mp; } ;
struct TYPE_2__ {int (* update_cursor ) (struct xfs_btree_cur*,struct xfs_btree_cur*) ;int (* init_key_from_rec ) (union xfs_btree_key*,union xfs_btree_rec*) ;int (* init_rec_from_cur ) (struct xfs_btree_cur*,union xfs_btree_rec*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct xfs_btree_cur*,union xfs_btree_rec*) ;
 int FUNC_2 (union xfs_btree_key*,union xfs_btree_rec*) ;
 int FUNC_3 (struct xfs_btree_cur*,struct xfs_btree_cur*) ;
 int FUNC_4 (struct xfs_btree_cur*,int ) ;
 int FUNC_5 (struct xfs_btree_cur*,int,union xfs_btree_ptr*,union xfs_btree_rec*,union xfs_btree_key*,struct xfs_btree_cur**,int*) ;
 scalar_t__ FUNC_6 (struct xfs_btree_cur*,union xfs_btree_ptr*) ;
 int FUNC_7 (struct xfs_btree_cur*,union xfs_btree_ptr*) ;

int
FUNC_8(
 struct xfs_btree_cur *VAR_3,
 int *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 union xfs_btree_ptr VAR_8;
 struct xfs_btree_cur *VAR_9;
 struct xfs_btree_cur *VAR_10;
 union xfs_btree_key VAR_11;
 union xfs_btree_key *VAR_12;
 union xfs_btree_rec VAR_13;

 VAR_7 = 0;
 VAR_9 = ((void*)0);
 VAR_10 = VAR_3;
 VAR_12 = &VAR_11;

 FUNC_7(VAR_3, &VAR_8);


 VAR_3->bc_ops->init_rec_from_cur(VAR_3, &VAR_13);
 VAR_3->bc_ops->init_key_from_rec(VAR_12, &VAR_13);






 do {




  VAR_5 = FUNC_5(VAR_10, VAR_7, &VAR_8, &VAR_13, VAR_12,
    &VAR_9, &VAR_6);
  if (VAR_5) {
   if (VAR_10 != VAR_3)
    FUNC_4(VAR_10, VAR_0);
   goto error0;
  }

  FUNC_0(VAR_3->bc_mp, VAR_6 == 1, VAR_2);
  VAR_7++;






  if (VAR_10 != VAR_3 &&
      (VAR_9 || FUNC_6(VAR_3, &VAR_8))) {

   if (VAR_3->bc_ops->update_cursor)
    VAR_3->bc_ops->update_cursor(VAR_10, VAR_3);
   VAR_3->bc_nlevels = VAR_10->bc_nlevels;
   FUNC_4(VAR_10, VAR_1);
  }

  if (VAR_9) {
   VAR_10 = VAR_9;
   VAR_9 = ((void*)0);
  }
 } while (!FUNC_6(VAR_3, &VAR_8));

 *VAR_4 = VAR_6;
 return 0;
error0:
 return VAR_5;
}
