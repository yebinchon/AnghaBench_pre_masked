
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfsmount {int mnt_root; } ;
struct path {struct vfsmount* mnt; TYPE_2__* dentry; } ;
struct nameidata {int flags; } ;
struct TYPE_5__ {TYPE_1__* d_op; int d_flags; } ;
struct TYPE_4__ {int (* d_manage ) (struct path*,int) ;} ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct path*,struct nameidata*,int*) ;
 struct vfsmount* FUNC_5 (struct path*) ;
 int FUNC_6 (struct vfsmount*) ;
 int FUNC_7 (struct path*,struct nameidata*) ;
 int FUNC_8 (struct path*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct path *VAR_6, struct nameidata *VAR_7)
{
 struct vfsmount *VAR_8 = VAR_6->mnt;
 unsigned VAR_9;
 bool VAR_10 = 0;
 int VAR_11 = 0;




 while (VAR_9 = FUNC_1(VAR_6->dentry->d_flags),
        VAR_9 &= VAR_0,
        FUNC_9(VAR_9 != 0)) {


  if (VAR_9 & VAR_1) {
   FUNC_0(!VAR_6->dentry->d_op);
   FUNC_0(!VAR_6->dentry->d_op->d_manage);
   VAR_11 = VAR_6->dentry->d_op->d_manage(VAR_6, 0);
   if (VAR_11 < 0)
    break;
  }


  if (VAR_9 & VAR_2) {
   struct vfsmount *VAR_12 = FUNC_5(VAR_6);
   if (VAR_12) {
    FUNC_3(VAR_6->dentry);
    if (VAR_10)
     FUNC_6(VAR_6->mnt);
    VAR_6->mnt = VAR_12;
    VAR_6->dentry = FUNC_2(VAR_12->mnt_root);
    VAR_10 = 1;
    continue;
   }





  }


  if (VAR_9 & VAR_3) {
   VAR_11 = FUNC_4(VAR_6, VAR_7, &VAR_10);
   if (VAR_11 < 0)
    break;
   continue;
  }


  break;
 }

 if (VAR_10 && VAR_6->mnt == VAR_8)
  FUNC_6(VAR_6->mnt);
 if (VAR_11 == -VAR_4 || !VAR_11)
  VAR_11 = 1;
 if (VAR_10)
  VAR_7->flags |= VAR_5;
 if (FUNC_9(VAR_11 < 0))
  FUNC_7(VAR_6, VAR_7);
 return VAR_11;
}
