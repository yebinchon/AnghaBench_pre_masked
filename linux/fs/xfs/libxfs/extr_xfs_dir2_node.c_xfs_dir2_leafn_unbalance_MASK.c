
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int xfs_dir2_leaf_t ;
struct TYPE_19__ {TYPE_4__* args; } ;
typedef TYPE_2__ xfs_da_state_t ;
struct TYPE_20__ {scalar_t__ magic; TYPE_6__* bp; void* hashval; } ;
typedef TYPE_3__ xfs_da_state_blk_t ;
struct TYPE_21__ {struct xfs_inode* dp; } ;
typedef TYPE_4__ xfs_da_args_t ;
struct xfs_inode {TYPE_1__* d_ops; } ;
struct xfs_dir3_icleaf_hdr {int count; scalar_t__ stale; } ;
struct xfs_dir2_leaf_entry {int hashval; } ;
struct TYPE_22__ {int * b_addr; } ;
struct TYPE_18__ {int (* leaf_hdr_to_disk ) (int *,struct xfs_dir3_icleaf_hdr*) ;struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (int *) ;int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,int *) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_dir3_icleaf_hdr*,int *) ;
 int FUNC_3 (struct xfs_dir3_icleaf_hdr*,int *) ;
 struct xfs_dir2_leaf_entry* FUNC_4 (int *) ;
 struct xfs_dir2_leaf_entry* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct xfs_dir3_icleaf_hdr*) ;
 int FUNC_7 (int *,struct xfs_dir3_icleaf_hdr*) ;
 scalar_t__ FUNC_8 (struct xfs_inode*,TYPE_6__*,TYPE_6__*) ;
 int FUNC_9 (struct xfs_inode*,TYPE_6__*) ;
 int FUNC_10 (TYPE_4__*,struct xfs_dir3_icleaf_hdr*,TYPE_6__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_12 (TYPE_4__*,TYPE_6__*,struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf_entry*,int ,TYPE_6__*,struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf_entry*,int,int) ;

void
FUNC_13(
 xfs_da_state_t *VAR_1,
 xfs_da_state_blk_t *VAR_2,
 xfs_da_state_blk_t *VAR_3)
{
 xfs_da_args_t *VAR_4;
 xfs_dir2_leaf_t *VAR_5;
 xfs_dir2_leaf_t *VAR_6;
 struct xfs_dir3_icleaf_hdr VAR_7;
 struct xfs_dir3_icleaf_hdr VAR_8;
 struct xfs_dir2_leaf_entry *VAR_9;
 struct xfs_dir2_leaf_entry *VAR_10;
 struct xfs_inode *VAR_11 = VAR_1->args->dp;

 VAR_4 = VAR_1->args;
 FUNC_0(VAR_2->magic == VAR_0);
 FUNC_0(VAR_3->magic == VAR_0);
 VAR_5 = VAR_2->bp->b_addr;
 VAR_6 = VAR_3->bp->b_addr;

 VAR_11->d_ops->leaf_hdr_from_disk(&VAR_7, VAR_6);
 VAR_11->d_ops->leaf_hdr_from_disk(&VAR_8, VAR_5);
 VAR_9 = VAR_11->d_ops->leaf_ents_p(VAR_6);
 VAR_10 = VAR_11->d_ops->leaf_ents_p(VAR_5);





 if (VAR_8.stale)
  FUNC_10(VAR_4, &VAR_8, VAR_2->bp);
 if (VAR_7.stale)
  FUNC_10(VAR_4, &VAR_7, VAR_3->bp);




 VAR_2->hashval = FUNC_1(VAR_10[VAR_8.count - 1].hashval);
 if (FUNC_8(VAR_11, VAR_3->bp, VAR_2->bp))
  FUNC_12(VAR_4, VAR_2->bp, &VAR_8, VAR_10, 0,
     VAR_3->bp, &VAR_7, VAR_9, 0,
     VAR_8.count);
 else
  FUNC_12(VAR_4, VAR_2->bp, &VAR_8, VAR_10, 0,
     VAR_3->bp, &VAR_7, VAR_9,
     VAR_7.count, VAR_8.count);
 VAR_3->hashval = FUNC_1(VAR_9[VAR_7.count - 1].hashval);


 VAR_11->d_ops->leaf_hdr_to_disk(VAR_6, &VAR_7);
 VAR_11->d_ops->leaf_hdr_to_disk(VAR_5, &VAR_8);
 FUNC_11(VAR_4, VAR_3->bp);
 FUNC_11(VAR_4, VAR_2->bp);

 FUNC_9(VAR_11, VAR_3->bp);
 FUNC_9(VAR_11, VAR_2->bp);
}
