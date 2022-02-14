
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct mnt_namespace {int dummy; } ;
struct TYPE_3__ {struct mnt_namespace* mnt_ns; } ;


 int VAR_0 ;
 int FUNC_0 (struct mnt_namespace*) ;
 scalar_t__ FUNC_1 (struct mnt_namespace*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (struct vfsmount*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 () ;

void FUNC_8(struct vfsmount *VAR_1)
{
 struct mnt_namespace *VAR_2;
 FUNC_3();
 FUNC_2();
 VAR_2 = FUNC_5(VAR_1)->mnt_ns;
 if (VAR_2) {
  if (FUNC_1(VAR_2))
   FUNC_6(FUNC_5(VAR_1), VAR_0);
  else
   VAR_2 = ((void*)0);
 }
 FUNC_7();
 FUNC_4();
 if (VAR_2)
  FUNC_0(VAR_2);
}
