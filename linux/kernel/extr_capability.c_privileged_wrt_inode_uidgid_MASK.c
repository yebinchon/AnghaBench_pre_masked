
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct inode {int i_gid; int i_uid; } ;


 scalar_t__ FUNC_0 (struct user_namespace*,int ) ;
 scalar_t__ FUNC_1 (struct user_namespace*,int ) ;

bool FUNC_2(struct user_namespace *VAR_0, const struct inode *VAR_1)
{
 return FUNC_1(VAR_0, VAR_1->i_uid) &&
  FUNC_0(VAR_0, VAR_1->i_gid);
}
