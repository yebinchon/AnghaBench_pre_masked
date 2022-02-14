
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct fscrypt_mode {int needs_essiv; int friendly_name; } ;
struct TYPE_3__ {scalar_t__ contents_encryption_mode; scalar_t__ filenames_encryption_mode; } ;
struct TYPE_4__ {TYPE_1__ v1; } ;
struct fscrypt_info {int ci_ctfm; struct fscrypt_direct_key* ci_direct_key; int ci_inode; TYPE_2__ ci_policy; struct fscrypt_mode* ci_mode; } ;
struct fscrypt_direct_key {int dk_ctfm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fscrypt_direct_key*) ;
 int FUNC_1 (struct fscrypt_direct_key*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct fscrypt_direct_key* FUNC_3 (struct fscrypt_info*,int const*) ;
 int FUNC_4 (struct fscrypt_mode const*) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct fscrypt_info *VAR_1,
        const u8 *VAR_2)
{
 const struct fscrypt_mode *VAR_3 = VAR_1->ci_mode;
 struct fscrypt_direct_key *VAR_4;

 if (!FUNC_4(VAR_3)) {
  FUNC_5(VAR_1->ci_inode,
        "Direct key mode not allowed with %s",
        VAR_3->friendly_name);
  return -VAR_0;
 }

 if (VAR_1->ci_policy.v1.contents_encryption_mode !=
     VAR_1->ci_policy.v1.filenames_encryption_mode) {
  FUNC_5(VAR_1->ci_inode,
        "Direct key mode not allowed with different contents and filenames modes");
  return -VAR_0;
 }


 if (FUNC_2(VAR_3->needs_essiv))
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 VAR_1->ci_direct_key = VAR_4;
 VAR_1->ci_ctfm = VAR_4->dk_ctfm;
 return 0;
}
