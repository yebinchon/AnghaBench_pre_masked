
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_15__ ;


typedef int xfs_trans_t ;
typedef int xfs_mount_t ;
struct TYPE_36__ {scalar_t__ di_size; } ;
struct TYPE_38__ {TYPE_2__* d_ops; TYPE_1__ i_d; int * i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef int xfs_dir2_sf_hdr_t ;
struct TYPE_39__ {int bestcount; } ;
typedef TYPE_4__ xfs_dir2_leaf_tail_t ;
struct TYPE_40__ {int magic; } ;
typedef TYPE_5__ xfs_dir2_leaf_t ;
struct xfs_dir2_leaf_entry {int address; } ;
typedef struct xfs_dir2_leaf_entry xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_db_t ;
struct TYPE_41__ {int length; int freetag; } ;
typedef TYPE_6__ xfs_dir2_data_unused_t ;
typedef TYPE_5__ xfs_dir2_data_hdr_t ;
struct TYPE_42__ {int count; scalar_t__ stale; } ;
typedef TYPE_8__ xfs_dir2_block_tail_t ;
struct TYPE_43__ {TYPE_15__* geo; int * trans; TYPE_3__* dp; } ;
typedef TYPE_9__ xfs_da_args_t ;
typedef int uint ;
struct xfs_dir3_icleaf_hdr {scalar_t__ magic; int count; int stale; } ;
struct xfs_buf {TYPE_5__* b_addr; } ;
typedef int __be16 ;
struct TYPE_37__ {int data_entry_offset; struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (TYPE_5__*) ;int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,TYPE_5__*) ;} ;
struct TYPE_35__ {scalar_t__ blksize; int leafblk; int datablk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct xfs_dir3_icleaf_hdr*,TYPE_5__*) ;
 struct xfs_dir2_leaf_entry* FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (TYPE_9__*,int ,struct xfs_buf*) ;
 struct xfs_dir2_leaf_entry* FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (int *,struct xfs_buf*,int ,int) ;
 int FUNC_11 (int *,struct xfs_buf*) ;
 int FUNC_12 (TYPE_3__*,TYPE_5__*,int *) ;
 TYPE_8__* FUNC_13 (TYPE_15__*,TYPE_5__*) ;
 int FUNC_14 (TYPE_9__*,struct xfs_buf*,int,int *) ;
 int FUNC_15 (TYPE_3__*,TYPE_5__*,int*) ;
 int FUNC_16 (TYPE_9__*,struct xfs_buf*) ;
 int FUNC_17 (TYPE_9__*,struct xfs_buf*,TYPE_6__*,int,int,int*,int*) ;
 int * FUNC_18 (TYPE_4__*) ;
 TYPE_4__* FUNC_19 (TYPE_15__*,TYPE_5__*) ;
 int FUNC_20 (TYPE_9__*,struct xfs_buf*,int ) ;
 int FUNC_21 (int *,int *,struct xfs_buf*,TYPE_3__*) ;
 int FUNC_22 (int *,TYPE_3__*,int ,int,struct xfs_buf**) ;

int
FUNC_23(
 xfs_da_args_t *VAR_6,
 struct xfs_buf *VAR_7,
 struct xfs_buf *VAR_8)
{
 __be16 *VAR_9;
 xfs_dir2_data_hdr_t *VAR_10;
 xfs_dir2_block_tail_t *VAR_11;
 xfs_inode_t *VAR_12;
 xfs_dir2_data_unused_t *VAR_13;
 int VAR_14;
 int VAR_15;
 xfs_dir2_leaf_t *VAR_16;
 xfs_dir2_leaf_entry_t *VAR_17;
 xfs_dir2_leaf_tail_t *VAR_18;
 xfs_mount_t *VAR_19;
 int VAR_20;
 int VAR_21;
 xfs_dir2_sf_hdr_t VAR_22;
 int VAR_23;
 __be16 *VAR_24;
 int VAR_25;
 xfs_trans_t *VAR_26;
 struct xfs_dir2_leaf_entry *VAR_27;
 struct xfs_dir3_icleaf_hdr VAR_28;

 FUNC_7(VAR_6);

 VAR_12 = VAR_6->dp;
 VAR_26 = VAR_6->trans;
 VAR_19 = VAR_12->i_mount;
 VAR_16 = VAR_7->b_addr;
 VAR_12->d_ops->leaf_hdr_from_disk(&VAR_28, VAR_16);
 VAR_27 = VAR_12->d_ops->leaf_ents_p(VAR_16);
 VAR_18 = FUNC_19(VAR_6->geo, VAR_16);

 FUNC_0(VAR_28.magic == VAR_2 ||
        VAR_28.magic == VAR_5);






 while (VAR_12->i_d.di_size > VAR_6->geo->blksize) {
  int VAR_29;

  VAR_29 = VAR_12->d_ops->data_entry_offset;
  VAR_9 = FUNC_18(VAR_18);
  if (FUNC_2(VAR_9[FUNC_3(VAR_18->bestcount) - 1]) ==
         VAR_6->geo->blksize - VAR_29) {
   if ((VAR_14 =
       FUNC_20(VAR_6, VAR_7,
        (xfs_dir2_db_t)(FUNC_3(VAR_18->bestcount) - 1))))
    return VAR_14;
  } else
   return 0;
 }



 if (!VAR_8) {
  VAR_14 = FUNC_22(VAR_26, VAR_12, VAR_6->geo->datablk, -1, &VAR_8);
  if (VAR_14)
   return VAR_14;
 }
 VAR_10 = VAR_8->b_addr;
 FUNC_0(VAR_10->magic == FUNC_4(VAR_1) ||
        VAR_10->magic == FUNC_4(VAR_4));




 VAR_23 = (uint)sizeof(xfs_dir2_block_tail_t) +
        (uint)sizeof(*VAR_17) * (VAR_28.count - VAR_28.stale);



 VAR_24 = (__be16 *)((char *)VAR_10 + VAR_6->geo->blksize) - 1;
 VAR_13 = (xfs_dir2_data_unused_t *)((char *)VAR_10 + FUNC_2(*VAR_24));



 if (FUNC_2(VAR_13->freetag) != VAR_0 ||
     FUNC_2(VAR_13->length) < VAR_23)
  return 0;




 FUNC_21(VAR_19, VAR_26, VAR_8, VAR_12);

 VAR_20 = 1;
 VAR_21 = 0;



 VAR_14 = FUNC_17(VAR_6, VAR_8, VAR_13,
   VAR_6->geo->blksize - VAR_23, VAR_23, &VAR_20, &VAR_21);
 if (VAR_14)
  return VAR_14;



 VAR_11 = FUNC_13(VAR_6->geo, VAR_10);
 VAR_11->count = FUNC_4(VAR_28.count - VAR_28.stale);
 VAR_11->stale = 0;
 FUNC_11(VAR_26, VAR_8);



 VAR_17 = FUNC_9(VAR_11);
 for (VAR_15 = VAR_25 = 0; VAR_15 < VAR_28.count; VAR_15++) {
  if (VAR_27[VAR_15].address == FUNC_4(VAR_3))
   continue;
  VAR_17[VAR_25++] = VAR_27[VAR_15];
 }
 FUNC_0(VAR_25 == FUNC_3(VAR_11->count));
 FUNC_10(VAR_26, VAR_8, 0, FUNC_3(VAR_11->count) - 1);



 if (VAR_21)
  FUNC_15(VAR_12, VAR_10, &VAR_20);
 if (VAR_20)
  FUNC_16(VAR_6, VAR_8);



 VAR_14 = FUNC_8(VAR_6, VAR_6->geo->leafblk, VAR_7);
 if (VAR_14)
  return VAR_14;




 VAR_23 = FUNC_12(VAR_12, VAR_10, &VAR_22);
 if (VAR_23 > FUNC_1(VAR_12))
  return 0;

 return FUNC_14(VAR_6, VAR_8, VAR_23, &VAR_22);
}
