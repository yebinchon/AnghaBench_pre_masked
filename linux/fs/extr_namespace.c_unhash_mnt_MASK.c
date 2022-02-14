
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mountpoint {int dummy; } ;
struct TYPE_2__ {int mnt_root; } ;
struct mount {struct mountpoint* mnt_mp; int mnt_mp_list; int mnt_hash; int mnt_child; TYPE_1__ mnt; int mnt_mountpoint; struct mount* mnt_parent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct mountpoint *FUNC_3(struct mount *VAR_0)
{
 struct mountpoint *VAR_1;
 VAR_0->mnt_parent = VAR_0;
 VAR_0->mnt_mountpoint = VAR_0->mnt.mnt_root;
 FUNC_2(&VAR_0->mnt_child);
 FUNC_1(&VAR_0->mnt_hash);
 FUNC_0(&VAR_0->mnt_mp_list);
 VAR_1 = VAR_0->mnt_mp;
 VAR_0->mnt_mp = ((void*)0);
 return VAR_1;
}
