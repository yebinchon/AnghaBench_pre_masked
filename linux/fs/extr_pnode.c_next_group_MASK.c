
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* next; } ;
struct mount {scalar_t__ mnt_group_id; TYPE_1__ mnt_slave; TYPE_1__ mnt_slave_list; struct mount* mnt_master; } ;


 int FUNC_0 (struct mount*) ;
 struct mount* FUNC_1 (struct mount*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct mount* FUNC_3 (struct mount*) ;
 struct mount* FUNC_4 (struct mount*) ;

__attribute__((used)) static struct mount *FUNC_5(struct mount *VAR_0, struct mount *VAR_1)
{
 while (1) {
  while (1) {
   struct mount *VAR_2;
   if (!FUNC_0(VAR_0) && !FUNC_2(&VAR_0->mnt_slave_list))
    return FUNC_1(VAR_0);
   VAR_2 = FUNC_3(VAR_0);
   if (VAR_0->mnt_group_id == VAR_1->mnt_group_id) {
    if (VAR_2 == VAR_1)
     return ((void*)0);
   } else if (VAR_0->mnt_slave.next != &VAR_2->mnt_slave)
    break;
   VAR_0 = VAR_2;
  }

  while (1) {
   struct mount *VAR_3 = VAR_0->mnt_master;
   if (VAR_0->mnt_slave.next != &VAR_3->mnt_slave_list)
    return FUNC_4(VAR_0);
   VAR_0 = FUNC_3(VAR_3);
   if (VAR_3->mnt_group_id == VAR_1->mnt_group_id)
    break;
   if (VAR_3->mnt_slave.next == &VAR_0->mnt_slave)
    break;
   VAR_0 = VAR_3;
  }
  if (VAR_0 == VAR_1)
   return ((void*)0);
 }
}
