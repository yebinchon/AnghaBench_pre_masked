
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,int,struct posix_acl*,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct inode *VAR_1, struct posix_acl *VAR_2, int VAR_3)
{
 if (FUNC_3(FUNC_2(FUNC_0(VAR_1))))
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_3, VAR_2, ((void*)0));
}
