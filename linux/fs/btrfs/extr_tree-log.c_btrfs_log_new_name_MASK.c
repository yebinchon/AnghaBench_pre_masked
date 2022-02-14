
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct btrfs_trans_handle {int transid; struct btrfs_fs_info* fs_info; } ;
struct btrfs_log_ctx {int dummy; } ;
struct TYPE_2__ {int i_mode; } ;
struct btrfs_inode {scalar_t__ logged_trans; int root; TYPE_1__ vfs_inode; int last_unlink_trans; } ;
struct btrfs_fs_info {scalar_t__ last_trans_committed; } ;


 int FUNC_0 (struct btrfs_log_ctx*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct btrfs_log_ctx*,TYPE_1__*) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_inode*,struct dentry*,int ,int ,int ,struct btrfs_log_ctx*) ;
 int FUNC_4 (struct btrfs_trans_handle*,int ,struct btrfs_log_ctx*) ;

int FUNC_5(struct btrfs_trans_handle *VAR_7,
   struct btrfs_inode *VAR_8, struct btrfs_inode *VAR_9,
   struct dentry *VAR_10,
   bool VAR_11, struct btrfs_log_ctx *VAR_12)
{
 struct btrfs_fs_info *VAR_13 = VAR_7->fs_info;
 int VAR_14;





 if (!FUNC_1(VAR_8->vfs_inode.i_mode))
  VAR_8->last_unlink_trans = VAR_7->transid;





 if (VAR_8->logged_trans <= VAR_13->last_trans_committed &&
     (!VAR_9 || VAR_9->logged_trans <= VAR_13->last_trans_committed))
  return VAR_11 ? VAR_1 :
   VAR_0;

 if (VAR_11) {
  struct btrfs_log_ctx VAR_15;

  FUNC_2(&VAR_15, &VAR_8->vfs_inode);
  VAR_14 = FUNC_3(VAR_7, VAR_8, VAR_10, 0, VAR_5,
          VAR_6, &VAR_15);
  if (VAR_14 == VAR_4)
   return VAR_1;
  else if (VAR_14)
   return VAR_3;

  VAR_14 = FUNC_4(VAR_7, VAR_8->root, &VAR_15);
  if (VAR_14)
   return VAR_3;
  return VAR_1;
 }

 FUNC_0(VAR_12);
 VAR_14 = FUNC_3(VAR_7, VAR_8, VAR_10, 0, VAR_5,
         VAR_6, VAR_12);
 if (VAR_14 == VAR_4)
  return VAR_0;
 else if (VAR_14)
  return VAR_3;

 return VAR_2;
}
