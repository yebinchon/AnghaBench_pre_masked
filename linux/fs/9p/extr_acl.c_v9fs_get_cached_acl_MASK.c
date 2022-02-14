
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int ) ;
 struct posix_acl* FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct posix_acl*) ;

__attribute__((used)) static struct posix_acl *FUNC_3(struct inode *VAR_0, int VAR_1)
{
 struct posix_acl *VAR_2;




 VAR_2 = FUNC_1(VAR_0, VAR_1);
 FUNC_0(FUNC_2(VAR_2));
 return VAR_2;
}
