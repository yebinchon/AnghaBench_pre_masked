
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int mnt_group_id; } ;


 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*,struct mount*) ;
 int FUNC_2 (struct mount*) ;
 struct mount* FUNC_3 (struct mount*,struct mount*) ;

__attribute__((used)) static int FUNC_4(struct mount *VAR_0, bool VAR_1)
{
 struct mount *VAR_2;

 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_1 ? FUNC_3(VAR_2, VAR_0) : ((void*)0)) {
  if (!VAR_2->mnt_group_id && !FUNC_0(VAR_2)) {
   int VAR_3 = FUNC_2(VAR_2);
   if (VAR_3) {
    FUNC_1(VAR_0, VAR_2);
    return VAR_3;
   }
  }
 }

 return 0;
}
