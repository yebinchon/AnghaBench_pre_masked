
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef struct fsverity_hash_alg {unsigned int name; scalar_t__ digest_size; scalar_t__ block_size; int tfm; } const fsverity_hash_alg ;
struct crypto_ahash {int dummy; } ;


 unsigned int FUNC_0 (struct fsverity_hash_alg const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fsverity_hash_alg const* FUNC_1 (struct crypto_ahash*) ;
 struct fsverity_hash_alg const* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct crypto_ahash*) ;
 int FUNC_4 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int * FUNC_7 (int *,int *,struct crypto_ahash*) ;
 scalar_t__ FUNC_8 (struct crypto_ahash*) ;
 scalar_t__ FUNC_9 (struct crypto_ahash*) ;
 int FUNC_10 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_11 (unsigned int,int ,int ) ;
 int FUNC_12 (struct crypto_ahash*) ;
 int FUNC_13 (struct inode const*,char*,unsigned int,int ) ;
 struct fsverity_hash_alg const* VAR_3 ;
 int FUNC_14 (struct inode const*,char*,unsigned int) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (char*,unsigned int,int ) ;

const struct fsverity_hash_alg *FUNC_17(const struct inode *VAR_4,
            unsigned int VAR_5)
{
 struct fsverity_hash_alg *VAR_6;
 struct crypto_ahash *VAR_7;
 int VAR_8;

 if (VAR_5 >= FUNC_0(VAR_3) ||
     !VAR_3[VAR_5].name) {
  FUNC_14(VAR_4, "Unknown hash algorithm number: %u", VAR_5);
  return FUNC_2(-VAR_0);
 }
 VAR_6 = &VAR_3[VAR_5];


 VAR_7 = FUNC_5(VAR_6->tfm);
 if (FUNC_15(VAR_7 != ((void*)0)))
  return VAR_6;




 VAR_7 = FUNC_11(VAR_6->name, 0, 0);
 if (FUNC_3(VAR_7)) {
  if (FUNC_4(VAR_7) == -VAR_1) {
   FUNC_14(VAR_4,
          "Missing crypto API support for hash algorithm \"%s\"",
          VAR_6->name);
   return FUNC_2(-VAR_2);
  }
  FUNC_13(VAR_4,
        "Error allocating hash algorithm \"%s\": %ld",
        VAR_6->name, FUNC_4(VAR_7));
  return FUNC_1(VAR_7);
 }

 VAR_8 = -VAR_0;
 if (FUNC_6(VAR_6->digest_size != FUNC_9(VAR_7)))
  goto err_free_tfm;
 if (FUNC_6(VAR_6->block_size != FUNC_8(VAR_7)))
  goto err_free_tfm;

 FUNC_16("%s using implementation \"%s\"\n",
  VAR_6->name, FUNC_10(VAR_7));


 if (FUNC_7(&VAR_6->tfm, ((void*)0), VAR_7) != ((void*)0))
  FUNC_12(VAR_7);

 return VAR_6;

err_free_tfm:
 FUNC_12(VAR_7);
 return FUNC_2(VAR_8);
}
