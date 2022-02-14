
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union fscrypt_iv {int dummy; } fscrypt_iv ;
typedef int u64 ;
struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct inode {struct fscrypt_info* i_crypt_info; } ;
struct fscrypt_info {struct crypto_skcipher* ci_ctfm; } ;
struct crypto_skcipher {int dummy; } ;
typedef int gfp_t ;
typedef scalar_t__ fscrypt_direction_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (struct skcipher_request*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct inode const*,char*,char*,int ,int) ;
 int FUNC_6 (union fscrypt_iv*,int ,struct fscrypt_info*) ;
 int FUNC_7 (struct scatterlist*,int) ;
 int FUNC_8 (struct scatterlist*,struct page*,unsigned int,unsigned int) ;
 struct skcipher_request* FUNC_9 (struct crypto_skcipher*,int ) ;
 int FUNC_10 (struct skcipher_request*) ;
 int FUNC_11 (struct skcipher_request*,int,int ,int *) ;
 int FUNC_12 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,union fscrypt_iv*) ;
 int VAR_7 ;

int FUNC_13(const struct inode *VAR_8, fscrypt_direction_t VAR_9,
   u64 VAR_10, struct page *VAR_11,
   struct page *VAR_12, unsigned int VAR_13,
   unsigned int VAR_14, gfp_t VAR_15)
{
 union fscrypt_iv VAR_16;
 struct skcipher_request *VAR_17 = ((void*)0);
 FUNC_0(VAR_7);
 struct scatterlist VAR_18, VAR_19;
 struct fscrypt_info *VAR_20 = VAR_8->i_crypt_info;
 struct crypto_skcipher *VAR_21 = VAR_20->ci_ctfm;
 int VAR_22 = 0;

 if (FUNC_1(VAR_13 <= 0))
  return -VAR_2;
 if (FUNC_1(VAR_13 % VAR_4 != 0))
  return -VAR_2;

 FUNC_6(&VAR_16, VAR_10, VAR_20);

 VAR_17 = FUNC_9(VAR_21, VAR_15);
 if (!VAR_17)
  return -VAR_3;

 FUNC_11(
  VAR_17, VAR_0 | VAR_1,
  VAR_6, &VAR_7);

 FUNC_7(&VAR_18, 1);
 FUNC_8(&VAR_18, VAR_12, VAR_13, VAR_14);
 FUNC_7(&VAR_19, 1);
 FUNC_8(&VAR_19, VAR_11, VAR_13, VAR_14);
 FUNC_12(VAR_17, &VAR_19, &VAR_18, VAR_13, &VAR_16);
 if (VAR_9 == VAR_5)
  VAR_22 = FUNC_4(FUNC_2(VAR_17), &VAR_7);
 else
  VAR_22 = FUNC_4(FUNC_3(VAR_17), &VAR_7);
 FUNC_10(VAR_17);
 if (VAR_22) {
  FUNC_5(VAR_8, "%scryption failed for block %llu: %d",
       (VAR_9 == VAR_5 ? "De" : "En"), VAR_10, VAR_22);
  return VAR_22;
 }
 return 0;
}
