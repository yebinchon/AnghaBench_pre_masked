
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_master_keys; } ;
struct TYPE_2__ {int * data; } ;
struct key {int sem; TYPE_1__ payload; } ;
struct fscrypt_master_key_secret {int dummy; } ;
struct fscrypt_key_specifier {int dummy; } ;
typedef int DEFINE_MUTEX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_1 ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (int ,struct fscrypt_master_key_secret*) ;
 int FUNC_3 (struct fscrypt_master_key_secret*,struct fscrypt_key_specifier const*,int ) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (int *) ;
 struct key* FUNC_6 (struct super_block*,struct fscrypt_key_specifier const*) ;
 int FUNC_7 (struct key*) ;
 int FUNC_8 (struct key*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_2,
     struct fscrypt_master_key_secret *VAR_3,
     const struct fscrypt_key_specifier *VAR_4)
{
 static DEFINE_MUTEX(VAR_5);
 struct key *VAR_6;
 int VAR_7;

 FUNC_9(&VAR_5);
retry:
 VAR_6 = FUNC_6(VAR_2, VAR_4);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  if (VAR_7 != -VAR_0)
   goto out_unlock;

  VAR_7 = FUNC_4(VAR_2);
  if (VAR_7)
   goto out_unlock;
  VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_2->s_master_keys);
 } else {




  FUNC_5(&VAR_6->sem);
  VAR_7 = FUNC_2(VAR_6->payload.data[0], VAR_3);
  FUNC_11(&VAR_6->sem);
  if (VAR_7 == VAR_1) {

   FUNC_7(VAR_6);
   FUNC_8(VAR_6);
   goto retry;
  }
  FUNC_8(VAR_6);
 }
out_unlock:
 FUNC_10(&VAR_5);
 return VAR_7;
}
