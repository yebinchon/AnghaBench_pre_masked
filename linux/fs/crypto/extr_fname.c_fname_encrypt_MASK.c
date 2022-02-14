
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union fscrypt_iv {int dummy; } fscrypt_iv ;
typedef int u8 ;
struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct qstr {unsigned int len; int name; } ;
struct inode {struct fscrypt_info* i_crypt_info; } ;
struct fscrypt_info {struct crypto_skcipher* ci_ctfm; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct inode*,char*,int) ;
 int FUNC_5 (union fscrypt_iv*,int ,struct fscrypt_info*) ;
 int FUNC_6 (int *,int ,unsigned int) ;
 int FUNC_7 (int *,int ,unsigned int) ;
 int FUNC_8 (struct scatterlist*,int *,unsigned int) ;
 struct skcipher_request* FUNC_9 (struct crypto_skcipher*,int ) ;
 int FUNC_10 (struct skcipher_request*) ;
 int FUNC_11 (struct skcipher_request*,int,int ,int *) ;
 int FUNC_12 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,union fscrypt_iv*) ;
 int VAR_6 ;

int FUNC_13(struct inode *VAR_7, const struct qstr *VAR_8,
    u8 *VAR_9, unsigned int VAR_10)
{
 struct skcipher_request *VAR_11 = ((void*)0);
 FUNC_0(VAR_6);
 struct fscrypt_info *VAR_12 = VAR_7->i_crypt_info;
 struct crypto_skcipher *VAR_13 = VAR_12->ci_ctfm;
 union fscrypt_iv VAR_14;
 struct scatterlist VAR_15;
 int VAR_16;





 if (FUNC_1(VAR_10 < VAR_8->len))
  return -VAR_2;
 FUNC_6(VAR_9, VAR_8->name, VAR_8->len);
 FUNC_7(VAR_9 + VAR_8->len, 0, VAR_10 - VAR_8->len);


 FUNC_5(&VAR_14, 0, VAR_12);


 VAR_11 = FUNC_9(VAR_13, VAR_4);
 if (!VAR_11)
  return -VAR_3;
 FUNC_11(VAR_11,
   VAR_0 | VAR_1,
   VAR_5, &VAR_6);
 FUNC_8(&VAR_15, VAR_9, VAR_10);
 FUNC_12(VAR_11, &VAR_15, &VAR_15, VAR_10, &VAR_14);


 VAR_16 = FUNC_3(FUNC_2(VAR_11), &VAR_6);
 FUNC_10(VAR_11);
 if (VAR_16 < 0) {
  FUNC_4(VAR_7, "Filename encryption failed: %d", VAR_16);
  return VAR_16;
 }

 return 0;
}
