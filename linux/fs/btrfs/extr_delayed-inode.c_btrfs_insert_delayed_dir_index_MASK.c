
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct btrfs_trans_handle {int fs_info; int transid; } ;
struct btrfs_inode {int root; } ;
struct btrfs_disk_key {int dummy; } ;
struct btrfs_dir_item {struct btrfs_disk_key location; } ;
struct btrfs_delayed_node {int mutex; int inode_id; TYPE_3__* root; } ;
struct TYPE_4__ {int offset; int type; int objectid; } ;
struct btrfs_delayed_item {scalar_t__ data; TYPE_1__ key; } ;
struct TYPE_5__ {int objectid; } ;
struct TYPE_6__ {TYPE_2__ root_key; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct btrfs_delayed_node*) ;
 int FUNC_3 (struct btrfs_delayed_node*) ;
 int FUNC_4 (struct btrfs_delayed_node*,struct btrfs_delayed_item*) ;
 struct btrfs_delayed_item* FUNC_5 (int) ;
 int FUNC_6 (struct btrfs_trans_handle*,int ,struct btrfs_delayed_item*) ;
 int FUNC_7 (int ,char*,int,char const*,int ,int ,int) ;
 struct btrfs_delayed_node* FUNC_8 (struct btrfs_inode*) ;
 int FUNC_9 (struct btrfs_inode*) ;
 int FUNC_10 (struct btrfs_delayed_node*) ;
 int FUNC_11 (struct btrfs_dir_item*,int ) ;
 int FUNC_12 (struct btrfs_dir_item*,int) ;
 int FUNC_13 (struct btrfs_dir_item*,int ) ;
 int FUNC_14 (struct btrfs_dir_item*,int ) ;
 int FUNC_15 (char*,char const*,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int) ;

int FUNC_19(struct btrfs_trans_handle *VAR_2,
       const char *VAR_3, int VAR_4,
       struct btrfs_inode *VAR_5,
       struct btrfs_disk_key *VAR_6, u8 VAR_7,
       u64 VAR_8)
{
 struct btrfs_delayed_node *VAR_9;
 struct btrfs_delayed_item *VAR_10;
 struct btrfs_dir_item *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_8(VAR_5);
 if (FUNC_2(VAR_9))
  return FUNC_3(VAR_9);

 VAR_10 = FUNC_5(sizeof(*VAR_11) + VAR_4);
 if (!VAR_10) {
  VAR_12 = -VAR_1;
  goto release_node;
 }

 VAR_10->key.objectid = FUNC_9(VAR_5);
 VAR_10->key.type = VAR_0;
 VAR_10->key.offset = VAR_8;

 VAR_11 = (struct btrfs_dir_item *)VAR_10->data;
 VAR_11->location = *VAR_6;
 FUNC_13(VAR_11, VAR_2->transid);
 FUNC_11(VAR_11, 0);
 FUNC_12(VAR_11, VAR_4);
 FUNC_14(VAR_11, VAR_7);
 FUNC_15((char *)(VAR_11 + 1), VAR_3, VAR_4);

 VAR_12 = FUNC_6(VAR_2, VAR_5->root, VAR_10);




 FUNC_1(VAR_12);

 FUNC_16(&VAR_9->mutex);
 VAR_12 = FUNC_4(VAR_9, VAR_10);
 if (FUNC_18(VAR_12)) {
  FUNC_7(VAR_2->fs_info,
     "err add delayed dir index item(name: %.*s) into the insertion tree of the delayed node(root id: %llu, inode id: %llu, errno: %d)",
     VAR_4, VAR_3, VAR_9->root->root_key.objectid,
     VAR_9->inode_id, VAR_12);
  FUNC_0();
 }
 FUNC_17(&VAR_9->mutex);

release_node:
 FUNC_10(VAR_9);
 return VAR_12;
}
