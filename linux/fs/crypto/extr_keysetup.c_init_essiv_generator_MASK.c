
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct fscrypt_info {struct crypto_cipher* ci_essiv_tfm; TYPE_1__* ci_mode; } ;
struct crypto_cipher {int dummy; } ;
typedef int salt ;
struct TYPE_2__ {scalar_t__ ivsize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_cipher*) ;
 int FUNC_1 (struct crypto_cipher*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 struct crypto_cipher* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct crypto_cipher*,int *,int) ;
 int FUNC_5 (int const*,int,int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(struct fscrypt_info *VAR_3, const u8 *VAR_4,
    int VAR_5)
{
 int VAR_6;
 struct crypto_cipher *VAR_7;
 u8 VAR_8[VAR_2];

 if (FUNC_2(VAR_3->ci_mode->ivsize != VAR_0))
  return -VAR_1;

 VAR_7 = FUNC_3("aes", 0, 0);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_3->ci_essiv_tfm = VAR_7;

 VAR_6 = FUNC_5(VAR_4, VAR_5, VAR_8);
 if (VAR_6)
  goto out;






 VAR_6 = FUNC_4(VAR_7, VAR_8, sizeof(VAR_8));
 if (VAR_6)
  goto out;

out:
 FUNC_6(VAR_8, sizeof(VAR_8));
 return VAR_6;
}
