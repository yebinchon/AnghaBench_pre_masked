
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {scalar_t__ mnt_sb; scalar_t__ mnt_root; } ;
struct path {scalar_t__ dentry; TYPE_1__* mnt; } ;
struct mount {int mnt_expire; } ;
struct TYPE_2__ {scalar_t__ mnt_sb; int mnt_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mount*,struct path*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mount*) ;
 int FUNC_5 (struct vfsmount*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 struct mount* FUNC_8 (struct vfsmount*) ;

int FUNC_9(struct vfsmount *VAR_2, struct path *VAR_3)
{
 struct mount *VAR_4 = FUNC_8(VAR_2);
 int VAR_5;



 FUNC_0(FUNC_4(VAR_4) < 2);

 if (VAR_2->mnt_sb == VAR_3->mnt->mnt_sb &&
     VAR_2->mnt_root == VAR_3->dentry) {
  VAR_5 = -VAR_0;
  goto fail;
 }

 VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_3->mnt->mnt_flags | VAR_1);
 if (!VAR_5)
  return 0;
fail:

 if (!FUNC_3(&VAR_4->mnt_expire)) {
  FUNC_6();
  FUNC_2(&VAR_4->mnt_expire);
  FUNC_7();
 }
 FUNC_5(VAR_2);
 FUNC_5(VAR_2);
 return VAR_5;
}
