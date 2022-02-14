
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct dentry {struct super_block* d_sb; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_log_ctx {int dummy; } ;
struct TYPE_2__ {struct super_block* i_sb; } ;
struct btrfs_inode {scalar_t__ generation; struct btrfs_root* root; TYPE_1__ vfs_inode; } ;
struct btrfs_fs_info {scalar_t__ last_trans_committed; } ;


 struct btrfs_inode* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_inode*,int ,int ,int ,struct btrfs_log_ctx*) ;
 int FUNC_3 (struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 struct dentry* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;

__attribute__((used)) static int FUNC_7(struct btrfs_trans_handle *VAR_2,
      struct btrfs_inode *VAR_3,
      struct dentry *VAR_4,
      struct btrfs_log_ctx *VAR_5)
{
 struct btrfs_root *VAR_6 = VAR_3->root;
 struct btrfs_fs_info *VAR_7 = VAR_6->fs_info;
 struct dentry *VAR_8 = ((void*)0);
 struct super_block *VAR_9 = VAR_3->vfs_inode.i_sb;
 int VAR_10 = 0;

 while (1) {
  if (!VAR_4 || FUNC_4(VAR_4) ||
      VAR_9 != VAR_4->d_sb)
   break;

  VAR_3 = FUNC_0(FUNC_3(VAR_4));
  if (VAR_6 != VAR_3->root)
   break;

  if (VAR_3->generation > VAR_7->last_trans_committed) {
   VAR_10 = FUNC_2(VAR_2, VAR_6, VAR_3,
     VAR_1, 0, VAR_0, VAR_5);
   if (VAR_10)
    break;
  }
  if (FUNC_1(VAR_4))
   break;

  VAR_4 = FUNC_5(VAR_4);
  FUNC_6(VAR_8);
  VAR_8 = VAR_4;
 }
 FUNC_6(VAR_8);

 return VAR_10;
}
