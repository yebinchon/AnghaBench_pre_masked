
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_size; int i_sb; } ;
struct btrfs_trans_handle {struct btrfs_block_rsv* block_rsv; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_block_rsv {int size; int failfast; } ;
struct btrfs_fs_info {int sectorsize; struct btrfs_block_rsv trans_block_rsv; } ;
struct TYPE_2__ {int runtime_flags; struct btrfs_root* root; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct btrfs_trans_handle*) ;
 int VAR_6 ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 struct btrfs_block_rsv* FUNC_4 (struct btrfs_fs_info*,int ) ;
 int FUNC_5 (struct btrfs_block_rsv*,struct btrfs_block_rsv*,int,int) ;
 int FUNC_6 (struct btrfs_fs_info*,struct btrfs_block_rsv*,int) ;
 int FUNC_7 (struct btrfs_fs_info*) ;
 int FUNC_8 (struct btrfs_fs_info*,int) ;
 int FUNC_9 (struct btrfs_trans_handle*) ;
 int FUNC_10 (struct btrfs_fs_info*,struct btrfs_block_rsv*) ;
 int FUNC_11 (struct inode*,int,int *) ;
 struct btrfs_fs_info* FUNC_12 (int ) ;
 struct btrfs_trans_handle* FUNC_13 (struct btrfs_root*,int) ;
 int FUNC_14 (struct inode*,int,int ,int ) ;
 int FUNC_15 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,int,int ) ;
 int FUNC_16 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_17 (struct inode*,int,int) ;
 int FUNC_18 (int ,int *) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_7, bool VAR_8)
{
 struct btrfs_fs_info *VAR_9 = FUNC_12(VAR_7->i_sb);
 struct btrfs_root *VAR_10 = FUNC_0(VAR_7)->root;
 struct btrfs_block_rsv *VAR_11;
 int VAR_12;
 struct btrfs_trans_handle *VAR_13;
 u64 VAR_14 = VAR_9->sectorsize - 1;
 u64 VAR_15 = FUNC_8(VAR_9, 1);

 if (!VAR_8) {
  VAR_12 = FUNC_17(VAR_7, VAR_7->i_size & (~VAR_14),
            (u64)-1);
  if (VAR_12)
   return VAR_12;
 }
 VAR_11 = FUNC_4(VAR_9, VAR_0);
 if (!VAR_11)
  return -VAR_4;
 VAR_11->size = VAR_15;
 VAR_11->failfast = 1;





 VAR_13 = FUNC_13(VAR_10, 2);
 if (FUNC_2(VAR_13)) {
  VAR_12 = FUNC_3(VAR_13);
  goto out;
 }


 VAR_12 = FUNC_5(&VAR_9->trans_block_rsv, VAR_11,
          VAR_15, 0);
 FUNC_1(VAR_12);
 FUNC_18(VAR_2, &FUNC_0(VAR_7)->runtime_flags);
 VAR_13->block_rsv = VAR_11;

 while (1) {
  VAR_12 = FUNC_15(VAR_13, VAR_10, VAR_7,
       VAR_7->i_size,
       VAR_1);
  VAR_13->block_rsv = &VAR_9->trans_block_rsv;
  if (VAR_12 != -VAR_5 && VAR_12 != -VAR_3)
   break;

  VAR_12 = FUNC_16(VAR_13, VAR_10, VAR_7);
  if (VAR_12)
   break;

  FUNC_9(VAR_13);
  FUNC_7(VAR_9);

  VAR_13 = FUNC_13(VAR_10, 2);
  if (FUNC_2(VAR_13)) {
   VAR_12 = FUNC_3(VAR_13);
   VAR_13 = ((void*)0);
   break;
  }

  FUNC_6(VAR_9, VAR_11, -1);
  VAR_12 = FUNC_5(&VAR_9->trans_block_rsv,
           VAR_11, VAR_15, 0);
  FUNC_1(VAR_12);
  VAR_13->block_rsv = VAR_11;
 }







 if (VAR_12 == VAR_6) {
  FUNC_9(VAR_13);
  FUNC_7(VAR_9);

  VAR_12 = FUNC_14(VAR_7, VAR_7->i_size, 0, 0);
  if (VAR_12)
   goto out;
  VAR_13 = FUNC_13(VAR_10, 1);
  if (FUNC_2(VAR_13)) {
   VAR_12 = FUNC_3(VAR_13);
   goto out;
  }
  FUNC_11(VAR_7, VAR_7->i_size, ((void*)0));
 }

 if (VAR_13) {
  int VAR_16;

  VAR_13->block_rsv = &VAR_9->trans_block_rsv;
  VAR_16 = FUNC_16(VAR_13, VAR_10, VAR_7);
  if (VAR_16 && !VAR_12)
   VAR_12 = VAR_16;

  VAR_16 = FUNC_9(VAR_13);
  if (VAR_16 && !VAR_12)
   VAR_12 = VAR_16;
  FUNC_7(VAR_9);
 }
out:
 FUNC_10(VAR_9, VAR_11);

 return VAR_12;
}
