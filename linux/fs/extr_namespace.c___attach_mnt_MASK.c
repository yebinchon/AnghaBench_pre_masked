
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int mnt_mounts; int mnt_child; int mnt_mountpoint; int mnt; int mnt_hash; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct mount *VAR_0, struct mount *VAR_1)
{
 FUNC_0(&VAR_0->mnt_hash,
      FUNC_2(&VAR_1->mnt, VAR_0->mnt_mountpoint));
 FUNC_1(&VAR_0->mnt_child, &VAR_1->mnt_mounts);
}
