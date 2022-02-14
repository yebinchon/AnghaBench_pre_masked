
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_info {int ngroups; int * gid; } ;
struct cred {struct group_info* group_info; int fsgid; int fsuid; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

int FUNC_4(const struct cred *VAR_0, const struct cred *VAR_1)
{
 struct group_info *VAR_2, *VAR_3;
 int VAR_4;

 if (VAR_0 == VAR_1)
  return 0;
 if (FUNC_3(VAR_0->fsuid, VAR_1->fsuid))
  return -1;
 if (FUNC_2(VAR_0->fsuid, VAR_1->fsuid))
  return 1;

 if (FUNC_1(VAR_0->fsgid, VAR_1->fsgid))
  return -1;
 if (FUNC_0(VAR_0->fsgid, VAR_1->fsgid))
  return 1;

 VAR_2 = VAR_0->group_info;
 VAR_3 = VAR_1->group_info;
 if (VAR_2 == VAR_3)
  return 0;
 if (VAR_2 == ((void*)0))
  return -1;
 if (VAR_3 == ((void*)0))
  return 1;
 if (VAR_2->ngroups < VAR_3->ngroups)
  return -1;
 if (VAR_2->ngroups > VAR_3->ngroups)
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_2->ngroups; VAR_4++) {
  if (FUNC_1(VAR_2->gid[VAR_4], VAR_3->gid[VAR_4]))
   return -1;
  if (FUNC_0(VAR_2->gid[VAR_4], VAR_3->gid[VAR_4]))
   return 1;
 }
 return 0;
}
