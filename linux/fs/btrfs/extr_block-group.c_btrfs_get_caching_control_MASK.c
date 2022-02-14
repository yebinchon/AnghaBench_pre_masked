
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_caching_control {int count; } ;
struct btrfs_block_group_cache {int lock; struct btrfs_caching_control* caching_ctl; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct btrfs_caching_control *FUNC_3(
  struct btrfs_block_group_cache *VAR_0)
{
 struct btrfs_caching_control *VAR_1;

 FUNC_1(&VAR_0->lock);
 if (!VAR_0->caching_ctl) {
  FUNC_2(&VAR_0->lock);
  return ((void*)0);
 }

 VAR_1 = VAR_0->caching_ctl;
 FUNC_0(&VAR_1->count);
 FUNC_2(&VAR_0->lock);
 return VAR_1;
}
