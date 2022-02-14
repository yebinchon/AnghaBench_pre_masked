
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct p9_fid {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int ,struct posix_acl*) ;
 int FUNC_1 (struct p9_fid*,int ,struct posix_acl*) ;

int FUNC_2(struct inode *VAR_2, struct p9_fid *VAR_3,
   struct posix_acl *VAR_4, struct posix_acl *VAR_5)
{
 FUNC_0(VAR_2, VAR_1, VAR_4);
 FUNC_0(VAR_2, VAR_0, VAR_5);
 FUNC_1(VAR_3, VAR_1, VAR_4);
 FUNC_1(VAR_3, VAR_0, VAR_5);
 return 0;
}
