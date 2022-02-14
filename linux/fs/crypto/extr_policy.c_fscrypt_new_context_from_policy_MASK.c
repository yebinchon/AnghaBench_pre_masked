
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscrypt_policy_v2 {int master_key_identifier; int flags; int filenames_encryption_mode; int contents_encryption_mode; } ;
struct fscrypt_policy_v1 {int master_key_descriptor; int flags; int filenames_encryption_mode; int contents_encryption_mode; } ;
union fscrypt_policy {int version; struct fscrypt_policy_v2 v2; struct fscrypt_policy_v1 v1; } ;
struct fscrypt_context_v2 {int nonce; int master_key_identifier; int flags; int filenames_encryption_mode; int contents_encryption_mode; int version; } ;
struct fscrypt_context_v1 {int nonce; int master_key_descriptor; int flags; int filenames_encryption_mode; int contents_encryption_mode; int version; } ;
union fscrypt_context {struct fscrypt_context_v2 v2; struct fscrypt_context_v1 v1; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (union fscrypt_context*,int ,int) ;

__attribute__((used)) static int FUNC_4(union fscrypt_context *VAR_2,
        const union fscrypt_policy *VAR_3)
{
 FUNC_3(VAR_2, 0, sizeof(*VAR_2));

 switch (VAR_3->version) {
 case 129: {
  const struct fscrypt_policy_v1 *VAR_4 = &VAR_3->v1;
  struct fscrypt_context_v1 *VAR_5 = &VAR_2->v1;

  VAR_5->version = VAR_0;
  VAR_5->contents_encryption_mode =
   VAR_4->contents_encryption_mode;
  VAR_5->filenames_encryption_mode =
   VAR_4->filenames_encryption_mode;
  VAR_5->flags = VAR_4->flags;
  FUNC_2(VAR_5->master_key_descriptor,
         VAR_4->master_key_descriptor,
         sizeof(VAR_5->master_key_descriptor));
  FUNC_1(VAR_5->nonce, sizeof(VAR_5->nonce));
  return sizeof(*VAR_5);
 }
 case 128: {
  const struct fscrypt_policy_v2 *VAR_6 = &VAR_3->v2;
  struct fscrypt_context_v2 *VAR_7 = &VAR_2->v2;

  VAR_7->version = VAR_1;
  VAR_7->contents_encryption_mode =
   VAR_6->contents_encryption_mode;
  VAR_7->filenames_encryption_mode =
   VAR_6->filenames_encryption_mode;
  VAR_7->flags = VAR_6->flags;
  FUNC_2(VAR_7->master_key_identifier,
         VAR_6->master_key_identifier,
         sizeof(VAR_7->master_key_identifier));
  FUNC_1(VAR_7->nonce, sizeof(VAR_7->nonce));
  return sizeof(*VAR_7);
 }
 }
 FUNC_0();
}
