
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode_defrag {int root; int transid; int ino; } ;
struct btrfs_trans_handle {int transid; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; int last_trans; struct btrfs_fs_info* fs_info; } ;
struct btrfs_inode {int runtime_flags; struct btrfs_root* root; } ;
struct btrfs_fs_info {int defrag_inodes_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_inode*,struct inode_defrag*) ;
 int FUNC_1 (struct btrfs_fs_info*) ;
 int FUNC_2 (struct btrfs_inode*) ;
 int VAR_3 ;
 int FUNC_3 (int ,struct inode_defrag*) ;
 struct inode_defrag* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

int FUNC_8(struct btrfs_trans_handle *VAR_4,
      struct btrfs_inode *VAR_5)
{
 struct btrfs_root *VAR_6 = VAR_5->root;
 struct btrfs_fs_info *VAR_7 = VAR_6->fs_info;
 struct inode_defrag *VAR_8;
 u64 VAR_9;
 int VAR_10;

 if (!FUNC_1(VAR_7))
  return 0;

 if (FUNC_7(VAR_0, &VAR_5->runtime_flags))
  return 0;

 if (VAR_4)
  VAR_9 = VAR_4->transid;
 else
  VAR_9 = VAR_5->root->last_trans;

 VAR_8 = FUNC_4(VAR_3, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->ino = FUNC_2(VAR_5);
 VAR_8->transid = VAR_9;
 VAR_8->root = VAR_6->root_key.objectid;

 FUNC_5(&VAR_7->defrag_inodes_lock);
 if (!FUNC_7(VAR_0, &VAR_5->runtime_flags)) {





  VAR_10 = FUNC_0(VAR_5, VAR_8);
  if (VAR_10)
   FUNC_3(VAR_3, VAR_8);
 } else {
  FUNC_3(VAR_3, VAR_8);
 }
 FUNC_6(&VAR_7->defrag_inodes_lock);
 return 0;
}
