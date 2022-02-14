
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;


 struct crypto_aead* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int) ;
 int FUNC_3 (struct crypto_aead*,char*,int) ;
 struct crypto_aead* FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct crypto_aead*) ;

__attribute__((used)) static struct crypto_aead *FUNC_6(char *VAR_0, int VAR_1, int VAR_2)
{
 struct crypto_aead *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4("gcm(aes)", 0, 0);

 if (FUNC_1(VAR_3))
  return VAR_3;

 VAR_4 = FUNC_3(VAR_3, VAR_0, VAR_1);
 if (VAR_4 < 0)
  goto fail;

 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (VAR_4 < 0)
  goto fail;

 return VAR_3;
fail:
 FUNC_5(VAR_3);
 return FUNC_0(VAR_4);
}
