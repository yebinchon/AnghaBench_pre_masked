
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct inode*,int,char*,char*,size_t,int ) ;
 char* FUNC_3 (struct posix_acl*,size_t*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, int VAR_2, struct posix_acl *VAR_3)
{
 char *VAR_4 = ((void*)0);
 size_t VAR_5 = 0;
 int VAR_6;

 if (VAR_3) {
  VAR_4 = FUNC_3(VAR_3, &VAR_5);
  if (FUNC_0(VAR_4))
   return FUNC_1(VAR_4);
 }
 VAR_6 = FUNC_2(VAR_1, VAR_2, "", VAR_4, VAR_5, 0);
 if (!VAR_4 && VAR_6 == -VAR_0)
  VAR_6 = 0;
 FUNC_4(VAR_4);

 return VAR_6;
}
