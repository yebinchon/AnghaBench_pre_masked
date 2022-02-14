
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct skcipher_request {int dummy; } ;
struct scatterlist {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct crypto_skcipher*) ;
 int VAR_6 ;
 int FUNC_5 (struct skcipher_request*) ;
 int FUNC_6 (struct crypto_skcipher*,int ) ;
 int FUNC_7 (struct crypto_skcipher*,int const*,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct scatterlist*,int const*,unsigned int) ;
 struct skcipher_request* FUNC_10 (struct crypto_skcipher*,int ) ;
 int FUNC_11 (struct skcipher_request*) ;
 int FUNC_12 (struct skcipher_request*,int,int ,int *) ;
 int FUNC_13 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_14(const u8 *VAR_8,
     const u8 VAR_9[VAR_4],
     u8 *VAR_10, unsigned int VAR_11)
{
 int VAR_12 = 0;
 struct skcipher_request *VAR_13 = ((void*)0);
 FUNC_0(VAR_7);
 struct scatterlist VAR_14, VAR_15;
 struct crypto_skcipher *VAR_16 = FUNC_3("ecb(aes)", 0, 0);

 if (FUNC_1(VAR_16)) {
  VAR_12 = FUNC_2(VAR_16);
  VAR_16 = ((void*)0);
  goto out;
 }
 FUNC_6(VAR_16, VAR_0);
 VAR_13 = FUNC_10(VAR_16, VAR_5);
 if (!VAR_13) {
  VAR_12 = -VAR_3;
  goto out;
 }
 FUNC_12(VAR_13,
   VAR_1 | VAR_2,
   VAR_6, &VAR_7);
 VAR_12 = FUNC_7(VAR_16, VAR_9, VAR_4);
 if (VAR_12 < 0)
  goto out;

 FUNC_9(&VAR_14, VAR_8, VAR_11);
 FUNC_9(&VAR_15, VAR_10, VAR_11);
 FUNC_13(VAR_13, &VAR_14, &VAR_15, VAR_11,
       ((void*)0));
 VAR_12 = FUNC_8(FUNC_5(VAR_13), &VAR_7);
out:
 FUNC_11(VAR_13);
 FUNC_4(VAR_16);
 return VAR_12;
}
