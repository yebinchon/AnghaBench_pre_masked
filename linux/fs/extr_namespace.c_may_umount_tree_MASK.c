
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct mount {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct mount*) ;
 struct mount* FUNC_3 (struct mount*,struct mount*) ;
 struct mount* FUNC_4 (struct vfsmount*) ;
 int FUNC_5 () ;

int FUNC_6(struct vfsmount *VAR_0)
{
 struct mount *VAR_1 = FUNC_4(VAR_0);
 int VAR_2 = 0;
 int VAR_3 = 0;
 struct mount *VAR_4;
 FUNC_0(!VAR_0);


 FUNC_1();
 for (VAR_4 = VAR_1; VAR_4; VAR_4 = FUNC_3(VAR_4, VAR_1)) {
  VAR_2 += FUNC_2(VAR_4);
  VAR_3 += 2;
 }
 FUNC_5();

 if (VAR_2 > VAR_3)
  return 0;

 return 1;
}
