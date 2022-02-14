
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int i_size; int i_sb; } ;
struct btrfs_trans_handle {struct btrfs_block_rsv* block_rsv; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_block_rsv {int failfast; void* size; } ;
struct btrfs_fs_info {struct btrfs_block_rsv trans_block_rsv; int sectorsize; } ;
struct btrfs_clone_extent_info {scalar_t__ data_len; int file_offset; int data_offset; } ;
struct TYPE_3__ {int runtime_flags; struct btrfs_root* root; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct btrfs_trans_handle*) ;
 int VAR_6 ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,struct btrfs_path*,scalar_t__,scalar_t__ const,scalar_t__*,int,int ,int ,int *) ;
 int FUNC_5 (struct btrfs_trans_handle*,int) ;
 struct btrfs_block_rsv* FUNC_6 (struct btrfs_fs_info*,int ) ;
 int FUNC_7 (struct btrfs_block_rsv*,struct btrfs_block_rsv*,scalar_t__,int) ;
 int FUNC_8 (struct btrfs_fs_info*) ;
 void* FUNC_9 (struct btrfs_fs_info*,int) ;
 int FUNC_10 (struct btrfs_trans_handle*) ;
 int FUNC_11 (struct btrfs_fs_info*,struct btrfs_block_rsv*) ;
 int FUNC_12 (struct btrfs_fs_info*,int ) ;
 int FUNC_13 (struct btrfs_trans_handle*,struct inode*,struct btrfs_path*,struct btrfs_clone_extent_info*,scalar_t__) ;
 struct btrfs_fs_info* FUNC_14 (int ) ;
 struct btrfs_trans_handle* FUNC_15 (struct btrfs_root*,unsigned int) ;
 int FUNC_16 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_17 (struct btrfs_trans_handle*,TYPE_1__*,struct btrfs_path*,scalar_t__,scalar_t__) ;
 int FUNC_18 (struct inode*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int *) ;
 scalar_t__ FUNC_21 (int) ;

int FUNC_22(struct inode *VAR_7, struct btrfs_path *VAR_8,
      const u64 VAR_9, const u64 VAR_10,
      struct btrfs_clone_extent_info *VAR_11,
      struct btrfs_trans_handle **VAR_12)
{
 struct btrfs_fs_info *VAR_13 = FUNC_14(VAR_7->i_sb);
 u64 VAR_14 = FUNC_9(VAR_13, 1);
 u64 VAR_15 = FUNC_19(VAR_7->i_size, VAR_13->sectorsize);
 struct btrfs_root *VAR_16 = FUNC_0(VAR_7)->root;
 struct btrfs_trans_handle *VAR_17 = ((void*)0);
 struct btrfs_block_rsv *VAR_18;
 unsigned int VAR_19;
 u64 VAR_20;
 u64 VAR_21;
 u64 VAR_22 = VAR_10 - VAR_9;
 int VAR_23 = 0;

 if (VAR_10 <= VAR_9)
  return -VAR_2;

 VAR_18 = FUNC_6(VAR_13, VAR_0);
 if (!VAR_18) {
  VAR_23 = -VAR_3;
  goto out;
 }
 VAR_18->size = FUNC_9(VAR_13, 1);
 VAR_18->failfast = 1;







 if (!FUNC_12(VAR_13, VAR_6) || VAR_11)
  VAR_19 = 3;
 else
  VAR_19 = 2;

 VAR_17 = FUNC_15(VAR_16, VAR_19);
 if (FUNC_2(VAR_17)) {
  VAR_23 = FUNC_3(VAR_17);
  VAR_17 = ((void*)0);
  goto out_free;
 }

 VAR_23 = FUNC_7(&VAR_13->trans_block_rsv, VAR_18,
          VAR_14, 0);
 FUNC_1(VAR_23);
 VAR_17->block_rsv = VAR_18;

 VAR_20 = VAR_9;
 while (VAR_20 < VAR_10) {
  VAR_23 = FUNC_4(VAR_17, VAR_16, VAR_7, VAR_8,
        VAR_20, VAR_10 + 1, &VAR_21,
        1, 0, 0, ((void*)0));
  if (VAR_23 != -VAR_4) {







   if (VAR_11 && VAR_23 && VAR_23 != -VAR_5)
    FUNC_5(VAR_17, VAR_23);
   break;
  }

  VAR_17->block_rsv = &VAR_13->trans_block_rsv;

  if (!VAR_11 && VAR_20 < VAR_21 &&
      VAR_20 < VAR_15) {
   VAR_23 = FUNC_17(VAR_17, FUNC_0(VAR_7), VAR_8,
     VAR_20, VAR_21);
   if (VAR_23) {






    FUNC_5(VAR_17, VAR_23);
    break;
   }
  }

  if (VAR_11) {
   u64 VAR_24 = VAR_21 - VAR_20;

   VAR_23 = FUNC_13(VAR_17, VAR_7, VAR_8,
       VAR_11, VAR_24);
   if (VAR_23) {
    FUNC_5(VAR_17, VAR_23);
    break;
   }
   VAR_11->data_len -= VAR_24;
   VAR_11->data_offset += VAR_24;
   VAR_11->file_offset += VAR_24;
  }

  VAR_20 = VAR_21;

  VAR_23 = FUNC_16(VAR_17, VAR_16, VAR_7);
  if (VAR_23)
   break;

  FUNC_10(VAR_17);
  FUNC_8(VAR_13);

  VAR_17 = FUNC_15(VAR_16, VAR_19);
  if (FUNC_2(VAR_17)) {
   VAR_23 = FUNC_3(VAR_17);
   VAR_17 = ((void*)0);
   break;
  }

  VAR_23 = FUNC_7(&VAR_13->trans_block_rsv,
           VAR_18, VAR_14, 0);
  FUNC_1(VAR_23);
  VAR_17->block_rsv = VAR_18;

  if (!VAR_11) {
   VAR_23 = FUNC_18(VAR_7, &VAR_20, &VAR_22);
   if (FUNC_21(VAR_23 < 0))
    break;
   if (VAR_23 && !VAR_22) {
    VAR_23 = 0;
    break;
   }
  }
 }
 if (VAR_11)
  FUNC_20(VAR_1,
   &FUNC_0(VAR_7)->runtime_flags);

 if (VAR_23)
  goto out_trans;

 VAR_17->block_rsv = &VAR_13->trans_block_rsv;
 if (VAR_21 <= VAR_10)
  VAR_21 = VAR_10 + 1;





 if (!VAR_11 && VAR_20 < VAR_15 && VAR_20 < VAR_21) {
  VAR_23 = FUNC_17(VAR_17, FUNC_0(VAR_7), VAR_8,
    VAR_20, VAR_21);
  if (VAR_23) {

   FUNC_5(VAR_17, VAR_23);
   goto out_trans;
  }
 }
 if (VAR_11) {
  VAR_23 = FUNC_13(VAR_17, VAR_7, VAR_8, VAR_11,
      VAR_11->data_len);
  if (VAR_23) {
   FUNC_5(VAR_17, VAR_23);
   goto out_trans;
  }
 }

out_trans:
 if (!VAR_17)
  goto out_free;

 VAR_17->block_rsv = &VAR_13->trans_block_rsv;
 if (VAR_23)
  FUNC_10(VAR_17);
 else
  *VAR_12 = VAR_17;
out_free:
 FUNC_11(VAR_13, VAR_18);
out:
 return VAR_23;
}
