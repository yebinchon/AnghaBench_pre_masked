
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int VAR_2 ;
 int FUNC_1 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct crypto_shash*) ;
 scalar_t__ FUNC_4 (struct crypto_shash*) ;
 int FUNC_5 (struct shash_desc*,int *,unsigned int,int *) ;
 int FUNC_6 (struct shash_desc*) ;
 int FUNC_7 (struct crypto_shash*,int *,int ) ;
 int FUNC_8 (struct shash_desc*,int *,int) ;
 struct shash_desc* FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (struct shash_desc*) ;

__attribute__((used)) static int
FUNC_11(u8 *VAR_3, u8 *VAR_4, unsigned int VAR_5, u8 VAR_6, u8 *VAR_7)
{
 u8 VAR_8[4] = { VAR_6, 0, 0, 0 };
 struct crypto_shash *VAR_9 = ((void*)0);
 struct shash_desc *VAR_10 = ((void*)0);
 int VAR_11;

 VAR_9 = FUNC_2("michael_mic", 0, 0);
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  goto err;
 }

 VAR_11 = FUNC_7(VAR_9, VAR_3, VAR_2);
 if (VAR_11 < 0)
  goto err_free_tfm;

 VAR_10 = FUNC_9(sizeof(*VAR_10) + FUNC_4(VAR_9), VAR_1);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto err_free_tfm;
 }

 VAR_10->tfm = VAR_9;

 VAR_11 = FUNC_6(VAR_10);
 if (VAR_11 < 0)
  goto err_free_desc;
 VAR_11 = FUNC_8(VAR_10, VAR_4, 12);
 if (VAR_11 < 0)
  goto err_free_desc;

 VAR_11 = FUNC_8(VAR_10, VAR_8, 4);
 if (VAR_11 < 0)
  goto err_free_desc;

 VAR_11 = FUNC_5(VAR_10, VAR_4 + 12, VAR_5 - 12, VAR_7);

err_free_desc:
 FUNC_10(VAR_10);

err_free_tfm:
 FUNC_3(VAR_9);

err:
 return VAR_11;
}
