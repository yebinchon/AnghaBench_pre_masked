
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {scalar_t__ mnt_group_id; } ;


 int FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*) ;
 struct mount* FUNC_2 (struct mount*,struct mount*) ;

__attribute__((used)) static void FUNC_3(struct mount *VAR_0, struct mount *VAR_1)
{
 struct mount *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 != VAR_1; VAR_2 = FUNC_2(VAR_2, VAR_0)) {
  if (VAR_2->mnt_group_id && !FUNC_0(VAR_2))
   FUNC_1(VAR_2);
 }
}
