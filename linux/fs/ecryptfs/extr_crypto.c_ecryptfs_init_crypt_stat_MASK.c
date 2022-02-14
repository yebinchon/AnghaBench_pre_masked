
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_crypt_stat {int flags; struct crypto_shash* hash_tfm; int cs_tfm_mutex; int cs_mutex; int keysig_list_mutex; int keysig_list; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct crypto_shash*) ;
 int VAR_2 ;
 int FUNC_2 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct ecryptfs_crypt_stat *VAR_3)
{
 struct crypto_shash *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_0, 0, 0);
 if (FUNC_1(VAR_4)) {
  VAR_5 = FUNC_2(VAR_4);
  FUNC_4(VAR_2, "Error attempting to "
    "allocate crypto context; rc = [%d]\n",
    VAR_5);
  return VAR_5;
 }

 FUNC_5((void *)VAR_3, 0, sizeof(struct ecryptfs_crypt_stat));
 FUNC_0(&VAR_3->keysig_list);
 FUNC_6(&VAR_3->keysig_list_mutex);
 FUNC_6(&VAR_3->cs_mutex);
 FUNC_6(&VAR_3->cs_tfm_mutex);
 VAR_3->hash_tfm = VAR_4;
 VAR_3->flags |= VAR_1;

 return 0;
}
