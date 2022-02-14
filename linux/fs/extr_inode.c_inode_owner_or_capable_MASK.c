
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct inode {int i_uid; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct user_namespace* FUNC_1 () ;
 scalar_t__ FUNC_2 (struct user_namespace*,int ) ;
 scalar_t__ FUNC_3 (struct user_namespace*,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

bool FUNC_5(const struct inode *VAR_1)
{
 struct user_namespace *VAR_2;

 if (FUNC_4(FUNC_0(), VAR_1->i_uid))
  return 1;

 VAR_2 = FUNC_1();
 if (FUNC_2(VAR_2, VAR_1->i_uid) && FUNC_3(VAR_2, VAR_0))
  return 1;
 return 0;
}
