
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex {int dummy; } ;
struct ecryptfs_mount_crypt_stat {int flags; int global_default_fn_cipher_name; } ;
struct crypto_skcipher {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 size_t FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher**,struct mutex**,int ) ;
 int FUNC_2 (long) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (struct mutex*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(long *VAR_6, long VAR_7,
      struct ecryptfs_mount_crypt_stat *VAR_8)
{
 struct crypto_skcipher *VAR_9;
 struct mutex *VAR_10;
 size_t VAR_11;
 int VAR_12;

 if (!(VAR_8->flags & VAR_2)) {
  (*VAR_6) = VAR_7;
  return 0;
 }

 VAR_12 = FUNC_1(&VAR_9, &VAR_10,
   VAR_8->global_default_fn_cipher_name);
 if (FUNC_5(VAR_12)) {
  (*VAR_6) = 0;
  return VAR_12;
 }

 FUNC_3(VAR_10);
 VAR_11 = FUNC_0(VAR_9);
 FUNC_4(VAR_10);


 if (VAR_7 == VAR_5
     && (VAR_11 == 8 || VAR_11 == 16)) {
  (*VAR_6) = VAR_4;
  return 0;
 }


 (*VAR_6) = VAR_7;
 (*VAR_6) -= VAR_1;

 (*VAR_6) = FUNC_2(*VAR_6) - 3;
 (*VAR_6) -= VAR_3;
 (*VAR_6) -= VAR_0;

 (*VAR_6) -= VAR_11 - 1;

 if ((*VAR_6) < 0)
  (*VAR_6) = 0;

 return 0;
}
