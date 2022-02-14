
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_block_group_cache {int data_rwsem; } ;


 int FUNC_0 (struct btrfs_block_group_cache*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(struct btrfs_block_group_cache *VAR_0,
    int VAR_1)
{
 if (VAR_1)
  FUNC_1(&VAR_0->data_rwsem);
 FUNC_0(VAR_0);
}
