
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct extent_crypt_result* data; } ;
struct skcipher_request {TYPE_1__ base; } ;
struct scatterlist {int dummy; } ;
struct extent_crypt_result {int rc; int completion; } ;
struct ecryptfs_crypt_stat {int flags; int key_size; int cs_tfm_mutex; int key; int tfm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct skcipher_request* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct skcipher_request*) ;
 int FUNC_12 (struct skcipher_request*,int,int ,struct extent_crypt_result*) ;
 int FUNC_13 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,int,unsigned char*) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct ecryptfs_crypt_stat *VAR_14,
        struct scatterlist *VAR_15,
        struct scatterlist *VAR_16, int VAR_17,
        unsigned char *VAR_18, int VAR_19)
{
 struct skcipher_request *VAR_20 = ((void*)0);
 struct extent_crypt_result VAR_21;
 int VAR_22 = 0;

 FUNC_0(!VAR_14 || !VAR_14->tfm
        || !(VAR_14->flags & VAR_4));
 if (FUNC_14(VAR_12 > 0)) {
  FUNC_5(VAR_10, "Key size [%zd]; key:\n",
    VAR_14->key_size);
  FUNC_4(VAR_14->key,
      VAR_14->key_size);
 }

 FUNC_6(&VAR_21.completion);

 FUNC_7(&VAR_14->cs_tfm_mutex);
 VAR_20 = FUNC_10(VAR_14->tfm, VAR_9);
 if (!VAR_20) {
  FUNC_8(&VAR_14->cs_tfm_mutex);
  VAR_22 = -VAR_8;
  goto out;
 }

 FUNC_12(VAR_20,
   VAR_0 | VAR_1,
   VAR_13, &VAR_21);

 if (!(VAR_14->flags & VAR_3)) {
  VAR_22 = FUNC_3(VAR_14->tfm, VAR_14->key,
         VAR_14->key_size);
  if (VAR_22) {
   FUNC_5(VAR_11,
     "Error setting key; rc = [%d]\n",
     VAR_22);
   FUNC_8(&VAR_14->cs_tfm_mutex);
   VAR_22 = -VAR_6;
   goto out;
  }
  VAR_14->flags |= VAR_3;
 }
 FUNC_8(&VAR_14->cs_tfm_mutex);
 FUNC_13(VAR_20, VAR_16, VAR_15, VAR_17, VAR_18);
 VAR_22 = VAR_19 == VAR_7 ? FUNC_2(VAR_20) :
        FUNC_1(VAR_20);
 if (VAR_22 == -VAR_5 || VAR_22 == -VAR_2) {
  struct extent_crypt_result *VAR_23 = VAR_20->base.data;

  FUNC_15(&VAR_23->completion);
  VAR_22 = VAR_23->rc;
  FUNC_9(&VAR_23->completion);
 }
out:
 FUNC_11(VAR_20);
 return VAR_22;
}
