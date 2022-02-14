
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int transid; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_path {int leave_spinning; struct extent_buffer** nodes; } ;
struct btrfs_key {int offset; int type; int objectid; } ;
struct btrfs_inode {struct btrfs_root* root; } ;
struct btrfs_disk_key {int dummy; } ;
struct btrfs_dir_item {int dummy; } ;
struct TYPE_2__ {struct btrfs_root* tree_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct btrfs_dir_item*) ;
 int FUNC_1 (struct btrfs_dir_item*) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_disk_key*,struct btrfs_key*) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (struct btrfs_inode*) ;
 int FUNC_6 (struct btrfs_trans_handle*,char const*,int,struct btrfs_inode*,struct btrfs_disk_key*,int ,int ) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (char const*,int) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (struct extent_buffer*,struct btrfs_dir_item*,int ) ;
 int FUNC_11 (struct extent_buffer*,struct btrfs_dir_item*,struct btrfs_disk_key*) ;
 int FUNC_12 (struct extent_buffer*,struct btrfs_dir_item*,int) ;
 int FUNC_13 (struct extent_buffer*,struct btrfs_dir_item*,int ) ;
 int FUNC_14 (struct extent_buffer*,struct btrfs_dir_item*,int ) ;
 struct btrfs_dir_item* FUNC_15 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int,char const*,int) ;
 int FUNC_16 (struct extent_buffer*,char const*,unsigned long,int) ;

int FUNC_17(struct btrfs_trans_handle *VAR_3, const char *VAR_4,
     int VAR_5, struct btrfs_inode *VAR_6,
     struct btrfs_key *VAR_7, u8 VAR_8, u64 VAR_9)
{
 int VAR_10 = 0;
 int VAR_11 = 0;
 struct btrfs_root *VAR_12 = VAR_6->root;
 struct btrfs_path *VAR_13;
 struct btrfs_dir_item *VAR_14;
 struct extent_buffer *VAR_15;
 unsigned long VAR_16;
 struct btrfs_key VAR_17;
 struct btrfs_disk_key VAR_18;
 u32 VAR_19;

 VAR_17.objectid = FUNC_5(VAR_6);
 VAR_17.type = VAR_0;
 VAR_17.offset = FUNC_8(VAR_4, VAR_5);

 VAR_13 = FUNC_2();
 if (!VAR_13)
  return -VAR_2;
 VAR_13->leave_spinning = 1;

 FUNC_3(&VAR_18, VAR_7);

 VAR_19 = sizeof(*VAR_14) + VAR_5;
 VAR_14 = FUNC_15(VAR_3, VAR_12, VAR_13, &VAR_17, VAR_19,
     VAR_4, VAR_5);
 if (FUNC_0(VAR_14)) {
  VAR_10 = FUNC_1(VAR_14);
  if (VAR_10 == -VAR_1)
   goto second_insert;
  goto out_free;
 }

 VAR_15 = VAR_13->nodes[0];
 FUNC_11(VAR_15, VAR_14, &VAR_18);
 FUNC_14(VAR_15, VAR_14, VAR_8);
 FUNC_10(VAR_15, VAR_14, 0);
 FUNC_12(VAR_15, VAR_14, VAR_5);
 FUNC_13(VAR_15, VAR_14, VAR_3->transid);
 VAR_16 = (unsigned long)(VAR_14 + 1);

 FUNC_16(VAR_15, VAR_4, VAR_16, VAR_5);
 FUNC_7(VAR_15);

second_insert:

 if (VAR_12 == VAR_12->fs_info->tree_root) {
  VAR_10 = 0;
  goto out_free;
 }
 FUNC_9(VAR_13);

 VAR_11 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6,
           &VAR_18, VAR_8, VAR_9);
out_free:
 FUNC_4(VAR_13);
 if (VAR_10)
  return VAR_10;
 if (VAR_11)
  return VAR_11;
 return 0;
}
