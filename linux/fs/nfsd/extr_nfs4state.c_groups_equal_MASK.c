
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_info {int ngroups; int * gid; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct group_info *VAR_0, struct group_info *VAR_1)
{
 int VAR_2;

 if (VAR_0->ngroups != VAR_1->ngroups)
  return 0;
 for (VAR_2=0; VAR_2<VAR_0->ngroups; VAR_2++)
  if (!FUNC_0(VAR_0->gid[VAR_2], VAR_1->gid[VAR_2]))
   return 0;
 return 1;
}
