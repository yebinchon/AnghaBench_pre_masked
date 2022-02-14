
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscrypt_policy_v2 {int flags; int __reserved; int filenames_encryption_mode; int contents_encryption_mode; } ;
struct fscrypt_policy_v1 {int flags; int filenames_encryption_mode; int contents_encryption_mode; } ;
union fscrypt_policy {int version; struct fscrypt_policy_v2 v2; struct fscrypt_policy_v1 v1; } ;
struct inode {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct inode const*,char*,...) ;
 int FUNC_2 (int ,int ,int) ;

bool FUNC_3(const union fscrypt_policy *VAR_1,
         const struct inode *VAR_2)
{
 switch (VAR_1->version) {
 case 129: {
  const struct fscrypt_policy_v1 *VAR_3 = &VAR_1->v1;

  if (!FUNC_0(VAR_3->contents_encryption_mode,
          VAR_3->filenames_encryption_mode)) {
   FUNC_1(VAR_2,
         "Unsupported encryption modes (contents %d, filenames %d)",
         VAR_3->contents_encryption_mode,
         VAR_3->filenames_encryption_mode);
   return 0;
  }

  if (VAR_3->flags & ~VAR_0) {
   FUNC_1(VAR_2,
         "Unsupported encryption flags (0x%02x)",
         VAR_3->flags);
   return 0;
  }

  return 1;
 }
 case 128: {
  const struct fscrypt_policy_v2 *VAR_4 = &VAR_1->v2;

  if (!FUNC_0(VAR_4->contents_encryption_mode,
          VAR_4->filenames_encryption_mode)) {
   FUNC_1(VAR_2,
         "Unsupported encryption modes (contents %d, filenames %d)",
         VAR_4->contents_encryption_mode,
         VAR_4->filenames_encryption_mode);
   return 0;
  }

  if (VAR_4->flags & ~VAR_0) {
   FUNC_1(VAR_2,
         "Unsupported encryption flags (0x%02x)",
         VAR_4->flags);
   return 0;
  }

  if (FUNC_2(VAR_4->__reserved, 0,
          sizeof(VAR_4->__reserved))) {
   FUNC_1(VAR_2,
         "Reserved bits set in encryption policy");
   return 0;
  }

  return 1;
 }
 }
 return 0;
}
