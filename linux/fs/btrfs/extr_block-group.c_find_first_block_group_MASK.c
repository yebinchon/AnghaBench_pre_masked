
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct extent_map_tree {int lock; } ;
struct extent_map {scalar_t__ start; scalar_t__ len; TYPE_2__* map_lookup; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct btrfs_fs_info {struct btrfs_root* extent_root; } ;
struct btrfs_block_group_item {int dummy; } ;
typedef int bg ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {struct extent_map_tree mapping_tree; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct btrfs_block_group_item*) ;
 int FUNC_1 (struct btrfs_fs_info*,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_4 (struct extent_buffer*,int) ;
 int FUNC_5 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_6 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_7 (struct extent_map*) ;
 struct extent_map* FUNC_8 (struct extent_map_tree*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct extent_buffer*,struct btrfs_block_group_item*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct btrfs_fs_info *VAR_4,
      struct btrfs_path *VAR_5,
      struct btrfs_key *VAR_6)
{
 struct btrfs_root *VAR_7 = VAR_4->extent_root;
 int VAR_8 = 0;
 struct btrfs_key VAR_9;
 struct extent_buffer *VAR_10;
 struct btrfs_block_group_item VAR_11;
 u64 VAR_12;
 int VAR_13;

 VAR_8 = FUNC_6(((void*)0), VAR_7, VAR_6, VAR_5, 0, 0);
 if (VAR_8 < 0)
  goto out;

 while (1) {
  VAR_13 = VAR_5->slots[0];
  VAR_10 = VAR_5->nodes[0];
  if (VAR_13 >= FUNC_2(VAR_10)) {
   VAR_8 = FUNC_5(VAR_7, VAR_5);
   if (VAR_8 == 0)
    continue;
   if (VAR_8 < 0)
    goto out;
   break;
  }
  FUNC_3(VAR_10, &VAR_9, VAR_13);

  if (VAR_9.objectid >= VAR_6->objectid &&
      VAR_9.type == VAR_0) {
   struct extent_map_tree *VAR_14;
   struct extent_map *VAR_15;

   VAR_14 = &VAR_7->fs_info->mapping_tree;
   FUNC_10(&VAR_14->lock);
   VAR_15 = FUNC_8(VAR_14, VAR_9.objectid,
         VAR_9.offset);
   FUNC_11(&VAR_14->lock);
   if (!VAR_15) {
    FUNC_1(VAR_4,
   "logical %llu len %llu found bg but no related chunk",
       VAR_9.objectid, VAR_9.offset);
    VAR_8 = -VAR_2;
   } else if (VAR_15->start != VAR_9.objectid ||
       VAR_15->len != VAR_9.offset) {
    FUNC_1(VAR_4,
  "block group %llu len %llu mismatch with chunk %llu len %llu",
       VAR_9.objectid, VAR_9.offset,
       VAR_15->start, VAR_15->len);
    VAR_8 = -VAR_3;
   } else {
    FUNC_9(VAR_10, &VAR_11,
     FUNC_4(VAR_10, VAR_13),
     sizeof(VAR_11));
    VAR_12 = FUNC_0(&VAR_11) &
     VAR_1;

    if (VAR_12 != (VAR_15->map_lookup->type &
           VAR_1)) {
     FUNC_1(VAR_4,
"block group %llu len %llu type flags 0x%llx mismatch with chunk type flags 0x%llx",
      VAR_9.objectid,
      VAR_9.offset, VAR_12,
      (VAR_1 &
       VAR_15->map_lookup->type));
     VAR_8 = -VAR_3;
    } else {
     VAR_8 = 0;
    }
   }
   FUNC_7(VAR_15);
   goto out;
  }
  VAR_5->slots[0]++;
 }
out:
 return VAR_8;
}
