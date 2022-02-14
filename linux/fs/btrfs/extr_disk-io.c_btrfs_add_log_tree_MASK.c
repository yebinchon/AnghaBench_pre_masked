
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_trans_handle {int transid; } ;
struct btrfs_inode_item {int dummy; } ;
struct TYPE_4__ {struct btrfs_inode_item inode; } ;
struct TYPE_3__ {int objectid; int offset; } ;
struct btrfs_root {int log_transid_committed; scalar_t__ last_log_commit; scalar_t__ log_transid; struct btrfs_root* log_root; int node; TYPE_2__ root_item; TYPE_1__ root_key; int last_trans; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int nodesize; } ;


 scalar_t__ FUNC_0 (struct btrfs_root*) ;
 int FUNC_1 (struct btrfs_root*) ;
 int VAR_0 ;
 int FUNC_2 (struct btrfs_root*) ;
 struct btrfs_root* FUNC_3 (struct btrfs_trans_handle*,struct btrfs_fs_info*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (struct btrfs_inode_item*,int) ;
 int FUNC_6 (struct btrfs_inode_item*,int) ;
 int FUNC_7 (struct btrfs_inode_item*,int ) ;
 int FUNC_8 (struct btrfs_inode_item*,int) ;
 int FUNC_9 (struct btrfs_inode_item*,int) ;

int FUNC_10(struct btrfs_trans_handle *VAR_1,
         struct btrfs_root *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_2->fs_info;
 struct btrfs_root *VAR_4;
 struct btrfs_inode_item *VAR_5;

 VAR_4 = FUNC_3(VAR_1, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_4->last_trans = VAR_1->transid;
 VAR_4->root_key.offset = VAR_2->root_key.objectid;

 VAR_5 = &VAR_4->root_item.inode;
 FUNC_5(VAR_5, 1);
 FUNC_9(VAR_5, 3);
 FUNC_8(VAR_5, 1);
 FUNC_7(VAR_5,
         VAR_3->nodesize);
 FUNC_6(VAR_5, VAR_0 | 0755);

 FUNC_4(&VAR_4->root_item, VAR_4->node);

 FUNC_2(VAR_2->log_root);
 VAR_2->log_root = VAR_4;
 VAR_2->log_transid = 0;
 VAR_2->log_transid_committed = -1;
 VAR_2->last_log_commit = 0;
 return 0;
}
