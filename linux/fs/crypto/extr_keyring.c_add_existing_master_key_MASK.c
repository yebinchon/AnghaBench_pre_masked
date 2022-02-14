
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct fscrypt_master_key_secret {int dummy; } ;
struct fscrypt_master_key {int mk_secret_sem; int mk_secret; int mk_refcount; scalar_t__ mk_users; } ;


 int VAR_0 ;
 struct key* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct key*) ;
 int VAR_1 ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (struct fscrypt_master_key*) ;
 int FUNC_4 (int *) ;
 struct key* FUNC_5 (struct fscrypt_master_key*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct key*) ;
 int FUNC_8 (int *,struct fscrypt_master_key_secret*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct fscrypt_master_key *VAR_2,
       struct fscrypt_master_key_secret *VAR_3)
{
 struct key *VAR_4;
 bool VAR_5;
 int VAR_6;





 if (VAR_2->mk_users) {
  VAR_4 = FUNC_5(VAR_2);
  if (VAR_4 != FUNC_0(-VAR_0)) {
   if (FUNC_1(VAR_4))
    return FUNC_2(VAR_4);
   FUNC_7(VAR_4);
   return 0;
  }
 }


 VAR_5 = !FUNC_6(&VAR_2->mk_secret);
 if (VAR_5 && !FUNC_10(&VAR_2->mk_refcount))
  return VAR_1;


 if (VAR_2->mk_users) {
  VAR_6 = FUNC_3(VAR_2);
  if (VAR_6) {
   if (VAR_5 && FUNC_9(&VAR_2->mk_refcount))
    return VAR_1;
   return VAR_6;
  }
 }


 if (VAR_5) {
  FUNC_4(&VAR_2->mk_secret_sem);
  FUNC_8(&VAR_2->mk_secret, VAR_3);
  FUNC_11(&VAR_2->mk_secret_sem);
 }
 return 0;
}
