
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_free_space_ctl {int tree_lock; } ;
struct btrfs_free_cluster {int lock; struct btrfs_block_group_cache* block_group; } ;
struct btrfs_block_group_cache {struct btrfs_free_space_ctl* free_space_ctl; int count; } ;


 int FUNC_0 (struct btrfs_block_group_cache*,struct btrfs_free_cluster*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct btrfs_block_group_cache*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(
          struct btrfs_block_group_cache *VAR_0,
          struct btrfs_free_cluster *VAR_1)
{
 struct btrfs_free_space_ctl *VAR_2;
 int VAR_3;


 FUNC_3(&VAR_1->lock);
 if (!VAR_0) {
  VAR_0 = VAR_1->block_group;
  if (!VAR_0) {
   FUNC_4(&VAR_1->lock);
   return 0;
  }
 } else if (VAR_1->block_group != VAR_0) {

  FUNC_4(&VAR_1->lock);
  return 0;
 }
 FUNC_1(&VAR_0->count);
 FUNC_4(&VAR_1->lock);

 VAR_2 = VAR_0->free_space_ctl;


 FUNC_3(&VAR_2->tree_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_4(&VAR_2->tree_lock);


 FUNC_2(VAR_0);
 return VAR_3;
}
