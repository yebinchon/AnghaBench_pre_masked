
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct path {int dentry; int mnt; } ;
struct mount {struct vfsmount mnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vfsmount* FUNC_0 (struct mount*) ;
 struct mount* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mount*) ;
 int FUNC_3 (int ) ;
 struct mount* FUNC_4 (int ,int ,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

struct vfsmount *FUNC_8(const struct path *VAR_3)
{
 struct mount *VAR_4;
 FUNC_5();
 if (!FUNC_3(FUNC_7(VAR_3->mnt)))
  VAR_4 = FUNC_1(-VAR_2);
 else
  VAR_4 = FUNC_4(FUNC_7(VAR_3->mnt), VAR_3->dentry,
     VAR_0 | VAR_1);
 FUNC_6();
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);
 return &VAR_4->mnt;
}
