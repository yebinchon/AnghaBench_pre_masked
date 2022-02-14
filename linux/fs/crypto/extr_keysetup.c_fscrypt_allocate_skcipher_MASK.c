
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct inode {int dummy; } ;
struct fscrypt_mode {int logged_impl_name; int keysize; int friendly_name; int cipher_str; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_3__ {int cra_driver_name; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct crypto_skcipher* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct crypto_skcipher*) ;
 TYPE_2__* FUNC_5 (struct crypto_skcipher*) ;
 int FUNC_6 (struct crypto_skcipher*,int ) ;
 int FUNC_7 (struct crypto_skcipher*,int const*,int ) ;
 int FUNC_8 (struct inode const*,char*,int ,int ) ;
 int FUNC_9 (struct inode const*,char*,int ,int ) ;
 int FUNC_10 (char*,int ,int ) ;
 scalar_t__ FUNC_11 (int) ;

struct crypto_skcipher *FUNC_12(struct fscrypt_mode *VAR_3,
        const u8 *VAR_4,
        const struct inode *VAR_5)
{
 struct crypto_skcipher *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_3->cipher_str, 0, 0);
 if (FUNC_1(VAR_6)) {
  if (FUNC_2(VAR_6) == -VAR_1) {
   FUNC_9(VAR_5,
         "Missing crypto API support for %s (API name: \"%s\")",
         VAR_3->friendly_name, VAR_3->cipher_str);
   return FUNC_0(-VAR_2);
  }
  FUNC_8(VAR_5, "Error allocating '%s' transform: %ld",
       VAR_3->cipher_str, FUNC_2(VAR_6));
  return VAR_6;
 }
 if (FUNC_11(!VAR_3->logged_impl_name)) {







  VAR_3->logged_impl_name = 1;
  FUNC_10("fscrypt: %s using implementation \"%s\"\n",
   VAR_3->friendly_name,
   FUNC_5(VAR_6)->base.cra_driver_name);
 }
 FUNC_6(VAR_6, VAR_0);
 VAR_7 = FUNC_7(VAR_6, VAR_4, VAR_3->keysize);
 if (VAR_7)
  goto err_free_tfm;

 return VAR_6;

err_free_tfm:
 FUNC_4(VAR_6);
 return FUNC_0(VAR_7);
}
