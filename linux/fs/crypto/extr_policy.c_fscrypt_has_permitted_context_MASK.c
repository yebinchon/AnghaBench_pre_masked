
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union fscrypt_policy {int dummy; } fscrypt_policy ;
struct inode {int i_mode; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,union fscrypt_policy*) ;
 int FUNC_6 (union fscrypt_policy*,union fscrypt_policy*) ;

int FUNC_7(struct inode *VAR_0, struct inode *VAR_1)
{
 union fscrypt_policy VAR_2, VAR_3;
 int VAR_4;


 if (!FUNC_3(VAR_1->i_mode) && !FUNC_1(VAR_1->i_mode) &&
     !FUNC_2(VAR_1->i_mode))
  return 1;


 if (!FUNC_0(VAR_0))
  return 1;


 if (!FUNC_0(VAR_1))
  return 0;
 VAR_4 = FUNC_4(VAR_0);
 if (VAR_4)
  return 0;
 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4)
  return 0;

 VAR_4 = FUNC_5(VAR_0, &VAR_2);
 if (VAR_4)
  return 0;

 VAR_4 = FUNC_5(VAR_1, &VAR_3);
 if (VAR_4)
  return 0;

 return FUNC_6(&VAR_2, &VAR_3);
}
