
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_map_tree {int lock; } ;
struct extent_map {int dummy; } ;
struct btrfs_fs_info {int chunk_mutex; struct extent_map_tree mapping_tree; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_block_group_cache {int free_space_ctl; TYPE_1__ key; int lock; scalar_t__ removed; int trimming; struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct extent_map*) ;
 struct extent_map* FUNC_4 (struct extent_map_tree*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct extent_map_tree*,struct extent_map*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct btrfs_block_group_cache *VAR_0)
{
 struct btrfs_fs_info *VAR_1 = VAR_0->fs_info;
 struct extent_map_tree *VAR_2;
 struct extent_map *VAR_3;
 bool VAR_4;

 FUNC_8(&VAR_0->lock);
 VAR_4 = (FUNC_2(&VAR_0->trimming) &&
     VAR_0->removed);
 FUNC_9(&VAR_0->lock);

 if (VAR_4) {
  FUNC_5(&VAR_1->chunk_mutex);
  VAR_2 = &VAR_1->mapping_tree;
  FUNC_10(&VAR_2->lock);
  VAR_3 = FUNC_4(VAR_2, VAR_0->key.objectid,
        1);
  FUNC_0(!VAR_3);
  FUNC_7(VAR_2, VAR_3);
  FUNC_11(&VAR_2->lock);
  FUNC_6(&VAR_1->chunk_mutex);


  FUNC_3(VAR_3);
  FUNC_3(VAR_3);





  FUNC_1(VAR_0->free_space_ctl);
 }
}
