
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct user_namespace {int owner; struct user_namespace const* parent; } const user_namespace ;
struct cred {int euid; int cap_permitted; struct user_namespace const* user_ns; } ;


 int FUNC_0 (int ,int ) ;
 struct user_namespace const VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(const struct cred *VAR_1, const struct cred *VAR_2)
{
 const struct user_namespace *VAR_3 = VAR_1->user_ns;
 const struct user_namespace *VAR_4 = VAR_2->user_ns;




 if (VAR_3 == VAR_4)
  return FUNC_0(VAR_2->cap_permitted, VAR_1->cap_permitted);






 for (;VAR_4 != &VAR_0; VAR_4 = VAR_4->parent) {
  if ((VAR_3 == VAR_4->parent) &&
      FUNC_1(VAR_4->owner, VAR_1->euid))
   return 1;
 }

 return 0;
}
