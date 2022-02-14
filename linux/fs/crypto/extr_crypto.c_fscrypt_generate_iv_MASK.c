
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union fscrypt_iv {int raw; int nonce; int lblk_num; } ;
typedef int u64 ;
struct fscrypt_info {int * ci_essiv_tfm; int ci_nonce; int ci_policy; TYPE_1__* ci_mode; } ;
struct TYPE_2__ {int ivsize; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (union fscrypt_iv*,int ,int ) ;

void FUNC_5(union fscrypt_iv *VAR_1, u64 VAR_2,
    const struct fscrypt_info *VAR_3)
{
 FUNC_4(VAR_1, 0, VAR_3->ci_mode->ivsize);
 VAR_1->lblk_num = FUNC_0(VAR_2);

 if (FUNC_2(&VAR_3->ci_policy))
  FUNC_3(VAR_1->nonce, VAR_3->ci_nonce, VAR_0);

 if (VAR_3->ci_essiv_tfm != ((void*)0))
  FUNC_1(VAR_3->ci_essiv_tfm, VAR_1->raw, VAR_1->raw);
}
