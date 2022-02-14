
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {struct fscrypt_info* i_crypt_info; } ;
struct fscrypt_info {int ci_policy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;

bool FUNC_4(const struct inode *VAR_2, u32 VAR_3,
      u32 VAR_4, u32 *VAR_5)
{
 const struct fscrypt_info *VAR_6 = VAR_2->i_crypt_info;
 int VAR_7 = 4 << (FUNC_0(&VAR_6->ci_policy) &
       VAR_0);
 u32 VAR_8;

 if (VAR_3 > VAR_4)
  return 0;
 VAR_8 = FUNC_1(VAR_3, (u32)VAR_1);
 VAR_8 = FUNC_3(VAR_8, VAR_7);
 *VAR_5 = FUNC_2(VAR_8, VAR_4);
 return 1;
}
