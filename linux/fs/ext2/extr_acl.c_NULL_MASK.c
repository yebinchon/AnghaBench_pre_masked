
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct posix_acl {int dummy; } ;
struct inode {int i_ctime; int i_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct posix_acl*,int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int *,struct posix_acl**) ;

int
FUNC_4(struct inode *VAR_1, struct posix_acl *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 umode_t VAR_6 = VAR_1->i_mode;

 if (VAR_3 == VAR_0 && VAR_2) {
  VAR_4 = FUNC_3(VAR_1, &VAR_6, &VAR_2);
  if (VAR_4)
   return VAR_4;
  VAR_5 = 1;
 }
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!VAR_4 && VAR_5) {
  VAR_1->i_mode = VAR_6;
  VAR_1->i_ctime = FUNC_1(VAR_1);
  FUNC_2(VAR_1);
 }
 return VAR_4;
}
