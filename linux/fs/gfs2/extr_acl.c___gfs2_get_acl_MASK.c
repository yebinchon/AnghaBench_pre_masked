
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_inode {int i_eattr; } ;


 struct posix_acl* FUNC_0 (int) ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (struct gfs2_inode*,char const*,char**) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 struct posix_acl* FUNC_5 (int *,char*,int) ;

__attribute__((used)) static struct posix_acl *FUNC_6(struct inode *VAR_1, int VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_1(VAR_1);
 struct posix_acl *VAR_4;
 const char *VAR_5;
 char *VAR_6;
 int VAR_7;

 if (!VAR_3->i_eattr)
  return ((void*)0);

 VAR_5 = FUNC_2(VAR_2);
 VAR_7 = FUNC_3(VAR_3, VAR_5, &VAR_6);
 if (VAR_7 <= 0)
  return FUNC_0(VAR_7);
 VAR_4 = FUNC_5(&VAR_0, VAR_6, VAR_7);
 FUNC_4(VAR_6);
 return VAR_4;
}
