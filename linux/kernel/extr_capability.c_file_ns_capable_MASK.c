
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct file {int f_cred; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,struct user_namespace*,int,int ) ;

bool FUNC_3(const struct file *VAR_1, struct user_namespace *VAR_2,
       int VAR_3)
{

 if (FUNC_0(!FUNC_1(VAR_3)))
  return 0;

 if (FUNC_2(VAR_1->f_cred, VAR_2, VAR_3, VAR_0) == 0)
  return 1;

 return 0;
}
