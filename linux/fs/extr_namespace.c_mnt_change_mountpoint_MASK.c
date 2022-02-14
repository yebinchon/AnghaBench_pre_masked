
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mountpoint {int dummy; } ;
struct mount {int mnt_hash; int mnt_mp_list; int mnt_child; struct mount* mnt_parent; struct mountpoint* mnt_mp; } ;


 int FUNC_0 (struct mount*,struct mount*,struct mountpoint*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mount*,int) ;
 int FUNC_5 (struct mountpoint*) ;

void FUNC_6(struct mount *VAR_0, struct mountpoint *VAR_1, struct mount *VAR_2)
{
 struct mountpoint *VAR_3 = VAR_2->mnt_mp;
 struct mount *VAR_4 = VAR_2->mnt_parent;

 FUNC_3(&VAR_2->mnt_child);
 FUNC_1(&VAR_2->mnt_mp_list);
 FUNC_2(&VAR_2->mnt_hash);

 FUNC_0(VAR_2, VAR_0, VAR_1);

 FUNC_5(VAR_3);
 FUNC_4(VAR_4, -1);
}
