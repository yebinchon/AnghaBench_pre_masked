
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct mount {scalar_t__ mnt_expiry_mark; } ;


 int FUNC_0 (struct mount*) ;
 struct mount* FUNC_1 (struct vfsmount*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

void FUNC_3(struct vfsmount *VAR_0)
{
 if (VAR_0) {
  struct mount *VAR_1 = FUNC_1(VAR_0);

  if (FUNC_2(VAR_1->mnt_expiry_mark))
   VAR_1->mnt_expiry_mark = 0;
  FUNC_0(VAR_1);
 }
}
