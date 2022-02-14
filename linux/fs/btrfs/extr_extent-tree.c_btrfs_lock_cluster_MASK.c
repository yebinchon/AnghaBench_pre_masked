
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_free_cluster {struct btrfs_block_group_cache* block_group; int refill_lock; } ;
struct btrfs_block_group_cache {int data_rwsem; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_block_group_cache*) ;
 int FUNC_1 (struct btrfs_block_group_cache*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct btrfs_block_group_cache *
FUNC_7(struct btrfs_block_group_cache *VAR_1,
     struct btrfs_free_cluster *VAR_2,
     int VAR_3)
{
 struct btrfs_block_group_cache *VAR_4 = ((void*)0);

 FUNC_4(&VAR_2->refill_lock);
 while (1) {
  VAR_4 = VAR_2->block_group;
  if (!VAR_4)
   return ((void*)0);

  if (VAR_4 == VAR_1)
   return VAR_4;

  FUNC_0(VAR_4);

  if (!VAR_3)
   return VAR_4;

  if (FUNC_3(&VAR_4->data_rwsem))
   return VAR_4;

  FUNC_5(&VAR_2->refill_lock);


  FUNC_2(&VAR_4->data_rwsem, VAR_0);

  FUNC_4(&VAR_2->refill_lock);
  if (VAR_4 == VAR_2->block_group)
   return VAR_4;

  FUNC_6(&VAR_4->data_rwsem);
  FUNC_1(VAR_4);
 }
}
