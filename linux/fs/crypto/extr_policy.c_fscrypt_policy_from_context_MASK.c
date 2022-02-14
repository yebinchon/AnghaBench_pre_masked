
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscrypt_policy_v2 {int master_key_identifier; int __reserved; int flags; int filenames_encryption_mode; int contents_encryption_mode; int version; } ;
struct fscrypt_policy_v1 {int master_key_descriptor; int flags; int filenames_encryption_mode; int contents_encryption_mode; int version; } ;
union fscrypt_policy {struct fscrypt_policy_v2 v2; struct fscrypt_policy_v1 v1; } ;
struct fscrypt_context_v2 {int master_key_identifier; int __reserved; int flags; int filenames_encryption_mode; int contents_encryption_mode; } ;
struct fscrypt_context_v1 {int master_key_descriptor; int flags; int filenames_encryption_mode; int contents_encryption_mode; } ;
union fscrypt_context {int version; struct fscrypt_context_v2 v2; struct fscrypt_context_v1 v1; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (union fscrypt_context const*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (union fscrypt_policy*,int ,int) ;

int FUNC_3(union fscrypt_policy *VAR_3,
    const union fscrypt_context *VAR_4,
    int VAR_5)
{
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 if (VAR_5 <= 0 || VAR_5 != FUNC_0(VAR_4))
  return -VAR_0;

 switch (VAR_4->version) {
 case 129: {
  const struct fscrypt_context_v1 *VAR_6 = &VAR_4->v1;
  struct fscrypt_policy_v1 *VAR_7 = &VAR_3->v1;

  VAR_7->version = VAR_1;
  VAR_7->contents_encryption_mode =
   VAR_6->contents_encryption_mode;
  VAR_7->filenames_encryption_mode =
   VAR_6->filenames_encryption_mode;
  VAR_7->flags = VAR_6->flags;
  FUNC_1(VAR_7->master_key_descriptor,
         VAR_6->master_key_descriptor,
         sizeof(VAR_7->master_key_descriptor));
  return 0;
 }
 case 128: {
  const struct fscrypt_context_v2 *VAR_8 = &VAR_4->v2;
  struct fscrypt_policy_v2 *VAR_9 = &VAR_3->v2;

  VAR_9->version = VAR_2;
  VAR_9->contents_encryption_mode =
   VAR_8->contents_encryption_mode;
  VAR_9->filenames_encryption_mode =
   VAR_8->filenames_encryption_mode;
  VAR_9->flags = VAR_8->flags;
  FUNC_1(VAR_9->__reserved, VAR_8->__reserved,
         sizeof(VAR_9->__reserved));
  FUNC_1(VAR_9->master_key_identifier,
         VAR_8->master_key_identifier,
         sizeof(VAR_9->master_key_identifier));
  return 0;
 }
 }

 return -VAR_0;
}
