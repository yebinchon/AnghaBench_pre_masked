
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int a_refcount; } ;
struct inode {int dummy; } ;


 struct posix_acl** FUNC_0 (struct inode*,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct posix_acl*) ;
 struct posix_acl* FUNC_3 (struct posix_acl*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;

struct posix_acl *FUNC_7(struct inode *VAR_0, int VAR_1)
{
 struct posix_acl **VAR_2 = FUNC_0(VAR_0, VAR_1);
 struct posix_acl *VAR_3;

 for (;;) {
  FUNC_4();
  VAR_3 = FUNC_3(*VAR_2);
  if (!VAR_3 || FUNC_2(VAR_3) ||
      FUNC_6(&VAR_3->a_refcount))
   break;
  FUNC_5();
  FUNC_1();
 }
 FUNC_5();
 return VAR_3;
}
