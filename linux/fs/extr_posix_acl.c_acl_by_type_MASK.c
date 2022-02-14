
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {struct posix_acl* i_default_acl; struct posix_acl* i_acl; } ;




 int FUNC_0 () ;

__attribute__((used)) static struct posix_acl **FUNC_1(struct inode *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 129:
  return &VAR_0->i_acl;
 case 128:
  return &VAR_0->i_default_acl;
 default:
  FUNC_0();
 }
}
