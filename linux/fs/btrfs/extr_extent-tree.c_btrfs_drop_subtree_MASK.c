
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct walk_control {int* refs; int level; int shared_level; int keep_locks; int reada_count; scalar_t__ update_ref; int stage; int * flags; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct TYPE_2__ {scalar_t__ objectid; } ;
struct btrfs_root {TYPE_1__ root_key; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int * locks; scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_fs_info*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct btrfs_path*) ;
 int FUNC_5 (struct extent_buffer*) ;
 scalar_t__ FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (struct walk_control*) ;
 struct walk_control* FUNC_9 (int,int ) ;
 int FUNC_10 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct walk_control*) ;
 int FUNC_11 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct walk_control*,int) ;

int FUNC_12(struct btrfs_trans_handle *VAR_6,
   struct btrfs_root *VAR_7,
   struct extent_buffer *VAR_8,
   struct extent_buffer *VAR_9)
{
 struct btrfs_fs_info *VAR_10 = VAR_7->fs_info;
 struct btrfs_path *VAR_11;
 struct walk_control *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 FUNC_1(VAR_7->root_key.objectid != VAR_1);

 VAR_11 = FUNC_2();
 if (!VAR_11)
  return -VAR_4;

 VAR_12 = FUNC_9(sizeof(*VAR_12), VAR_5);
 if (!VAR_12) {
  FUNC_4(VAR_11);
  return -VAR_4;
 }

 FUNC_3(VAR_9);
 VAR_14 = FUNC_5(VAR_9);
 FUNC_7(VAR_9);
 VAR_11->nodes[VAR_14] = VAR_9;
 VAR_11->slots[VAR_14] = FUNC_6(VAR_9);

 FUNC_3(VAR_8);
 VAR_13 = FUNC_5(VAR_8);
 VAR_11->nodes[VAR_13] = VAR_8;
 VAR_11->slots[VAR_13] = 0;
 VAR_11->locks[VAR_13] = VAR_2;

 VAR_12->refs[VAR_14] = 1;
 VAR_12->flags[VAR_14] = VAR_0;
 VAR_12->level = VAR_13;
 VAR_12->shared_level = -1;
 VAR_12->stage = VAR_3;
 VAR_12->update_ref = 0;
 VAR_12->keep_locks = 1;
 VAR_12->reada_count = FUNC_0(VAR_10);

 while (1) {
  VAR_16 = FUNC_10(VAR_6, VAR_7, VAR_11, VAR_12);
  if (VAR_16 < 0) {
   VAR_15 = VAR_16;
   break;
  }

  VAR_16 = FUNC_11(VAR_6, VAR_7, VAR_11, VAR_12, VAR_14);
  if (VAR_16 < 0)
   VAR_15 = VAR_16;
  if (VAR_16 != 0)
   break;
 }

 FUNC_8(VAR_12);
 FUNC_4(VAR_11);
 return VAR_15;
}
