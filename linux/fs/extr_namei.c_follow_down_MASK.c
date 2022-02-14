
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {int mnt_root; } ;
struct path {TYPE_2__* dentry; struct vfsmount* mnt; } ;
struct TYPE_5__ {TYPE_1__* d_op; int d_flags; } ;
struct TYPE_4__ {int (* d_manage ) (struct path*,int) ;} ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 struct vfsmount* FUNC_4 (struct path*) ;
 int FUNC_5 (struct vfsmount*) ;
 int FUNC_6 (struct path*,int) ;
 int FUNC_7 (unsigned int) ;

int FUNC_8(struct path *VAR_4)
{
 unsigned VAR_5;
 int VAR_6;

 while (VAR_5 = FUNC_1(VAR_4->dentry->d_flags),
        FUNC_7(VAR_5 & VAR_0)) {
  if (VAR_5 & VAR_1) {
   FUNC_0(!VAR_4->dentry->d_op);
   FUNC_0(!VAR_4->dentry->d_op->d_manage);
   VAR_6 = VAR_4->dentry->d_op->d_manage(VAR_4, 0);
   if (VAR_6 < 0)
    return VAR_6 == -VAR_3 ? 0 : VAR_6;
  }


  if (VAR_5 & VAR_2) {
   struct vfsmount *VAR_7 = FUNC_4(VAR_4);
   if (!VAR_7)
    break;
   FUNC_3(VAR_4->dentry);
   FUNC_5(VAR_4->mnt);
   VAR_4->mnt = VAR_7;
   VAR_4->dentry = FUNC_2(VAR_7->mnt_root);
   continue;
  }


  break;
 }
 return 0;
}
