
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct fscrypt_master_key** data; } ;
struct key {TYPE_1__ payload; } ;
struct fscrypt_master_key {int mk_refcount; int mk_decrypted_inodes_lock; } ;
struct fscrypt_info {int ci_master_key_link; struct key* ci_master_key; int * ci_essiv_tfm; int * ci_ctfm; int ci_policy; scalar_t__ ci_direct_key; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct key*) ;
 int FUNC_5 (struct key*) ;
 int FUNC_6 (int ,struct fscrypt_info*) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct fscrypt_info *VAR_1)
{
 struct key *VAR_2;

 if (!VAR_1)
  return;

 if (VAR_1->ci_direct_key) {
  FUNC_3(VAR_1->ci_direct_key);
 } else if ((VAR_1->ci_ctfm != ((void*)0) || VAR_1->ci_essiv_tfm != ((void*)0)) &&
     !FUNC_2(&VAR_1->ci_policy)) {
  FUNC_1(VAR_1->ci_ctfm);
  FUNC_0(VAR_1->ci_essiv_tfm);
 }

 VAR_2 = VAR_1->ci_master_key;
 if (VAR_2) {
  struct fscrypt_master_key *VAR_3 = VAR_2->payload.data[0];
  FUNC_9(&VAR_3->mk_decrypted_inodes_lock);
  FUNC_7(&VAR_1->ci_master_key_link);
  FUNC_10(&VAR_3->mk_decrypted_inodes_lock);
  if (FUNC_8(&VAR_3->mk_refcount))
   FUNC_4(VAR_2);
  FUNC_5(VAR_2);
 }
 FUNC_6(VAR_0, VAR_1);
}
