
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int hkdf; } ;
struct fscrypt_master_key {TYPE_1__ mk_secret; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_7__ {TYPE_2__ v2; } ;
struct fscrypt_info {TYPE_4__* ci_mode; int ci_nonce; int ci_inode; TYPE_3__ ci_policy; } ;
struct TYPE_8__ {int keysize; int friendly_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ,int *,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct fscrypt_info*,int *) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct fscrypt_info*,struct fscrypt_master_key*) ;

__attribute__((used)) static int FUNC_6(struct fscrypt_info *VAR_5,
         struct fscrypt_master_key *VAR_6)
{
 u8 VAR_7[VAR_1];
 int VAR_8;

 if (VAR_5->ci_policy.v2.flags & VAR_2) {
  if (!FUNC_1(VAR_5->ci_mode)) {
   FUNC_3(VAR_5->ci_inode,
         "Direct key flag not allowed with %s",
         VAR_5->ci_mode->friendly_name);
   return -VAR_0;
  }
  return FUNC_5(VAR_5, VAR_6);
 }

 VAR_8 = FUNC_0(&VAR_6->mk_secret.hkdf,
      VAR_4,
      VAR_5->ci_nonce, VAR_3,
      VAR_7, VAR_5->ci_mode->keysize);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_5, VAR_7);
 FUNC_4(VAR_7, VAR_5->ci_mode->keysize);
 return VAR_8;
}
