
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_dir2_db_t ;
struct xfs_dir2_data_unused {int dummy; } ;
typedef struct xfs_dir2_data_unused xfs_dir2_data_unused_t ;
struct xfs_dir2_data_entry {int namelen; int name; int inumber; } ;
typedef struct xfs_dir2_data_entry xfs_dir2_data_entry_t ;
typedef scalar_t__ xfs_dir2_data_aoff_t ;
typedef scalar_t__ xfs_dablk_t ;
struct xfs_trans {int dummy; } ;
struct xfs_inode {TYPE_1__* d_ops; } ;
struct xfs_dir2_free {int dummy; } ;
typedef struct xfs_dir2_free xfs_dir2_data_hdr ;
struct xfs_dir2_data_free {int length; int offset; } ;
struct xfs_da_state_blk {int dummy; } ;
struct xfs_da_args {int op_flags; int index; scalar_t__ blkno; int filetype; int name; int namelen; int inumber; int geo; struct xfs_inode* dp; struct xfs_trans* trans; } ;
struct xfs_buf {struct xfs_dir2_free* b_addr; } ;
typedef int __be16 ;
struct TYPE_2__ {int (* data_entsize ) (int ) ;int * (* free_bests_p ) (struct xfs_dir2_free*) ;int * (* data_entry_tag_p ) (struct xfs_dir2_data_entry*) ;int (* data_put_ftype ) (struct xfs_dir2_data_entry*,int ) ;struct xfs_dir2_data_free* (* data_bestfree_p ) (struct xfs_dir2_free*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 struct xfs_dir2_data_free* FUNC_6 (struct xfs_dir2_free*) ;
 int FUNC_7 (struct xfs_dir2_data_entry*,int ) ;
 int * FUNC_8 (struct xfs_dir2_data_entry*) ;
 int * FUNC_9 (struct xfs_dir2_free*) ;
 int FUNC_10 (struct xfs_inode*,struct xfs_dir2_free*,int*) ;
 int FUNC_11 (struct xfs_da_args*,struct xfs_buf*,struct xfs_dir2_data_entry*) ;
 int FUNC_12 (struct xfs_da_args*,struct xfs_buf*) ;
 int FUNC_13 (struct xfs_da_args*,struct xfs_buf*,struct xfs_dir2_data_unused*,scalar_t__,int,int*,int*) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (struct xfs_da_args*,struct xfs_buf*,int,int) ;
 int FUNC_16 (struct xfs_da_args*,struct xfs_da_state_blk*,int*,struct xfs_buf**,struct xfs_buf**,int*) ;
 int FUNC_17 (struct xfs_da_args*,struct xfs_da_state_blk*,int*,struct xfs_buf**,int*,int) ;
 int FUNC_18 (struct xfs_trans*,struct xfs_inode*,int ,int,struct xfs_buf**) ;
 int FUNC_19 (struct xfs_trans*,struct xfs_buf*) ;

__attribute__((used)) static int
FUNC_20(
 struct xfs_da_args *VAR_2,
 struct xfs_da_state_blk *VAR_3)
{
 struct xfs_dir2_data_unused *VAR_4;
 struct xfs_dir2_data_entry *VAR_5;
 struct xfs_dir2_data_hdr *VAR_6;
 struct xfs_dir2_data_free *VAR_7;
 struct xfs_dir2_free *VAR_8 = ((void*)0);
 struct xfs_trans *VAR_9 = VAR_2->trans;
 struct xfs_inode *VAR_10 = VAR_2->dp;
 struct xfs_buf *VAR_11;
 struct xfs_buf *VAR_12;
 xfs_dir2_data_aoff_t VAR_13;
 xfs_dir2_db_t VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20 = 0;
 __be16 *VAR_21;
 __be16 *VAR_22;

 VAR_17 = VAR_10->d_ops->data_entsize(VAR_2->namelen);
 VAR_15 = FUNC_17(VAR_2, VAR_3, &VAR_14, &VAR_12, &VAR_16,
        VAR_17);
 if (VAR_15)
  return VAR_15;





 if (VAR_2->op_flags & VAR_1) {
  if (VAR_14 == -1)
   return -VAR_0;
  return 0;
 }





 if (VAR_14 == -1) {

  VAR_18 = 1;
  VAR_15 = FUNC_16(VAR_2, VAR_3, &VAR_14, &VAR_11, &VAR_12,
        &VAR_16);
 } else {

  VAR_15 = FUNC_18(VAR_9, VAR_10,
        FUNC_14(VAR_2->geo, VAR_14),
        -1, &VAR_11);
 }
 if (VAR_15)
  return VAR_15;


 VAR_6 = VAR_11->b_addr;
 VAR_7 = VAR_10->d_ops->data_bestfree_p(VAR_6);
 FUNC_0(FUNC_1(VAR_7[0].length) >= VAR_17);


 VAR_4 = (xfs_dir2_data_unused_t *)
       ((char *)VAR_6 + FUNC_1(VAR_7[0].offset));


 VAR_13 = (xfs_dir2_data_aoff_t)((char *)VAR_4 - (char *)VAR_6);
 VAR_15 = FUNC_13(VAR_2, VAR_11, VAR_4, VAR_13, VAR_17,
   &VAR_19, &VAR_20);
 if (VAR_15) {
  FUNC_19(VAR_9, VAR_11);
  return VAR_15;
 }


 VAR_5 = (xfs_dir2_data_entry_t *)VAR_4;
 VAR_5->inumber = FUNC_3(VAR_2->inumber);
 VAR_5->namelen = VAR_2->namelen;
 FUNC_4(VAR_5->name, VAR_2->name, VAR_5->namelen);
 VAR_10->d_ops->data_put_ftype(VAR_5, VAR_2->filetype);
 VAR_21 = VAR_10->d_ops->data_entry_tag_p(VAR_5);
 *VAR_21 = FUNC_2((char *)VAR_5 - (char *)VAR_6);
 FUNC_11(VAR_2, VAR_11, VAR_5);


 if (VAR_20)
  FUNC_10(VAR_10, VAR_6, &VAR_19);
 if (VAR_19)
  FUNC_12(VAR_2, VAR_11);


 VAR_8 = VAR_12->b_addr;
 VAR_22 = VAR_10->d_ops->free_bests_p(VAR_8);
 if (VAR_22[VAR_16] != VAR_7[0].length) {
  VAR_22[VAR_16] = VAR_7[0].length;
  VAR_18 = 1;
 }


 if (VAR_18)
  FUNC_15(VAR_2, VAR_12, VAR_16, VAR_16);


 VAR_2->blkno = (xfs_dablk_t)VAR_14;
 VAR_2->index = FUNC_1(*VAR_21);
 return 0;
}
