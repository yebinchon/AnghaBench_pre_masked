
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_15__ ;


struct TYPE_27__ {TYPE_1__* d_ops; } ;
typedef TYPE_2__ xfs_inode_t ;
struct TYPE_28__ {int bestcount; } ;
typedef TYPE_3__ xfs_dir2_leaf_tail_t ;
typedef int xfs_dir2_leaf_t ;
struct xfs_dir2_leaf_entry {int address; } ;
typedef struct xfs_dir2_leaf_entry xfs_dir2_leaf_entry_t ;
typedef size_t xfs_dir2_db_t ;
typedef scalar_t__ xfs_dir2_data_off_t ;
typedef int xfs_dir2_data_hdr_t ;
struct TYPE_29__ {int namelen; } ;
typedef TYPE_4__ xfs_dir2_data_entry_t ;
typedef int xfs_dir2_data_aoff_t ;
struct TYPE_30__ {scalar_t__ total; TYPE_15__* geo; TYPE_2__* dp; } ;
typedef TYPE_5__ xfs_da_args_t ;
struct xfs_dir3_icleaf_hdr {int stale; } ;
struct xfs_dir2_data_free {scalar_t__ length; } ;
struct xfs_buf {int * b_addr; } ;
typedef scalar_t__ __be16 ;
struct TYPE_26__ {scalar_t__ data_entry_offset; int (* leaf_hdr_to_disk ) (int *,struct xfs_dir3_icleaf_hdr*) ;int (* data_entsize ) (int ) ;struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (int *) ;int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,int *) ;struct xfs_dir2_data_free* (* data_bestfree_p ) (int *) ;} ;
struct TYPE_25__ {scalar_t__ blksize; size_t datablk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,size_t) ;
 struct xfs_dir2_data_free* FUNC_7 (int *) ;
 int FUNC_8 (struct xfs_dir3_icleaf_hdr*,int *) ;
 struct xfs_dir2_leaf_entry* FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,struct xfs_dir3_icleaf_hdr*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_2__*,int *,int*) ;
 int FUNC_14 (TYPE_5__*,struct xfs_buf*) ;
 int FUNC_15 (TYPE_5__*,struct xfs_buf*,int ,int ,int*,int*) ;
 size_t FUNC_16 (TYPE_15__*,int) ;
 int FUNC_17 (TYPE_15__*,int) ;
 scalar_t__* FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_5__*,struct xfs_buf**,int*,struct xfs_buf**) ;
 TYPE_3__* FUNC_20 (TYPE_15__*,int *) ;
 int FUNC_21 (TYPE_5__*,struct xfs_buf*,struct xfs_buf*) ;
 int FUNC_22 (TYPE_5__*,size_t,struct xfs_buf*) ;
 int FUNC_23 (TYPE_2__*,struct xfs_buf*) ;
 int FUNC_24 (TYPE_2__*,struct xfs_buf*) ;
 int FUNC_25 (TYPE_5__*,struct xfs_buf*,size_t,int) ;
 int FUNC_26 (TYPE_5__*,struct xfs_buf*,int,int) ;
 int FUNC_27 (TYPE_5__*,struct xfs_buf*) ;
 int FUNC_28 (TYPE_5__*,struct xfs_buf*) ;

int
FUNC_29(
 xfs_da_args_t *VAR_4)
{
 __be16 *VAR_5;
 xfs_dir2_data_hdr_t *VAR_6;
 xfs_dir2_db_t VAR_7;
 struct xfs_buf *VAR_8;
 xfs_dir2_data_entry_t *VAR_9;
 xfs_inode_t *VAR_10;
 int VAR_11;
 xfs_dir2_db_t VAR_12;
 int VAR_13;
 struct xfs_buf *VAR_14;
 xfs_dir2_leaf_t *VAR_15;
 xfs_dir2_leaf_entry_t *VAR_16;
 xfs_dir2_leaf_tail_t *VAR_17;
 int VAR_18;
 int VAR_19;
 xfs_dir2_data_off_t VAR_20;
 struct xfs_dir2_data_free *VAR_21;
 struct xfs_dir2_leaf_entry *VAR_22;
 struct xfs_dir3_icleaf_hdr VAR_23;

 FUNC_12(VAR_4);




 if ((VAR_11 = FUNC_19(VAR_4, &VAR_14, &VAR_13, &VAR_8))) {
  return VAR_11;
 }
 VAR_10 = VAR_4->dp;
 VAR_15 = VAR_14->b_addr;
 VAR_6 = VAR_8->b_addr;
 FUNC_23(VAR_10, VAR_8);
 VAR_21 = VAR_10->d_ops->data_bestfree_p(VAR_6);
 VAR_10->d_ops->leaf_hdr_from_disk(&VAR_23, VAR_15);
 VAR_22 = VAR_10->d_ops->leaf_ents_p(VAR_15);



 VAR_16 = &VAR_22[VAR_13];
 VAR_7 = FUNC_16(VAR_4->geo, FUNC_3(VAR_16->address));
 VAR_9 = (xfs_dir2_data_entry_t *)((char *)VAR_6 +
  FUNC_17(VAR_4->geo, FUNC_3(VAR_16->address)));
 VAR_19 = VAR_18 = 0;
 VAR_20 = FUNC_1(VAR_21[0].length);
 VAR_17 = FUNC_20(VAR_4->geo, VAR_15);
 VAR_5 = FUNC_18(VAR_17);
 if (FUNC_1(VAR_5[VAR_7]) != VAR_20)
  return -VAR_0;



 FUNC_15(VAR_4, VAR_8,
  (xfs_dir2_data_aoff_t)((char *)VAR_9 - (char *)VAR_6),
  VAR_10->d_ops->data_entsize(VAR_9->namelen), &VAR_18, &VAR_19);



 VAR_23.stale++;
 VAR_10->d_ops->leaf_hdr_to_disk(VAR_15, &VAR_23);
 FUNC_27(VAR_4, VAR_14);

 VAR_16->address = FUNC_5(VAR_3);
 FUNC_26(VAR_4, VAR_14, VAR_13, VAR_13);





 if (VAR_19)
  FUNC_13(VAR_10, VAR_6, &VAR_18);
 if (VAR_18)
  FUNC_14(VAR_4, VAR_8);




 if (FUNC_1(VAR_21[0].length) != VAR_20) {
  VAR_5[VAR_7] = VAR_21[0].length;
  FUNC_25(VAR_4, VAR_14, VAR_7, VAR_7);
 }
 FUNC_23(VAR_10, VAR_8);



 if (FUNC_1(VAR_21[0].length) ==
   VAR_4->geo->blksize - VAR_10->d_ops->data_entry_offset) {
  FUNC_0(VAR_7 != VAR_4->geo->datablk);
  if ((VAR_11 = FUNC_22(VAR_4, VAR_7, VAR_8))) {






   if (VAR_11 == -VAR_1 && VAR_4->total == 0)
    VAR_11 = 0;
   FUNC_24(VAR_10, VAR_14);
   return VAR_11;
  }
  VAR_8 = ((void*)0);




  if (VAR_7 == FUNC_3(VAR_17->bestcount) - 1) {



   for (VAR_12 = VAR_7 - 1; VAR_12 > 0; VAR_12--) {
    if (VAR_5[VAR_12] != FUNC_4(VAR_2))
     break;
   }




   FUNC_6(&VAR_5[VAR_7 - VAR_12], VAR_5,
    (FUNC_3(VAR_17->bestcount) - (VAR_7 - VAR_12)) * sizeof(*VAR_5));
   FUNC_2(&VAR_17->bestcount, -(VAR_7 - VAR_12));
   FUNC_28(VAR_4, VAR_14);
   FUNC_25(VAR_4, VAR_14, 0,
      FUNC_3(VAR_17->bestcount) - 1);
  } else
   VAR_5[VAR_7] = FUNC_4(VAR_2);
 }



 else if (VAR_7 != VAR_4->geo->datablk)
  VAR_8 = ((void*)0);

 FUNC_24(VAR_10, VAR_14);



 return FUNC_21(VAR_4, VAR_14, VAR_8);
}
