
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cred {TYPE_1__* group_info; int fsgid; int fsuid; } ;
struct TYPE_2__ {int ngroups; int * gid; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool
FUNC_2(const struct cred *VAR_0, const struct cred *VAR_1)
{
 int VAR_2;

 if (!FUNC_1(VAR_0->fsuid, VAR_1->fsuid))
  return 0;
 if (!FUNC_0(VAR_0->fsgid, VAR_1->fsgid))
  return 0;
 if (VAR_0->group_info == ((void*)0) || VAR_1->group_info == ((void*)0))
  return VAR_0->group_info == VAR_1->group_info;
 if (VAR_0->group_info->ngroups != VAR_1->group_info->ngroups)
  return 0;
 for (VAR_2 = 0; VAR_2 < VAR_0->group_info->ngroups; VAR_2++) {
  if (!FUNC_0(VAR_0->group_info->gid[VAR_2], VAR_1->group_info->gid[VAR_2]))
   return 0;
 }
 return 1;
}
