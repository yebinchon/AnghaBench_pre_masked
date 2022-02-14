
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct path {int dentry; int mnt; } ;
struct mount {struct vfsmount mnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vfsmount* FUNC_0 (struct mount*) ;
 struct vfsmount* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mount*) ;
 scalar_t__ FUNC_3 (struct mount*) ;
 struct mount* FUNC_4 (struct mount*,int ,int ) ;
 struct mount* FUNC_5 (int ) ;

struct vfsmount *FUNC_6(const struct path *VAR_2)
{
 struct mount *VAR_3 = FUNC_5(VAR_2->mnt);
 struct mount *VAR_4;

 if (FUNC_3(VAR_3))
  return FUNC_1(-VAR_1);

 VAR_4 = FUNC_4(VAR_3, VAR_2->dentry, VAR_0);
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);

 return &VAR_4->mnt;
}
