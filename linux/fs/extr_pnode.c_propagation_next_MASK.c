
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * next; } ;
struct mount {int mnt_slave_list; TYPE_1__ mnt_slave; struct mount* mnt_master; } ;


 int FUNC_0 (struct mount*) ;
 struct mount* FUNC_1 (struct mount*) ;
 int FUNC_2 (int *) ;
 struct mount* FUNC_3 (struct mount*) ;
 struct mount* FUNC_4 (struct mount*) ;

__attribute__((used)) static struct mount *FUNC_5(struct mount *VAR_0,
      struct mount *VAR_1)
{

 if (!FUNC_0(VAR_0) && !FUNC_2(&VAR_0->mnt_slave_list))
  return FUNC_1(VAR_0);

 while (1) {
  struct mount *VAR_2 = VAR_0->mnt_master;

  if (VAR_2 == VAR_1->mnt_master) {
   struct mount *VAR_3 = FUNC_3(VAR_0);
   return (VAR_3 == VAR_1) ? ((void*)0) : VAR_3;
  } else if (VAR_0->mnt_slave.next != &VAR_2->mnt_slave_list)
   return FUNC_4(VAR_0);


  VAR_0 = VAR_2;
 }
}
