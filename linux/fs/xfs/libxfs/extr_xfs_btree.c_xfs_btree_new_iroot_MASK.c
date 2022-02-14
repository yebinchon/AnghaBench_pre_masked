
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union xfs_btree_ptr {int dummy; } xfs_btree_ptr ;
typedef union xfs_btree_key {int dummy; } xfs_btree_key ;
struct xfs_buf {int b_bn; } ;
struct TYPE_11__ {int whichfork; int ip; } ;
struct TYPE_12__ {TYPE_5__ b; } ;
struct xfs_btree_cur {int bc_flags; int bc_nlevels; int* bc_ptrs; TYPE_6__ bc_private; TYPE_1__* bc_ops; } ;
struct TYPE_9__ {void* bb_blkno; } ;
struct TYPE_8__ {void* bb_blkno; } ;
struct TYPE_10__ {TYPE_3__ s; TYPE_2__ l; } ;
struct xfs_btree_block {int bb_numrecs; int bb_level; TYPE_4__ bb_u; } ;
struct TYPE_7__ {int (* alloc_block ) (struct xfs_btree_cur*,union xfs_btree_ptr*,union xfs_btree_ptr*,int*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct xfs_btree_cur*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct xfs_btree_block*,struct xfs_btree_block*,int ) ;
 int VAR_6 ;
 int FUNC_6 (struct xfs_btree_cur*,union xfs_btree_ptr*,union xfs_btree_ptr*,int*) ;
 int FUNC_7 (struct xfs_btree_cur*) ;
 int FUNC_8 (struct xfs_btree_cur*,union xfs_btree_key*,union xfs_btree_key*,int) ;
 int FUNC_9 (struct xfs_btree_cur*,union xfs_btree_ptr*,union xfs_btree_ptr*,int) ;
 int FUNC_10 (struct xfs_btree_cur*,union xfs_btree_ptr*,int,int) ;
 int FUNC_11 (struct xfs_btree_cur*,union xfs_btree_ptr*,struct xfs_btree_block**,struct xfs_buf**) ;
 struct xfs_btree_block* FUNC_12 (struct xfs_btree_cur*) ;
 int FUNC_13 (struct xfs_btree_block*) ;
 union xfs_btree_key* FUNC_14 (struct xfs_btree_cur*,int,struct xfs_btree_block*) ;
 int FUNC_15 (struct xfs_btree_cur*,struct xfs_buf*,int ) ;
 int FUNC_16 (struct xfs_btree_cur*,struct xfs_buf*,int,int) ;
 int FUNC_17 (struct xfs_btree_cur*,struct xfs_buf*,int,int) ;
 union xfs_btree_ptr* FUNC_18 (struct xfs_btree_cur*,int,struct xfs_btree_block*) ;
 int FUNC_19 (struct xfs_btree_block*,int) ;
 int FUNC_20 (struct xfs_btree_cur*,int,struct xfs_buf*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int,int ) ;

int
FUNC_23(
 struct xfs_btree_cur *VAR_7,
 int *VAR_8,
 int *VAR_9)
{
 struct xfs_buf *VAR_10;
 struct xfs_btree_block *VAR_11;
 struct xfs_btree_block *VAR_12;
 union xfs_btree_key *VAR_13;
 union xfs_btree_ptr *VAR_14;
 union xfs_btree_key *VAR_15;
 union xfs_btree_ptr *VAR_16;
 union xfs_btree_ptr VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;

 FUNC_1(VAR_7, VAR_6);

 FUNC_0(VAR_7->bc_flags & VAR_3);

 VAR_18 = VAR_7->bc_nlevels - 1;

 VAR_11 = FUNC_12(VAR_7);
 VAR_16 = FUNC_18(VAR_7, 1, VAR_11);


 VAR_19 = VAR_7->bc_ops->alloc_block(VAR_7, VAR_16, &VAR_17, VAR_9);
 if (VAR_19)
  goto error0;
 if (*VAR_9 == 0)
  return 0;

 FUNC_1(VAR_7, VAR_5);


 VAR_19 = FUNC_11(VAR_7, &VAR_17, &VAR_12, &VAR_10);
 if (VAR_19)
  goto error0;





 FUNC_5(VAR_12, VAR_11, FUNC_7(VAR_7));
 if (VAR_7->bc_flags & VAR_1) {
  if (VAR_7->bc_flags & VAR_2)
   VAR_12->bb_u.l.bb_blkno = FUNC_4(VAR_10->b_bn);
  else
   VAR_12->bb_u.s.bb_blkno = FUNC_4(VAR_10->b_bn);
 }

 FUNC_2(&VAR_11->bb_level, 1);
 FUNC_19(VAR_11, 1);
 VAR_7->bc_nlevels++;
 VAR_7->bc_ptrs[VAR_18 + 1] = 1;

 VAR_15 = FUNC_14(VAR_7, 1, VAR_11);
 VAR_13 = FUNC_14(VAR_7, 1, VAR_12);
 FUNC_8(VAR_7, VAR_13, VAR_15, FUNC_13(VAR_12));

 VAR_14 = FUNC_18(VAR_7, 1, VAR_12);
 for (VAR_20 = 0; VAR_20 < FUNC_3(VAR_12->bb_numrecs); VAR_20++) {
  VAR_19 = FUNC_10(VAR_7, VAR_16, VAR_20, VAR_18);
  if (VAR_19)
   goto error0;
 }

 FUNC_9(VAR_7, VAR_14, VAR_16, FUNC_13(VAR_12));

 VAR_19 = FUNC_10(VAR_7, &VAR_17, 0, VAR_18);
 if (VAR_19)
  goto error0;

 FUNC_9(VAR_7, VAR_16, &VAR_17, 1);

 FUNC_22(VAR_7->bc_private.b.ip,
     1 - FUNC_13(VAR_12),
     VAR_7->bc_private.b.whichfork);

 FUNC_20(VAR_7, VAR_18, VAR_10);





 FUNC_15(VAR_7, VAR_10, VAR_0);
 FUNC_16(VAR_7, VAR_10, 1, FUNC_3(VAR_12->bb_numrecs));
 FUNC_17(VAR_7, VAR_10, 1, FUNC_3(VAR_12->bb_numrecs));

 *VAR_8 |=
  VAR_4 | FUNC_21(VAR_7->bc_private.b.whichfork);
 *VAR_9 = 1;
 return 0;
error0:
 return VAR_19;
}
