
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct file_system_type {int name; } ;


 scalar_t__ FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (struct vfsmount*) ;
 int VAR_0 ;
 int FUNC_2 (struct vfsmount*) ;
 int FUNC_3 (struct vfsmount*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 struct vfsmount* FUNC_7 (struct file_system_type*,int ,int ,int *) ;

int FUNC_8(struct file_system_type *VAR_2, struct vfsmount **VAR_3, int *VAR_4)
{
 struct vfsmount *VAR_5 = ((void*)0);
 FUNC_4(&VAR_1);
 if (FUNC_6(!*VAR_3)) {
  FUNC_5(&VAR_1);
  VAR_5 = FUNC_7(VAR_2, VAR_0, VAR_2->name, ((void*)0));
  if (FUNC_0(VAR_5))
   return FUNC_1(VAR_5);
  FUNC_4(&VAR_1);
  if (!*VAR_3)
   *VAR_3 = VAR_5;
 }
 FUNC_2(*VAR_3);
 ++*VAR_4;
 FUNC_5(&VAR_1);
 FUNC_3(VAR_5);
 return 0;
}
