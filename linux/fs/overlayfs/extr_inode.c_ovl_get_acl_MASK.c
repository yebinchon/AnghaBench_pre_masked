
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_sb; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 struct posix_acl* FUNC_2 (struct inode*,int) ;
 struct inode* FUNC_3 (struct inode*) ;
 struct cred* FUNC_4 (int ) ;
 int FUNC_5 (struct cred const*) ;

struct posix_acl *FUNC_6(struct inode *VAR_1, int VAR_2)
{
 struct inode *VAR_3 = FUNC_3(VAR_1);
 const struct cred *VAR_4;
 struct posix_acl *VAR_5;

 if (!FUNC_0(VAR_0) || !FUNC_1(VAR_3))
  return ((void*)0);

 VAR_4 = FUNC_4(VAR_1->i_sb);
 VAR_5 = FUNC_2(VAR_3, VAR_2);
 FUNC_5(VAR_4);

 return VAR_5;
}
