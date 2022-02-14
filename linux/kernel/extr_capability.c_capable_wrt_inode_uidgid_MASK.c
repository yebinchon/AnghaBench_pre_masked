
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct inode {int dummy; } ;


 struct user_namespace* FUNC_0 () ;
 scalar_t__ FUNC_1 (struct user_namespace*,int) ;
 scalar_t__ FUNC_2 (struct user_namespace*,struct inode const*) ;

bool FUNC_3(const struct inode *VAR_0, int VAR_1)
{
 struct user_namespace *VAR_2 = FUNC_0();

 return FUNC_1(VAR_2, VAR_1) && FUNC_2(VAR_2, VAR_0);
}
