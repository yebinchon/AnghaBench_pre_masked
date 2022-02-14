
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_btree_visit_blocks_fn ;
typedef union xfs_btree_ptr {int dummy; } xfs_btree_ptr ;
struct xfs_btree_cur {int bc_nlevels; TYPE_1__* bc_ops; } ;
struct xfs_btree_block {int dummy; } ;
struct TYPE_2__ {int (* init_ptr_from_cur ) (struct xfs_btree_cur*,union xfs_btree_ptr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_btree_cur*,union xfs_btree_ptr*) ;
 int FUNC_1 (struct xfs_btree_cur*,union xfs_btree_ptr*,union xfs_btree_ptr*,int) ;
 int FUNC_2 (struct xfs_btree_cur*,int,union xfs_btree_ptr*,struct xfs_btree_block**) ;
 union xfs_btree_ptr* FUNC_3 (struct xfs_btree_cur*,int,struct xfs_btree_block*) ;
 int FUNC_4 (struct xfs_btree_cur*,union xfs_btree_ptr*,int) ;
 int FUNC_5 (struct xfs_btree_cur*,int,int ,void*) ;

int
FUNC_6(
 struct xfs_btree_cur *VAR_1,
 xfs_btree_visit_blocks_fn VAR_2,
 void *VAR_3)
{
 union xfs_btree_ptr VAR_4;
 int VAR_5;
 struct xfs_btree_block *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 VAR_1->bc_ops->init_ptr_from_cur(VAR_1, &VAR_4);


 for (VAR_5 = VAR_1->bc_nlevels - 1; VAR_5 >= 0; VAR_5--) {

  VAR_7 = FUNC_2(VAR_1, VAR_5, &VAR_4, &VAR_6);
  if (VAR_7)
   return VAR_7;


  if (VAR_5 > 0) {
   union xfs_btree_ptr *VAR_8;

   VAR_8 = FUNC_3(VAR_1, 1, VAR_6);
   FUNC_4(VAR_1, VAR_8, 1);


   FUNC_1(VAR_1, &VAR_4, VAR_8, 1);
  }


  do {
   VAR_7 = FUNC_5(VAR_1, VAR_5, VAR_2, VAR_3);
  } while (!VAR_7);

  if (VAR_7 != -VAR_0)
   return VAR_7;
 }

 return 0;
}
