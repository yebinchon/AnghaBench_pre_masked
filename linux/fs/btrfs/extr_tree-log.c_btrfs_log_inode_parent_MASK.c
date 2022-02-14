
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct dentry {int dummy; } ;
struct btrfs_trans_handle {int transid; } ;
struct btrfs_root {int root_item; struct btrfs_fs_info* fs_info; } ;
struct btrfs_log_ctx {scalar_t__ log_new_dentries; } ;
struct TYPE_2__ {scalar_t__ i_nlink; int i_mode; struct super_block* i_sb; } ;
struct btrfs_inode {scalar_t__ generation; scalar_t__ last_unlink_trans; TYPE_1__ vfs_inode; struct btrfs_root* root; } ;
struct btrfs_fs_info {scalar_t__ last_trans_committed; scalar_t__ last_trans_log_full_commit; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct btrfs_root*) ;
 scalar_t__ FUNC_3 (struct btrfs_inode*,int ) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_inode*,struct btrfs_log_ctx*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_inode*,int,int const,int const,struct btrfs_log_ctx*) ;
 int FUNC_6 (struct btrfs_root*,struct btrfs_log_ctx*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct btrfs_trans_handle*) ;
 scalar_t__ FUNC_9 (struct btrfs_fs_info*,int ) ;
 int FUNC_10 (struct btrfs_trans_handle*,struct btrfs_inode*,struct dentry*,struct super_block*,scalar_t__) ;
 int FUNC_11 (struct btrfs_trans_handle*,struct btrfs_inode*,struct dentry*,struct btrfs_log_ctx*) ;
 int FUNC_12 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_inode*,struct btrfs_log_ctx*) ;
 int FUNC_13 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_log_ctx*) ;

__attribute__((used)) static int FUNC_14(struct btrfs_trans_handle *VAR_2,
      struct btrfs_inode *VAR_3,
      struct dentry *VAR_4,
      const loff_t VAR_5,
      const loff_t VAR_6,
      int VAR_7,
      struct btrfs_log_ctx *VAR_8)
{
 struct btrfs_root *VAR_9 = VAR_3->root;
 struct btrfs_fs_info *VAR_10 = VAR_9->fs_info;
 struct super_block *VAR_11;
 int VAR_12 = 0;
 u64 VAR_13 = VAR_10->last_trans_committed;
 bool VAR_14 = 0;

 VAR_11 = VAR_3->vfs_inode.i_sb;

 if (FUNC_9(VAR_10, VAR_1)) {
  VAR_12 = 1;
  goto end_no_trans;
 }





 if (VAR_10->last_trans_log_full_commit >
     VAR_10->last_trans_committed) {
  VAR_12 = 1;
  goto end_no_trans;
 }

 if (FUNC_7(&VAR_9->root_item) == 0) {
  VAR_12 = 1;
  goto end_no_trans;
 }

 VAR_12 = FUNC_10(VAR_2, VAR_3, VAR_4, VAR_11,
   VAR_13);
 if (VAR_12)
  goto end_no_trans;






 if (FUNC_3(VAR_3, VAR_2->transid) ||
     VAR_3->vfs_inode.i_nlink == 0) {
  VAR_12 = VAR_0;
  goto end_no_trans;
 }

 VAR_12 = FUNC_13(VAR_2, VAR_9, VAR_8);
 if (VAR_12)
  goto end_no_trans;

 VAR_12 = FUNC_5(VAR_2, VAR_9, VAR_3, VAR_7, VAR_5, VAR_6, VAR_8);
 if (VAR_12)
  goto end_trans;







 if (FUNC_1(VAR_3->vfs_inode.i_mode) &&
     VAR_3->generation <= VAR_13 &&
     VAR_3->last_unlink_trans <= VAR_13) {
  VAR_12 = 0;
  goto end_trans;
 }

 if (FUNC_0(VAR_3->vfs_inode.i_mode) && VAR_8 && VAR_8->log_new_dentries)
  VAR_14 = 1;
 if (VAR_3->last_unlink_trans > VAR_13) {
  VAR_12 = FUNC_4(VAR_2, VAR_3, VAR_8);
  if (VAR_12)
   goto end_trans;
 }

 VAR_12 = FUNC_11(VAR_2, VAR_3, VAR_4, VAR_8);
 if (VAR_12)
  goto end_trans;

 if (VAR_14)
  VAR_12 = FUNC_12(VAR_2, VAR_9, VAR_3, VAR_8);
 else
  VAR_12 = 0;
end_trans:
 if (VAR_12 < 0) {
  FUNC_8(VAR_2);
  VAR_12 = 1;
 }

 if (VAR_12)
  FUNC_6(VAR_9, VAR_8);
 FUNC_2(VAR_9);
end_no_trans:
 return VAR_12;
}
