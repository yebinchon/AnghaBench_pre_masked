
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_space_info {int groups_sem; } ;
struct btrfs_block_group_cache {int flags; int reservations; int ro; struct btrfs_space_info* space_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

void FUNC_5(struct btrfs_block_group_cache *VAR_1)
{
 struct btrfs_space_info *VAR_2 = VAR_1->space_info;

 FUNC_0(VAR_1->ro);

 if (!(VAR_1->flags & VAR_0))
  return;
 FUNC_2(&VAR_2->groups_sem);
 FUNC_3(&VAR_2->groups_sem);

 FUNC_4(&VAR_1->reservations, !FUNC_1(&VAR_1->reservations));
}
