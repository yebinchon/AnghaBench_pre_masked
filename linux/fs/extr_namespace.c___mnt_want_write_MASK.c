
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct TYPE_2__ {int mnt_flags; } ;
struct mount {TYPE_1__ mnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 scalar_t__ FUNC_4 (struct vfsmount*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 struct mount* FUNC_7 (struct vfsmount*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

int FUNC_10(struct vfsmount *VAR_2)
{
 struct mount *VAR_3 = FUNC_7(VAR_2);
 int VAR_4 = 0;

 FUNC_5();
 FUNC_3(VAR_3);





 FUNC_8();
 while (FUNC_0(VAR_3->mnt.mnt_flags) & VAR_1)
  FUNC_1();





 FUNC_9();
 if (FUNC_4(VAR_2)) {
  FUNC_2(VAR_3);
  VAR_4 = -VAR_0;
 }
 FUNC_6();

 return VAR_4;
}
