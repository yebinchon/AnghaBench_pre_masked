
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_15__ ;


typedef int xfs_trans_t ;
struct TYPE_37__ {TYPE_1__* d_ops; } ;
typedef TYPE_2__ xfs_inode_t ;
struct TYPE_38__ {scalar_t__ bestcount; } ;
typedef TYPE_3__ xfs_dir2_leaf_tail_t ;
struct TYPE_39__ {scalar_t__ magic; } ;
typedef TYPE_4__ xfs_dir2_leaf_t ;
typedef int xfs_dir2_leaf_entry_t ;
typedef scalar_t__ xfs_dir2_db_t ;
typedef TYPE_4__ xfs_dir2_data_hdr_t ;
typedef int xfs_dir2_data_aoff_t ;
struct TYPE_40__ {int count; int stale; } ;
typedef TYPE_6__ xfs_dir2_block_tail_t ;
typedef int xfs_dablk_t ;
struct TYPE_41__ {TYPE_15__* geo; int * trans; TYPE_2__* dp; } ;
typedef TYPE_7__ xfs_da_args_t ;
struct xfs_dir3_icleaf_hdr {int count; int stale; } ;
struct xfs_dir2_leaf_entry {int dummy; } ;
struct xfs_dir2_data_free {int length; } ;
struct xfs_buf {int * b_ops; TYPE_4__* b_addr; } ;
typedef int __be16 ;
struct TYPE_36__ {int (* leaf_hdr_to_disk ) (TYPE_4__*,struct xfs_dir3_icleaf_hdr*) ;int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,TYPE_4__*) ;struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (TYPE_4__*) ;struct xfs_dir2_data_free* (* data_bestfree_p ) (TYPE_4__*) ;} ;
struct TYPE_35__ {int blksize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct xfs_dir2_leaf_entry*,int *,int) ;
 struct xfs_dir2_data_free* FUNC_4 (TYPE_4__*) ;
 struct xfs_dir2_leaf_entry* FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (struct xfs_dir3_icleaf_hdr*,TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,struct xfs_dir3_icleaf_hdr*) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*,int *) ;
 int * FUNC_10 (TYPE_6__*) ;
 TYPE_6__* FUNC_11 (TYPE_15__*,TYPE_4__*) ;
 scalar_t__ FUNC_12 (TYPE_15__*,int ) ;
 scalar_t__ FUNC_13 (TYPE_15__*,int ) ;
 int FUNC_14 (TYPE_2__*,TYPE_4__*,int*) ;
 int FUNC_15 (TYPE_7__*,struct xfs_buf*) ;
 int FUNC_16 (TYPE_7__*,struct xfs_buf*,int ,int ,int*,int*) ;
 int * FUNC_17 (TYPE_3__*) ;
 TYPE_3__* FUNC_18 (TYPE_15__*,TYPE_4__*) ;
 int VAR_6 ;
 int FUNC_19 (TYPE_2__*,struct xfs_buf*) ;
 int FUNC_20 (TYPE_2__*,struct xfs_buf*) ;
 int FUNC_21 (TYPE_7__*,scalar_t__,struct xfs_buf**,int ) ;
 int FUNC_22 (TYPE_7__*,struct xfs_buf*,int ,int ) ;
 int FUNC_23 (TYPE_7__*,struct xfs_buf*,int ,int) ;
 int FUNC_24 (TYPE_7__*,struct xfs_buf*) ;
 int FUNC_25 (int *,struct xfs_buf*,int ) ;

int
FUNC_26(
 xfs_da_args_t *VAR_7,
 struct xfs_buf *VAR_8)
{
 __be16 *VAR_9;
 xfs_dablk_t VAR_10;
 xfs_dir2_data_hdr_t *VAR_11;
 xfs_dir2_leaf_entry_t *VAR_12;
 xfs_dir2_block_tail_t *VAR_13;
 xfs_inode_t *VAR_14;
 int VAR_15;
 struct xfs_buf *VAR_16;
 xfs_dir2_db_t VAR_17;
 xfs_dir2_leaf_t *VAR_18;
 xfs_dir2_leaf_tail_t *VAR_19;
 int VAR_20;
 int VAR_21;
 xfs_trans_t *VAR_22;
 struct xfs_dir2_data_free *VAR_23;
 struct xfs_dir2_leaf_entry *VAR_24;
 struct xfs_dir3_icleaf_hdr VAR_25;

 FUNC_8(VAR_7);

 VAR_14 = VAR_7->dp;
 VAR_22 = VAR_7->trans;





 if ((VAR_15 = FUNC_9(VAR_7, &VAR_10))) {
  return VAR_15;
 }
 VAR_17 = FUNC_13(VAR_7->geo, VAR_10);
 FUNC_0(VAR_17 == FUNC_12(VAR_7->geo, VAR_4));



 VAR_15 = FUNC_21(VAR_7, VAR_17, &VAR_16, VAR_3);
 if (VAR_15)
  return VAR_15;

 VAR_18 = VAR_16->b_addr;
 VAR_11 = VAR_8->b_addr;
 FUNC_19(VAR_14, VAR_8);
 VAR_13 = FUNC_11(VAR_7->geo, VAR_11);
 VAR_12 = FUNC_10(VAR_13);
 VAR_23 = VAR_14->d_ops->data_bestfree_p(VAR_11);
 VAR_24 = VAR_14->d_ops->leaf_ents_p(VAR_18);




 VAR_14->d_ops->leaf_hdr_from_disk(&VAR_25, VAR_18);
 VAR_25.count = FUNC_1(VAR_13->count);
 VAR_25.stale = FUNC_1(VAR_13->stale);
 VAR_14->d_ops->leaf_hdr_to_disk(VAR_18, &VAR_25);
 FUNC_24(VAR_7, VAR_16);





 FUNC_3(VAR_24, VAR_12, FUNC_1(VAR_13->count) * sizeof(xfs_dir2_leaf_entry_t));
 FUNC_23(VAR_7, VAR_16, 0, VAR_25.count - 1);
 VAR_21 = 0;
 VAR_20 = 1;




 FUNC_16(VAR_7, VAR_8,
  (xfs_dir2_data_aoff_t)((char *)VAR_12 - (char *)VAR_11),
  (xfs_dir2_data_aoff_t)((char *)VAR_11 + VAR_7->geo->blksize -
           (char *)VAR_12),
  &VAR_20, &VAR_21);



 VAR_8->b_ops = &VAR_6;
 FUNC_25(VAR_22, VAR_8, VAR_0);
 if (VAR_11->magic == FUNC_2(VAR_1))
  VAR_11->magic = FUNC_2(VAR_2);
 else
  VAR_11->magic = FUNC_2(VAR_5);

 if (VAR_21)
  FUNC_14(VAR_14, VAR_11, &VAR_20);



 VAR_19 = FUNC_18(VAR_7->geo, VAR_18);
 VAR_19->bestcount = FUNC_2(1);
 VAR_9 = FUNC_17(VAR_19);
 VAR_9[0] = VAR_23[0].length;



 if (VAR_20)
  FUNC_15(VAR_7, VAR_8);
 FUNC_20(VAR_14, VAR_16);
 FUNC_19(VAR_14, VAR_8);
 FUNC_22(VAR_7, VAR_16, 0, 0);
 return 0;
}
