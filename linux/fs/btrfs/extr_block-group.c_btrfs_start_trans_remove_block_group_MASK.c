
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct map_lookup {int num_stripes; } ;
struct extent_map_tree {int lock; } ;
struct extent_map {scalar_t__ const start; struct map_lookup* map_lookup; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_fs_info {int extent_root; struct extent_map_tree mapping_tree; } ;


 int FUNC_0 (int ) ;
 struct btrfs_trans_handle* FUNC_1 (int ,unsigned int,int) ;
 int FUNC_2 (struct extent_map*) ;
 struct extent_map* FUNC_3 (struct extent_map_tree*,scalar_t__ const,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct btrfs_trans_handle *FUNC_6(
  struct btrfs_fs_info *VAR_0, const u64 VAR_1)
{
 struct extent_map_tree *VAR_2 = &VAR_0->mapping_tree;
 struct extent_map *VAR_3;
 struct map_lookup *VAR_4;
 unsigned int VAR_5;

 FUNC_4(&VAR_2->lock);
 VAR_3 = FUNC_3(VAR_2, VAR_1, 1);
 FUNC_5(&VAR_2->lock);
 FUNC_0(VAR_3 && VAR_3->start == VAR_1);
 VAR_4 = VAR_3->map_lookup;
 VAR_5 = 3 + VAR_4->num_stripes;
 FUNC_2(VAR_3);

 return FUNC_1(VAR_0->extent_root,
          VAR_5, 1);
}
