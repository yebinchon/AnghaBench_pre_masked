
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_db_t ;
struct xfs_dir2_data_unused {int dummy; } ;
typedef struct xfs_dir2_data_unused xfs_dir2_data_unused_t ;
typedef int xfs_dir2_data_off_t ;
struct xfs_dir2_data_entry {int namelen; int name; int inumber; } ;
typedef struct xfs_dir2_data_entry xfs_dir2_data_entry_t ;
typedef int xfs_dir2_data_aoff_t ;
struct xfs_trans {int dummy; } ;
struct xfs_inode {TYPE_1__* d_ops; } ;
struct xfs_dir3_icleaf_hdr {int count; int stale; } ;
struct xfs_dir2_leaf_tail {void* bestcount; } ;
struct xfs_dir2_leaf_entry {void* address; void* hashval; } ;
struct xfs_dir2_leaf {int dummy; } ;
typedef struct xfs_dir2_leaf xfs_dir2_data_hdr ;
struct xfs_dir2_data_free {scalar_t__ length; scalar_t__ offset; } ;
struct xfs_da_args {int hashval; int op_flags; scalar_t__ total; TYPE_2__* geo; int filetype; int name; int namelen; int inumber; struct xfs_inode* dp; struct xfs_trans* trans; } ;
struct xfs_buf {struct xfs_dir2_leaf* b_addr; } ;
typedef int bestsp ;
typedef scalar_t__ __be16 ;
struct TYPE_7__ {int leafblk; } ;
struct TYPE_6__ {int (* data_entsize ) (int ) ;int (* leaf_hdr_to_disk ) (struct xfs_dir2_leaf*,struct xfs_dir3_icleaf_hdr*) ;scalar_t__* (* data_entry_tag_p ) (struct xfs_dir2_data_entry*) ;int (* data_put_ftype ) (struct xfs_dir2_data_entry*,int ) ;struct xfs_dir2_data_free* (* data_bestfree_p ) (struct xfs_dir2_leaf*) ;int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf*) ;struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (struct xfs_dir2_leaf*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (void**,int) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (scalar_t__*,scalar_t__*,int) ;
 struct xfs_dir2_leaf_entry* FUNC_9 (struct xfs_dir2_leaf*) ;
 int FUNC_10 (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf*) ;
 int FUNC_11 (int ) ;
 struct xfs_dir2_data_free* FUNC_12 (struct xfs_dir2_leaf*) ;
 struct xfs_dir2_data_free* FUNC_13 (struct xfs_dir2_leaf*) ;
 int FUNC_14 (struct xfs_dir2_data_entry*,int ) ;
 scalar_t__* FUNC_15 (struct xfs_dir2_data_entry*) ;
 int FUNC_16 (struct xfs_dir2_leaf*,struct xfs_dir3_icleaf_hdr*) ;
 int FUNC_17 (struct xfs_da_args*) ;
 int FUNC_18 (struct xfs_inode*,struct xfs_dir2_leaf*,int*) ;
 int FUNC_19 (struct xfs_da_args*,struct xfs_buf*,struct xfs_dir2_data_entry*) ;
 int FUNC_20 (struct xfs_da_args*,struct xfs_buf*) ;
 int FUNC_21 (struct xfs_da_args*,struct xfs_buf*,struct xfs_dir2_data_unused*,int ,int,int*,int*) ;
 int FUNC_22 (TYPE_2__*,int) ;
 int FUNC_23 (TYPE_2__*,int,int) ;
 int FUNC_24 (TYPE_2__*,int) ;
 int FUNC_25 (struct xfs_da_args*,int ,int*) ;
 scalar_t__* FUNC_26 (struct xfs_dir2_leaf_tail*) ;
 int FUNC_27 (struct xfs_da_args*,struct xfs_buf*) ;
 struct xfs_dir2_leaf_tail* FUNC_28 (TYPE_2__*,struct xfs_dir2_leaf*) ;
 int FUNC_29 (struct xfs_da_args*,struct xfs_buf*) ;
 int FUNC_30 (struct xfs_da_args*) ;
 int FUNC_31 (struct xfs_inode*,struct xfs_buf*) ;
 int FUNC_32 (struct xfs_da_args*,int,struct xfs_buf**) ;
 int FUNC_33 (struct xfs_trans*,struct xfs_inode*,int ,int,struct xfs_buf**) ;
 int FUNC_34 (struct xfs_inode*,struct xfs_buf*) ;
 int FUNC_35 (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf_entry*,int*,int*,int*,int*,int*) ;
 struct xfs_dir2_leaf_entry* FUNC_36 (struct xfs_dir3_icleaf_hdr*,struct xfs_dir2_leaf_entry*,int,int,int,int,int*,int*) ;
 int FUNC_37 (struct xfs_da_args*,struct xfs_buf*,int,int) ;
 int FUNC_38 (struct xfs_da_args*,struct xfs_buf*,int,int) ;
 int FUNC_39 (struct xfs_da_args*,struct xfs_buf*) ;
 int FUNC_40 (struct xfs_da_args*,struct xfs_buf*) ;
 int FUNC_41 (struct xfs_trans*,struct xfs_inode*,int ,int,struct xfs_buf**) ;
 int FUNC_42 (struct xfs_trans*,struct xfs_buf*) ;

int
FUNC_43(
 struct xfs_da_args *VAR_5)
{
 struct xfs_dir3_icleaf_hdr VAR_6;
 struct xfs_trans *VAR_7 = VAR_5->trans;
 __be16 *VAR_8;
 __be16 *VAR_9;
 struct xfs_buf *VAR_10;
 struct xfs_buf *VAR_11;
 struct xfs_dir2_leaf *VAR_12;
 struct xfs_inode *VAR_13 = VAR_5->dp;
 struct xfs_dir2_data_hdr *VAR_14;
 struct xfs_dir2_data_entry *VAR_15;
 struct xfs_dir2_leaf_entry *VAR_16;
 struct xfs_dir2_leaf_entry *VAR_17;
 struct xfs_dir2_data_unused *VAR_18;
 struct xfs_dir2_leaf_tail *VAR_19;
 struct xfs_dir2_data_free *VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24 = 0;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30 = 0;
 int VAR_31;
 int VAR_32;
 int VAR_33;
 xfs_dir2_db_t VAR_34;

 FUNC_17(VAR_5);

 VAR_22 = FUNC_41(VAR_7, VAR_13, VAR_5->geo->leafblk, -1, &VAR_11);
 if (VAR_22)
  return VAR_22;







 VAR_26 = FUNC_27(VAR_5, VAR_11);
 VAR_12 = VAR_11->b_addr;
 VAR_19 = FUNC_28(VAR_5->geo, VAR_12);
 VAR_17 = VAR_13->d_ops->leaf_ents_p(VAR_12);
 VAR_13->d_ops->leaf_hdr_from_disk(&VAR_6, VAR_12);
 VAR_8 = FUNC_26(VAR_19);
 VAR_27 = VAR_13->d_ops->data_entsize(VAR_5->namelen);







 for (VAR_34 = -1, VAR_16 = &VAR_17[VAR_26];
      VAR_26 < VAR_6.count && FUNC_3(VAR_16->hashval) == VAR_5->hashval;
      VAR_26++, VAR_16++) {
  if (FUNC_3(VAR_16->address) == VAR_4)
   continue;
  VAR_25 = FUNC_22(VAR_5->geo, FUNC_3(VAR_16->address));
  FUNC_0(VAR_25 < FUNC_3(VAR_19->bestcount));
  FUNC_0(VAR_8[VAR_25] != FUNC_4(VAR_1));
  if (FUNC_1(VAR_8[VAR_25]) >= VAR_27) {
   VAR_34 = VAR_25;
   break;
  }
 }



 if (VAR_34 == -1) {
  for (VAR_25 = 0; VAR_25 < FUNC_3(VAR_19->bestcount); VAR_25++) {



   if (VAR_8[VAR_25] == FUNC_4(VAR_1) &&
       VAR_34 == -1)
    VAR_34 = VAR_25;
   else if (FUNC_1(VAR_8[VAR_25]) >= VAR_27) {
    VAR_34 = VAR_25;
    break;
   }
  }
 }



 VAR_31 = 0;
 if (!VAR_6.stale)
  VAR_31 += sizeof(xfs_dir2_leaf_entry_t);
 if (VAR_34 == -1)
  VAR_31 += sizeof(xfs_dir2_data_off_t);





 if (VAR_34 != -1 && VAR_8[VAR_34] == FUNC_4(VAR_1))
  VAR_34 = -1;




 if ((char *)VAR_8 - (char *)&VAR_17[VAR_6.count] < VAR_31 &&
     VAR_6.stale > 1)
  VAR_21 = 1;





 else if ((char *)VAR_8 - (char *)&VAR_17[VAR_6.count] < VAR_31) {



  if ((VAR_5->op_flags & VAR_2) ||
       VAR_5->total == 0) {
   FUNC_42(VAR_7, VAR_11);
   return -VAR_0;
  }



  VAR_22 = FUNC_29(VAR_5, VAR_11);
  if (VAR_22)
   return VAR_22;



  return FUNC_30(VAR_5);
 }



 else
  VAR_21 = 0;




 if (VAR_5->op_flags & VAR_2) {
  FUNC_42(VAR_7, VAR_11);
  return VAR_34 == -1 ? -VAR_0 : 0;
 }




 if (VAR_5->total == 0 && VAR_34 == -1) {
  FUNC_42(VAR_7, VAR_11);
  return -VAR_0;
 }






 if (VAR_21) {
  FUNC_35(&VAR_6, VAR_17, &VAR_26, &VAR_30,
   &VAR_24, &VAR_28, &VAR_29);
 }




 else if (VAR_6.stale) {
  VAR_28 = VAR_6.count;
  VAR_29 = -1;
 }




 if (VAR_34 == -1) {



  if ((VAR_22 = FUNC_25(VAR_5, VAR_3,
    &VAR_34))) {
   FUNC_42(VAR_7, VAR_11);
   return VAR_22;
  }



  if ((VAR_22 = FUNC_32(VAR_5, VAR_34, &VAR_10))) {
   FUNC_42(VAR_7, VAR_11);
   return VAR_22;
  }




  if (VAR_34 >= FUNC_3(VAR_19->bestcount)) {
   VAR_8--;
   FUNC_8(&VAR_8[0], &VAR_8[1],
    FUNC_3(VAR_19->bestcount) * sizeof(VAR_8[0]));
   FUNC_2(&VAR_19->bestcount, 1);
   FUNC_40(VAR_5, VAR_11);
   FUNC_37(VAR_5, VAR_11, 0,
      FUNC_3(VAR_19->bestcount) - 1);
  }



  else
   FUNC_37(VAR_5, VAR_11, VAR_34, VAR_34);
  VAR_14 = VAR_10->b_addr;
  VAR_20 = VAR_13->d_ops->data_bestfree_p(VAR_14);
  VAR_8[VAR_34] = VAR_20[0].length;
  VAR_23 = 1;
 } else {




  VAR_22 = FUNC_33(VAR_7, VAR_13,
       FUNC_24(VAR_5->geo, VAR_34),
       -1, &VAR_10);
  if (VAR_22) {
   FUNC_42(VAR_7, VAR_11);
   return VAR_22;
  }
  VAR_14 = VAR_10->b_addr;
  VAR_20 = VAR_13->d_ops->data_bestfree_p(VAR_14);
  VAR_23 = 0;
 }



 VAR_18 = (xfs_dir2_data_unused_t *)
       ((char *)VAR_14 + FUNC_1(VAR_20[0].offset));
 VAR_33 = VAR_32 = 0;



 VAR_22 = FUNC_21(VAR_5, VAR_10, VAR_18,
   (xfs_dir2_data_aoff_t)((char *)VAR_18 - (char *)VAR_14),
   VAR_27, &VAR_32, &VAR_33);
 if (VAR_22) {
  FUNC_42(VAR_7, VAR_11);
  return VAR_22;
 }



 VAR_15 = (xfs_dir2_data_entry_t *)VAR_18;
 VAR_15->inumber = FUNC_6(VAR_5->inumber);
 VAR_15->namelen = VAR_5->namelen;
 FUNC_7(VAR_15->name, VAR_5->name, VAR_15->namelen);
 VAR_13->d_ops->data_put_ftype(VAR_15, VAR_5->filetype);
 VAR_9 = VAR_13->d_ops->data_entry_tag_p(VAR_15);
 *VAR_9 = FUNC_4((char *)VAR_15 - (char *)VAR_14);



 if (VAR_33)
  FUNC_18(VAR_13, VAR_14, &VAR_32);



 if (VAR_32)
  FUNC_20(VAR_5, VAR_10);
 FUNC_19(VAR_5, VAR_10, VAR_15);




 if (FUNC_1(VAR_8[VAR_34]) != FUNC_1(VAR_20[0].length)) {
  VAR_8[VAR_34] = VAR_20[0].length;
  if (!VAR_23)
   FUNC_37(VAR_5, VAR_11, VAR_34, VAR_34);
 }

 VAR_16 = FUNC_36(&VAR_6, VAR_17, VAR_26, VAR_21, VAR_30,
           VAR_24, &VAR_28, &VAR_29);




 VAR_16->hashval = FUNC_5(VAR_5->hashval);
 VAR_16->address = FUNC_5(
    FUNC_23(VAR_5->geo, VAR_34,
    FUNC_1(*VAR_9)));



 VAR_13->d_ops->leaf_hdr_to_disk(VAR_12, &VAR_6);
 FUNC_39(VAR_5, VAR_11);
 FUNC_38(VAR_5, VAR_11, VAR_28, VAR_29);
 FUNC_34(VAR_13, VAR_11);
 FUNC_31(VAR_13, VAR_10);
 return 0;
}
