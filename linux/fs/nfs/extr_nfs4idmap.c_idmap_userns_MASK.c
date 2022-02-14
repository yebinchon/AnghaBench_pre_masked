
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct idmap {TYPE_1__* cred; } ;
struct TYPE_2__ {struct user_namespace* user_ns; } ;


 struct user_namespace VAR_0 ;

__attribute__((used)) static struct user_namespace *FUNC_0(const struct idmap *VAR_1)
{
 if (VAR_1 && VAR_1->cred)
  return VAR_1->cred->user_ns;
 return &VAR_0;
}
