
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_space_info {int groups_sem; int * block_groups; } ;
struct btrfs_block_group_cache {int list; int flags; struct btrfs_space_info* space_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct btrfs_block_group_cache*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct btrfs_block_group_cache *VAR_0)
{
 struct btrfs_space_info *VAR_1 = VAR_0->space_info;
 int VAR_2 = FUNC_0(VAR_0->flags);
 bool VAR_3 = 0;

 FUNC_2(&VAR_1->groups_sem);
 if (FUNC_4(&VAR_1->block_groups[VAR_2]))
  VAR_3 = 1;
 FUNC_3(&VAR_0->list, &VAR_1->block_groups[VAR_2]);
 FUNC_5(&VAR_1->groups_sem);

 if (VAR_3)
  FUNC_1(VAR_0);
}
