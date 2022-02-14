
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct p9_fid {int dummy; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct posix_acl**,int ,int ) ;
 int FUNC_2 (struct posix_acl*) ;
 int FUNC_3 (struct inode*,int ,struct posix_acl*) ;
 struct posix_acl* FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct p9_fid*,int ,struct posix_acl*) ;

int FUNC_6(struct inode *VAR_3, struct p9_fid *VAR_4)
{
 int VAR_5 = 0;
 struct posix_acl *VAR_6;

 if (FUNC_0(VAR_3->i_mode))
  return -VAR_1;
 VAR_6 = FUNC_4(VAR_3, VAR_0);
 if (VAR_6) {
  VAR_5 = FUNC_1(&VAR_6, VAR_2, VAR_3->i_mode);
  if (VAR_5)
   return VAR_5;
  FUNC_3(VAR_3, VAR_0, VAR_6);
  VAR_5 = FUNC_5(VAR_4, VAR_0, VAR_6);
  FUNC_2(VAR_6);
 }
 return VAR_5;
}
