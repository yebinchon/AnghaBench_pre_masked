
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ objectid; scalar_t__ offset; } ;
struct TYPE_3__ {int * inode; } ;
struct btrfs_block_group_cache {TYPE_2__ key; TYPE_1__ io_ctl; int lock; struct inode* inode; scalar_t__ iref; } ;


 int FUNC_0 (int ) ;
 struct btrfs_block_group_cache* FUNC_1 (struct btrfs_fs_info*,scalar_t__) ;
 struct btrfs_block_group_cache* FUNC_2 (struct btrfs_block_group_cache*) ;
 int FUNC_3 (struct btrfs_block_group_cache*) ;
 int FUNC_4 (struct btrfs_block_group_cache*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct btrfs_fs_info *VAR_0)
{
 struct btrfs_block_group_cache *VAR_1;
 u64 VAR_2 = 0;

 while (1) {
  struct inode *VAR_3;

  VAR_1 = FUNC_1(VAR_0, VAR_2);
  while (VAR_1) {
   FUNC_4(VAR_1);
   FUNC_6(&VAR_1->lock);
   if (VAR_1->iref)
    break;
   FUNC_7(&VAR_1->lock);
   VAR_1 = FUNC_2(VAR_1);
  }
  if (!VAR_1) {
   if (VAR_2 == 0)
    break;
   VAR_2 = 0;
   continue;
  }

  VAR_3 = VAR_1->inode;
  VAR_1->iref = 0;
  VAR_1->inode = ((void*)0);
  FUNC_7(&VAR_1->lock);
  FUNC_0(VAR_1->io_ctl.inode == ((void*)0));
  FUNC_5(VAR_3);
  VAR_2 = VAR_1->key.objectid + VAR_1->key.offset;
  FUNC_3(VAR_1);
 }
}
