
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct btrfs_space_info {struct kobject kobj; struct kobject** block_group_kobjs; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct kobject*) ;

void FUNC_2(struct btrfs_space_info *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct kobject *VAR_3;

  VAR_3 = VAR_1->block_group_kobjs[VAR_2];
  VAR_1->block_group_kobjs[VAR_2] = ((void*)0);
  if (VAR_3) {
   FUNC_0(VAR_3);
   FUNC_1(VAR_3);
  }
 }
 FUNC_0(&VAR_1->kobj);
 FUNC_1(&VAR_1->kobj);
}
