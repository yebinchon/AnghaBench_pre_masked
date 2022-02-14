
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union fscrypt_iv {int dummy; } fscrypt_iv ;
struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct inode {struct fscrypt_info* i_crypt_info; } ;
struct fscrypt_str {int len; int name; } ;
struct fscrypt_info {struct crypto_skcipher* ci_ctfm; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct inode*,char*,int) ;
 int FUNC_4 (union fscrypt_iv*,int ,struct fscrypt_info*) ;
 int FUNC_5 (struct scatterlist*,int ,int ) ;
 struct skcipher_request* FUNC_6 (struct crypto_skcipher*,int ) ;
 int FUNC_7 (struct skcipher_request*) ;
 int FUNC_8 (struct skcipher_request*,int,int ,int *) ;
 int FUNC_9 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,int ,union fscrypt_iv*) ;
 int FUNC_10 (int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_6,
    const struct fscrypt_str *VAR_7,
    struct fscrypt_str *VAR_8)
{
 struct skcipher_request *VAR_9 = ((void*)0);
 FUNC_0(VAR_5);
 struct scatterlist VAR_10, VAR_11;
 struct fscrypt_info *VAR_12 = VAR_6->i_crypt_info;
 struct crypto_skcipher *VAR_13 = VAR_12->ci_ctfm;
 union fscrypt_iv VAR_14;
 int VAR_15;


 VAR_9 = FUNC_6(VAR_13, VAR_3);
 if (!VAR_9)
  return -VAR_2;
 FUNC_8(VAR_9,
  VAR_0 | VAR_1,
  VAR_4, &VAR_5);


 FUNC_4(&VAR_14, 0, VAR_12);


 FUNC_5(&VAR_10, VAR_7->name, VAR_7->len);
 FUNC_5(&VAR_11, VAR_8->name, VAR_8->len);
 FUNC_9(VAR_9, &VAR_10, &VAR_11, VAR_7->len, &VAR_14);
 VAR_15 = FUNC_2(FUNC_1(VAR_9), &VAR_5);
 FUNC_7(VAR_9);
 if (VAR_15 < 0) {
  FUNC_3(VAR_6, "Filename decryption failed: %d", VAR_15);
  return VAR_15;
 }

 VAR_8->len = FUNC_10(VAR_8->name, VAR_7->len);
 return 0;
}
