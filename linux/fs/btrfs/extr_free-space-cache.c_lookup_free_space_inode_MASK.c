
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct inode {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_fs_info {int tree_root; } ;
struct TYPE_3__ {int objectid; } ;
struct btrfs_block_group_cache {int iref; int lock; struct inode* inode; int disk_cache_state; TYPE_1__ key; struct btrfs_fs_info* fs_info; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (int ,struct btrfs_path*,int ) ;
 int FUNC_3 (struct btrfs_fs_info*,char*) ;
 void* FUNC_4 (struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct inode *FUNC_7(
  struct btrfs_block_group_cache *VAR_3,
  struct btrfs_path *VAR_4)
{
 struct btrfs_fs_info *VAR_5 = VAR_3->fs_info;
 struct inode *VAR_6 = ((void*)0);
 u32 VAR_7 = VAR_2 | VAR_1;

 FUNC_5(&VAR_3->lock);
 if (VAR_3->inode)
  VAR_6 = FUNC_4(VAR_3->inode);
 FUNC_6(&VAR_3->lock);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_5->tree_root, VAR_4,
       VAR_3->key.objectid);
 if (FUNC_1(VAR_6))
  return VAR_6;

 FUNC_5(&VAR_3->lock);
 if (!((FUNC_0(VAR_6)->flags & VAR_7) == VAR_7)) {
  FUNC_3(VAR_5, "Old style space inode found, converting.");
  FUNC_0(VAR_6)->flags |= VAR_2 |
   VAR_1;
  VAR_3->disk_cache_state = VAR_0;
 }

 if (!VAR_3->iref) {
  VAR_3->inode = FUNC_4(VAR_6);
  VAR_3->iref = 1;
 }
 FUNC_6(&VAR_3->lock);

 return VAR_6;
}
