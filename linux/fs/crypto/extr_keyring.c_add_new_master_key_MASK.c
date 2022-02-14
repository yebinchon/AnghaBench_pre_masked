
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct fscrypt_master_key_secret {int dummy; } ;
struct fscrypt_key_specifier {scalar_t__ type; } ;
struct fscrypt_master_key {int mk_decrypted_inodes_lock; int mk_decrypted_inodes; int mk_refcount; int mk_secret_sem; int mk_secret; struct fscrypt_key_specifier mk_spec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct key*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (struct fscrypt_master_key*) ;
 int FUNC_4 (struct fscrypt_master_key*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,struct fscrypt_key_specifier const*) ;
 int FUNC_7 (struct fscrypt_master_key*) ;
 int FUNC_8 (int *) ;
 struct key* FUNC_9 (int *,char*,int ,int ,int ,int,int ,int *) ;
 int FUNC_10 (struct key*,struct fscrypt_master_key*,int,struct key*,int *) ;
 int FUNC_11 (struct key*) ;
 int VAR_10 ;
 struct fscrypt_master_key* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,struct fscrypt_master_key_secret*) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct fscrypt_master_key_secret *VAR_11,
         const struct fscrypt_key_specifier *VAR_12,
         struct key *VAR_13)
{
 struct fscrypt_master_key *VAR_14;
 char VAR_15[VAR_2];
 struct key *VAR_16;
 int VAR_17;

 VAR_14 = FUNC_12(sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->mk_spec = *VAR_12;

 FUNC_13(&VAR_14->mk_secret, VAR_11);
 FUNC_8(&VAR_14->mk_secret_sem);

 FUNC_14(&VAR_14->mk_refcount, 1);
 FUNC_0(&VAR_14->mk_decrypted_inodes);
 FUNC_15(&VAR_14->mk_decrypted_inodes_lock);

 if (VAR_12->type == VAR_1) {
  VAR_17 = FUNC_4(VAR_14);
  if (VAR_17)
   goto out_free_mk;
  VAR_17 = FUNC_3(VAR_14);
  if (VAR_17)
   goto out_free_mk;
 }






 FUNC_6(VAR_15, VAR_12);
 VAR_16 = FUNC_9(&VAR_10, VAR_15,
   VAR_5, VAR_4, FUNC_5(),
   VAR_7 | VAR_8 | VAR_9,
   VAR_6, ((void*)0));
 if (FUNC_1(VAR_16)) {
  VAR_17 = FUNC_2(VAR_16);
  goto out_free_mk;
 }
 VAR_17 = FUNC_10(VAR_16, VAR_14, sizeof(*VAR_14), VAR_13, ((void*)0));
 FUNC_11(VAR_16);
 if (VAR_17)
  goto out_free_mk;

 return 0;

out_free_mk:
 FUNC_7(VAR_14);
 return VAR_17;
}
