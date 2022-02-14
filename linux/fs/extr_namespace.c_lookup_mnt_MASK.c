
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct path {int dentry; int mnt; } ;
struct mount {struct vfsmount mnt; } ;


 struct mount* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vfsmount*,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned int FUNC_4 (int *) ;

struct vfsmount *FUNC_5(const struct path *VAR_1)
{
 struct mount *VAR_2;
 struct vfsmount *VAR_3;
 unsigned VAR_4;

 FUNC_2();
 do {
  VAR_4 = FUNC_4(&VAR_0);
  VAR_2 = FUNC_0(VAR_1->mnt, VAR_1->dentry);
  VAR_3 = VAR_2 ? &VAR_2->mnt : ((void*)0);
 } while (!FUNC_1(VAR_3, VAR_4));
 FUNC_3();
 return VAR_3;
}
