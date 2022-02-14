
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_crypt_stat {int key_size; int cs_tfm_mutex; int * tfm; int cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char**,int ,char*) ;
 int FUNC_5 (int ,char*,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;

int FUNC_10(struct ecryptfs_crypt_stat *VAR_4)
{
 char *VAR_5;
 int VAR_6 = -VAR_1;

 FUNC_5(VAR_2,
   "Initializing cipher [%s]; strlen = [%d]; "
   "key_size_bits = [%zd]\n",
   VAR_4->cipher, (int)FUNC_9(VAR_4->cipher),
   VAR_4->key_size << 3);
 FUNC_7(&VAR_4->cs_tfm_mutex);
 if (VAR_4->tfm) {
  VAR_6 = 0;
  goto out_unlock;
 }
 VAR_6 = FUNC_4(&VAR_5,
          VAR_4->cipher, "cbc");
 if (VAR_6)
  goto out_unlock;
 VAR_4->tfm = FUNC_2(VAR_5, 0, 0);
 if (FUNC_0(VAR_4->tfm)) {
  VAR_6 = FUNC_1(VAR_4->tfm);
  VAR_4->tfm = ((void*)0);
  FUNC_5(VAR_3, "cryptfs: init_crypt_ctx(): "
    "Error initializing cipher [%s]\n",
    VAR_5);
  goto out_free;
 }
 FUNC_3(VAR_4->tfm,
      VAR_0);
 VAR_6 = 0;
out_free:
 FUNC_6(VAR_5);
out_unlock:
 FUNC_8(&VAR_4->cs_tfm_mutex);
 return VAR_6;
}
