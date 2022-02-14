
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_space_info {int lock; int bytes_readonly; } ;
struct TYPE_2__ {scalar_t__ offset; } ;
struct btrfs_block_group_cache {int lock; int ro_list; int item; scalar_t__ bytes_super; scalar_t__ pinned; scalar_t__ reserved; TYPE_1__ key; int ro; struct btrfs_space_info* space_info; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct btrfs_block_group_cache *VAR_0)
{
 struct btrfs_space_info *VAR_1 = VAR_0->space_info;
 u64 VAR_2;

 FUNC_0(!VAR_0->ro);

 FUNC_3(&VAR_1->lock);
 FUNC_3(&VAR_0->lock);
 if (!--VAR_0->ro) {
  VAR_2 = VAR_0->key.offset - VAR_0->reserved -
       VAR_0->pinned - VAR_0->bytes_super -
       FUNC_1(&VAR_0->item);
  VAR_1->bytes_readonly -= VAR_2;
  FUNC_2(&VAR_0->ro_list);
 }
 FUNC_4(&VAR_0->lock);
 FUNC_4(&VAR_1->lock);
}
