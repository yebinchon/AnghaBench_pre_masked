
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_flags; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct mount*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;
 struct mount* FUNC_4 (struct vfsmount*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;

int FUNC_8(struct vfsmount *VAR_3, unsigned VAR_4)
{
 struct mount *VAR_5;
 if (FUNC_3(&VAR_2, VAR_4))
  return 1;
 if (VAR_3 == ((void*)0))
  return 0;
 VAR_5 = FUNC_4(VAR_3);
 FUNC_2(VAR_5, 1);
 FUNC_5();
 if (FUNC_0(!FUNC_3(&VAR_2, VAR_4)))
  return 0;
 if (VAR_3->mnt_flags & VAR_1) {
  FUNC_2(VAR_5, -1);
  return 1;
 }
 FUNC_1();
 if (FUNC_6(VAR_3->mnt_flags & VAR_0)) {
  FUNC_2(VAR_5, -1);
  FUNC_7();
  return 1;
 }
 FUNC_7();

 return -1;
}
