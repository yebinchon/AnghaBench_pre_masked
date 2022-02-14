
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fscrypt_mode {int keysize; scalar_t__ needs_essiv; } ;
struct fscrypt_info {int ci_inode; struct crypto_skcipher* ci_ctfm; struct fscrypt_mode* ci_mode; } ;
struct crypto_skcipher {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct fscrypt_mode*,int const*,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct fscrypt_info*,int const*,int ) ;

int FUNC_5(struct fscrypt_info *VAR_0, const u8 *VAR_1)
{
 struct fscrypt_mode *VAR_2 = VAR_0->ci_mode;
 struct crypto_skcipher *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2, VAR_1, VAR_0->ci_inode);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_0->ci_ctfm = VAR_3;

 if (VAR_2->needs_essiv) {
  VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2->keysize);
  if (VAR_4) {
   FUNC_3(VAR_0->ci_inode,
         "Error initializing ESSIV generator: %d",
         VAR_4);
   return VAR_4;
  }
 }
 return 0;
}
