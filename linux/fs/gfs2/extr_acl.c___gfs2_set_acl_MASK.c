
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int a_count; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,char const*,char*,size_t,int ,int ) ;
 char* FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t,int ) ;
 int FUNC_4 (int *,struct posix_acl*,char*,size_t) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,int,struct posix_acl*) ;

int FUNC_7(struct inode *VAR_4, struct posix_acl *VAR_5, int VAR_6)
{
 int VAR_7;
 size_t VAR_8;
 char *VAR_9;
 const char *VAR_10 = FUNC_1(VAR_6);

 if (VAR_5) {
  VAR_8 = FUNC_5(VAR_5->a_count);
  VAR_9 = FUNC_3(VAR_8, VAR_1);
  if (VAR_9 == ((void*)0))
   return -VAR_0;
  VAR_7 = FUNC_4(&VAR_3, VAR_5, VAR_9, VAR_8);
  if (VAR_7 < 0)
   goto out;
 } else {
  VAR_9 = ((void*)0);
  VAR_8 = 0;
 }

 VAR_7 = FUNC_0(VAR_4, VAR_10, VAR_9, VAR_8, 0, VAR_2);
 if (VAR_7)
  goto out;
 FUNC_6(VAR_4, VAR_6, VAR_5);
out:
 FUNC_2(VAR_9);
 return VAR_7;
}
