
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root_item {int dummy; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {TYPE_1__ root_key; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {int offset; int type; int objectid; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_trans_handle*,int) ;
 struct btrfs_path* FUNC_1 () ;
 int FUNC_2 (struct btrfs_fs_info*,char*,int ,int ,int ,int ) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,int) ;
 unsigned long FUNC_6 (struct extent_buffer*,int) ;
 int FUNC_7 (struct extent_buffer*,int) ;
 int FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (struct btrfs_root_item*) ;
 int FUNC_11 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_12 (struct btrfs_root_item*,int ) ;
 int FUNC_13 (struct extent_buffer*,struct btrfs_root_item*,unsigned long,int) ;

int FUNC_14(struct btrfs_trans_handle *VAR_2, struct btrfs_root
        *VAR_3, struct btrfs_key *VAR_4, struct btrfs_root_item
        *VAR_5)
{
 struct btrfs_fs_info *VAR_6 = VAR_3->fs_info;
 struct btrfs_path *VAR_7;
 struct extent_buffer *VAR_8;
 int VAR_9;
 int VAR_10;
 unsigned long VAR_11;
 u32 VAR_12;

 VAR_7 = FUNC_1();
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_11(VAR_2, VAR_3, VAR_4, VAR_7, 0, 1);
 if (VAR_9 < 0)
  goto out;

 if (VAR_9 > 0) {
  FUNC_2(VAR_6,
   "unable to find root key (%llu %u %llu) in tree %llu",
   VAR_4->objectid, VAR_4->type, VAR_4->offset,
   VAR_3->root_key.objectid);
  VAR_9 = -VAR_1;
  FUNC_0(VAR_2, VAR_9);
  goto out;
 }

 VAR_8 = VAR_7->nodes[0];
 VAR_10 = VAR_7->slots[0];
 VAR_11 = FUNC_6(VAR_8, VAR_10);
 VAR_12 = FUNC_7(VAR_8, VAR_10);






 if (VAR_12 < sizeof(*VAR_5)) {
  FUNC_9(VAR_7);
  VAR_9 = FUNC_11(VAR_2, VAR_3, VAR_4, VAR_7,
    -1, 1);
  if (VAR_9 < 0) {
   FUNC_0(VAR_2, VAR_9);
   goto out;
  }

  VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_7);
  if (VAR_9 < 0) {
   FUNC_0(VAR_2, VAR_9);
   goto out;
  }
  FUNC_9(VAR_7);
  VAR_9 = FUNC_5(VAR_2, VAR_3, VAR_7,
    VAR_4, sizeof(*VAR_5));
  if (VAR_9 < 0) {
   FUNC_0(VAR_2, VAR_9);
   goto out;
  }
  VAR_8 = VAR_7->nodes[0];
  VAR_10 = VAR_7->slots[0];
  VAR_11 = FUNC_6(VAR_8, VAR_10);
 }





 FUNC_12(VAR_5, FUNC_10(VAR_5));

 FUNC_13(VAR_8, VAR_5, VAR_11, sizeof(*VAR_5));
 FUNC_8(VAR_7->nodes[0]);
out:
 FUNC_4(VAR_7);
 return VAR_9;
}
