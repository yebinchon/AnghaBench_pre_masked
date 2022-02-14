
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_flags; } ;
struct path {int dentry; int mnt; } ;
struct mount {struct vfsmount mnt; } ;


 int VAR_0 ;
 struct vfsmount* FUNC_0 (struct mount*) ;
 scalar_t__ FUNC_1 (struct mount*) ;
 int VAR_1 ;
 struct mount* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

struct vfsmount *FUNC_4(const struct path *VAR_2)
{
 struct mount *VAR_3;
 VAR_3 = FUNC_2(FUNC_3(VAR_2->mnt), VAR_2->dentry, VAR_0);
 if (FUNC_1(VAR_3))
  return FUNC_0(VAR_3);
 VAR_3->mnt.mnt_flags |= VAR_1;
 return &VAR_3->mnt;
}
