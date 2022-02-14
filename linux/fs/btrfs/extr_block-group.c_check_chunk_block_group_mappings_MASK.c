
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct extent_map_tree {int lock; } ;
struct extent_map {scalar_t__ start; scalar_t__ len; TYPE_1__* map_lookup; } ;
struct btrfs_fs_info {struct extent_map_tree mapping_tree; } ;
struct TYPE_4__ {scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_block_group_cache {int flags; TYPE_2__ key; } ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_fs_info*,char*,scalar_t__,scalar_t__,...) ;
 struct btrfs_block_group_cache* FUNC_1 (struct btrfs_fs_info*,scalar_t__) ;
 int FUNC_2 (struct btrfs_block_group_cache*) ;
 int FUNC_3 (struct extent_map*) ;
 struct extent_map* FUNC_4 (struct extent_map_tree*,scalar_t__,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct btrfs_fs_info *VAR_2)
{
 struct extent_map_tree *VAR_3 = &VAR_2->mapping_tree;
 struct extent_map *VAR_4;
 struct btrfs_block_group_cache *VAR_5;
 u64 VAR_6 = 0;
 int VAR_7 = 0;

 while (1) {
  FUNC_5(&VAR_3->lock);





  VAR_4 = FUNC_4(VAR_3, VAR_6, 1);
  FUNC_6(&VAR_3->lock);
  if (!VAR_4)
   break;

  VAR_5 = FUNC_1(VAR_2, VAR_4->start);
  if (!VAR_5) {
   FUNC_0(VAR_2,
 "chunk start=%llu len=%llu doesn't have corresponding block group",
         VAR_4->start, VAR_4->len);
   VAR_7 = -VAR_1;
   FUNC_3(VAR_4);
   break;
  }
  if (VAR_5->key.objectid != VAR_4->start ||
      VAR_5->key.offset != VAR_4->len ||
      (VAR_5->flags & VAR_0) !=
      (VAR_4->map_lookup->type & VAR_0)) {
   FUNC_0(VAR_2,
"chunk start=%llu len=%llu flags=0x%llx doesn't match block group start=%llu len=%llu flags=0x%llx",
    VAR_4->start, VAR_4->len,
    VAR_4->map_lookup->type & VAR_0,
    VAR_5->key.objectid, VAR_5->key.offset,
    VAR_5->flags & VAR_0);
   VAR_7 = -VAR_1;
   FUNC_3(VAR_4);
   FUNC_2(VAR_5);
   break;
  }
  VAR_6 = VAR_4->start + VAR_4->len;
  FUNC_3(VAR_4);
  FUNC_2(VAR_5);
 }
 return VAR_7;
}
