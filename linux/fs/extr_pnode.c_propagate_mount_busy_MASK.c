
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int mnt_mounts; int mnt_mountpoint; int mnt; struct mount* mnt_parent; } ;


 struct mount* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mount*,int) ;
 struct mount* FUNC_2 (struct mount*) ;
 int FUNC_3 (int *) ;
 struct mount* FUNC_4 (struct mount*,struct mount*) ;

int FUNC_5(struct mount *VAR_0, int VAR_1)
{
 struct mount *VAR_2, *VAR_3, *VAR_4;
 struct mount *VAR_5 = VAR_0->mnt_parent;

 if (VAR_0 == VAR_5)
  return FUNC_1(VAR_0, VAR_1);






 if (!FUNC_3(&VAR_0->mnt_mounts) || FUNC_1(VAR_0, VAR_1))
  return 1;

 for (VAR_2 = FUNC_4(VAR_5, VAR_5); VAR_2;
        VAR_2 = FUNC_4(VAR_2, VAR_5)) {
  int VAR_6 = 1;
  VAR_3 = FUNC_0(&VAR_2->mnt, VAR_0->mnt_mountpoint);
  if (!VAR_3)
   continue;




  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4)
   VAR_6 += 1;
  else if (!FUNC_3(&VAR_3->mnt_mounts))
   continue;

  if (FUNC_1(VAR_3, VAR_6))
   return 1;
 }
 return 0;
}
