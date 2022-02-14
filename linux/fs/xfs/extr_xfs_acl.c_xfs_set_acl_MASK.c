
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct posix_acl {scalar_t__ a_count; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,struct posix_acl*,int) ;
 int FUNC_3 (struct inode*,int *,struct posix_acl**) ;
 int FUNC_4 (struct inode*,int ) ;

int
FUNC_5(struct inode *VAR_2, struct posix_acl *VAR_3, int VAR_4)
{
 umode_t VAR_5;
 bool VAR_6 = 0;
 int VAR_7 = 0;

 if (!VAR_3)
  goto set_acl;

 VAR_7 = -VAR_1;
 if (VAR_3->a_count > FUNC_0(FUNC_1(VAR_2->i_sb)))
  return VAR_7;

 if (VAR_4 == VAR_0) {
  VAR_7 = FUNC_3(VAR_2, &VAR_5, &VAR_3);
  if (VAR_7)
   return VAR_7;
  VAR_6 = 1;
 }

 set_acl:
 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;






 if (VAR_6)
  VAR_7 = FUNC_4(VAR_2, VAR_5);

 return VAR_7;
}
