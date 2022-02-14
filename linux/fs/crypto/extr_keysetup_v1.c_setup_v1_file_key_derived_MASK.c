
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct fscrypt_info {TYPE_1__* ci_mode; int ci_nonce; } ;
struct TYPE_2__ {int keysize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int ,int *,int ) ;
 int FUNC_1 (struct fscrypt_info*,int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct fscrypt_info *VAR_2,
         const u8 *VAR_3)
{
 u8 *VAR_4;
 int VAR_5;





 VAR_4 = FUNC_2(VAR_2->ci_mode->keysize, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_3, VAR_2->ci_nonce,
        VAR_4, VAR_2->ci_mode->keysize);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_1(VAR_2, VAR_4);
out:
 FUNC_3(VAR_4);
 return VAR_5;
}
