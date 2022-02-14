
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct map_lookup {int num_stripes; TYPE_1__* stripes; } ;
struct extent_map_tree {int lock; } ;
struct extent_map {scalar_t__ len; scalar_t__ start; struct map_lookup* map_lookup; } ;
struct btrfs_fs_info {struct extent_map_tree mapping_tree; } ;
struct btrfs_device {int dummy; } ;
struct TYPE_2__ {struct btrfs_device* dev; } ;


 int FUNC_0 (struct extent_map*) ;
 struct extent_map* FUNC_1 (struct extent_map_tree*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
      struct btrfs_fs_info *VAR_0,
      struct btrfs_device *VAR_1,
      struct btrfs_device *VAR_2)
{
 struct extent_map_tree *VAR_3 = &VAR_0->mapping_tree;
 struct extent_map *VAR_4;
 struct map_lookup *VAR_5;
 u64 VAR_6 = 0;
 int VAR_7;

 FUNC_2(&VAR_3->lock);
 do {
  VAR_4 = FUNC_1(VAR_3, VAR_6, (u64)-1);
  if (!VAR_4)
   break;
  VAR_5 = VAR_4->map_lookup;
  for (VAR_7 = 0; VAR_7 < VAR_5->num_stripes; VAR_7++)
   if (VAR_1 == VAR_5->stripes[VAR_7].dev)
    VAR_5->stripes[VAR_7].dev = VAR_2;
  VAR_6 = VAR_4->start + VAR_4->len;
  FUNC_0(VAR_4);
 } while (VAR_6);
 FUNC_3(&VAR_3->lock);
}
