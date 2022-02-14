
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_36__ {TYPE_1__* d_ops; } ;
typedef TYPE_2__ xfs_inode_t ;
struct TYPE_37__ {scalar_t__ address; scalar_t__ hashval; } ;
typedef TYPE_3__ xfs_dir2_leaf_entry_t ;
struct TYPE_38__ {int length; } ;
typedef TYPE_4__ xfs_dir2_data_unused_t ;
typedef int xfs_dir2_data_hdr_t ;
struct TYPE_39__ {int name; int namelen; int inumber; } ;
typedef TYPE_5__ xfs_dir2_data_entry_t ;
typedef scalar_t__ xfs_dir2_data_aoff_t ;
struct TYPE_40__ {scalar_t__ stale; scalar_t__ count; } ;
typedef TYPE_6__ xfs_dir2_block_tail_t ;
typedef int xfs_dahash_t ;
struct TYPE_41__ {int op_flags; scalar_t__ total; int hashval; int filetype; int namelen; int name; int inumber; int geo; int * trans; TYPE_2__* dp; } ;
typedef TYPE_7__ xfs_da_args_t ;
struct xfs_buf {int * b_addr; } ;
typedef int __be16 ;
struct TYPE_35__ {int (* data_entsize ) (int ) ;int * (* data_entry_tag_p ) (TYPE_5__*) ;int (* data_put_ftype ) (TYPE_5__*,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_5__*,int ) ;
 int * FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_7__*) ;
 int FUNC_15 (TYPE_7__*,struct xfs_buf*,int *,TYPE_6__*,TYPE_3__*,int*,int*,int*) ;
 TYPE_3__* FUNC_16 (TYPE_6__*) ;
 int FUNC_17 (int *,struct xfs_buf*,int,int) ;
 int FUNC_18 (int *,struct xfs_buf*) ;
 int FUNC_19 (TYPE_2__*,int *,TYPE_6__*,TYPE_3__*,int **,TYPE_4__**,TYPE_4__**,int*,int) ;
 TYPE_6__* FUNC_20 (int ,int *) ;
 int FUNC_21 (TYPE_7__*,struct xfs_buf*) ;
 int FUNC_22 (int) ;
 int FUNC_23 (TYPE_2__*,int *,int*) ;
 int FUNC_24 (TYPE_7__*,struct xfs_buf*,TYPE_5__*) ;
 int FUNC_25 (TYPE_7__*,struct xfs_buf*) ;
 int FUNC_26 (TYPE_7__*,struct xfs_buf*,TYPE_4__*,scalar_t__,scalar_t__,int*,int*) ;
 int FUNC_27 (TYPE_7__*) ;
 int FUNC_28 (int *,TYPE_2__*,struct xfs_buf**) ;
 int FUNC_29 (TYPE_2__*,struct xfs_buf*) ;
 int FUNC_30 (int *,struct xfs_buf*) ;

int
FUNC_31(
 xfs_da_args_t *VAR_3)
{
 xfs_dir2_data_hdr_t *VAR_4;
 xfs_dir2_leaf_entry_t *VAR_5;
 struct xfs_buf *VAR_6;
 xfs_dir2_block_tail_t *VAR_7;
 int VAR_8;
 xfs_dir2_data_entry_t *VAR_9;
 xfs_inode_t *VAR_10;
 xfs_dir2_data_unused_t *VAR_11;
 int VAR_12;
 xfs_dir2_data_unused_t *VAR_13=((void*)0);
 xfs_dahash_t VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17=0;
 int VAR_18=0;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22=0;
 int VAR_23;
 int VAR_24;
 __be16 *VAR_25;
 xfs_trans_t *VAR_26;

 FUNC_14(VAR_3);

 VAR_10 = VAR_3->dp;
 VAR_26 = VAR_3->trans;


 VAR_12 = FUNC_28(VAR_26, VAR_10, &VAR_6);
 if (VAR_12)
  return VAR_12;

 VAR_19 = VAR_10->d_ops->data_entsize(VAR_3->namelen);




 VAR_4 = VAR_6->b_addr;
 VAR_7 = FUNC_20(VAR_3->geo, VAR_4);
 VAR_5 = FUNC_16(VAR_7);





 FUNC_19(VAR_10, VAR_4, VAR_7, VAR_5, &VAR_25, &VAR_11,
      &VAR_13, &VAR_8, VAR_19);




 if (VAR_3->op_flags & VAR_1) {
  FUNC_30(VAR_26, VAR_6);
  if (!VAR_11)
   return -VAR_0;
  return 0;
 }




 if (!VAR_11) {

  if (VAR_3->total == 0)
   return -VAR_0;




  VAR_12 = FUNC_21(VAR_3, VAR_6);
  if (VAR_12)
   return VAR_12;
  return FUNC_27(VAR_3);
 }

 VAR_23 = VAR_24 = 0;




 if (VAR_8) {
  FUNC_15(VAR_3, VAR_6, VAR_4, VAR_7, VAR_5, &VAR_23,
          &VAR_17, &VAR_18);

  VAR_5 = FUNC_16(VAR_7);
 } else if (VAR_7->stale) {




  VAR_18 = FUNC_3(VAR_7->count);
  VAR_17 = -1;
 }




 for (VAR_20 = 0, VAR_15 = FUNC_3(VAR_7->count) - 1; VAR_20 <= VAR_15; ) {
  VAR_22 = (VAR_20 + VAR_15) >> 1;
  if ((VAR_14 = FUNC_3(VAR_5[VAR_22].hashval)) == VAR_3->hashval)
   break;
  if (VAR_14 < VAR_3->hashval)
   VAR_20 = VAR_22 + 1;
  else
   VAR_15 = VAR_22 - 1;
 }
 while (VAR_22 >= 0 && FUNC_3(VAR_5[VAR_22].hashval) >= VAR_3->hashval) {
  VAR_22--;
 }



 if (!VAR_7->stale) {
  xfs_dir2_data_aoff_t VAR_27;




  VAR_27 = (xfs_dir2_data_aoff_t)((char *)VAR_13 - (char *)VAR_4 +
    FUNC_1(VAR_13->length) - sizeof(*VAR_5));
  VAR_12 = FUNC_26(VAR_3, VAR_6, VAR_13, VAR_27,
    (xfs_dir2_data_aoff_t)sizeof(*VAR_5), &VAR_23,
    &VAR_24);
  if (VAR_12)
   return VAR_12;




  FUNC_2(&VAR_7->count, 1);




  if (VAR_24) {
   FUNC_23(VAR_10, VAR_4, &VAR_23);
   VAR_24 = 0;
  }





  VAR_5--;
  VAR_22++;
  if (VAR_22)
   FUNC_9(VAR_5, &VAR_5[1], VAR_22 * sizeof(*VAR_5));
  VAR_18 = 0;
  VAR_17 = VAR_22;
 }



 else {
  for (VAR_21 = VAR_22;
       VAR_21 >= 0 &&
   VAR_5[VAR_21].address !=
   FUNC_5(VAR_2);
       VAR_21--)
   continue;
  for (VAR_16 = VAR_22 + 1;
       VAR_16 < FUNC_3(VAR_7->count) &&
   VAR_5[VAR_16].address !=
   FUNC_5(VAR_2) &&
   (VAR_21 < 0 || VAR_22 - VAR_21 > VAR_16 - VAR_22);
       VAR_16++)
   continue;



  if (VAR_21 >= 0 &&
      (VAR_16 == FUNC_3(VAR_7->count) ||
       VAR_22 - VAR_21 <= VAR_16 - VAR_22)) {
   if (VAR_22 - VAR_21)
    FUNC_9(&VAR_5[VAR_21], &VAR_5[VAR_21 + 1],
     (VAR_22 - VAR_21) * sizeof(*VAR_5));
   VAR_18 = FUNC_10(VAR_21, VAR_18);
   VAR_17 = FUNC_7(VAR_22, VAR_17);
  }



  else {
   FUNC_0(VAR_16 < FUNC_3(VAR_7->count));
   VAR_22++;
   if (VAR_16 - VAR_22)
    FUNC_9(&VAR_5[VAR_22 + 1], &VAR_5[VAR_22],
     (VAR_16 - VAR_22) * sizeof(*VAR_5));
   VAR_18 = FUNC_10(VAR_22, VAR_18);
   VAR_17 = FUNC_7(VAR_16, VAR_17);
  }
  FUNC_2(&VAR_7->stale, -1);
 }



 VAR_9 = (xfs_dir2_data_entry_t *)VAR_11;



 VAR_5[VAR_22].hashval = FUNC_5(VAR_3->hashval);
 VAR_5[VAR_22].address = FUNC_5(FUNC_22(
    (char *)VAR_9 - (char *)VAR_4));
 FUNC_17(VAR_26, VAR_6, VAR_18, VAR_17);



 VAR_12 = FUNC_26(VAR_3, VAR_6, VAR_11,
   (xfs_dir2_data_aoff_t)((char *)VAR_11 - (char *)VAR_4),
   (xfs_dir2_data_aoff_t)VAR_19, &VAR_23, &VAR_24);
 if (VAR_12)
  return VAR_12;



 VAR_9->inumber = FUNC_6(VAR_3->inumber);
 VAR_9->namelen = VAR_3->namelen;
 FUNC_8(VAR_9->name, VAR_3->name, VAR_3->namelen);
 VAR_10->d_ops->data_put_ftype(VAR_9, VAR_3->filetype);
 VAR_25 = VAR_10->d_ops->data_entry_tag_p(VAR_9);
 *VAR_25 = FUNC_4((char *)VAR_9 - (char *)VAR_4);



 if (VAR_24)
  FUNC_23(VAR_10, VAR_4, &VAR_23);
 if (VAR_23)
  FUNC_25(VAR_3, VAR_6);
 FUNC_18(VAR_26, VAR_6);
 FUNC_24(VAR_3, VAR_6, VAR_9);
 FUNC_29(VAR_10, VAR_6);
 return 0;
}
