
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int const* master_key_descriptor; } ;
struct TYPE_5__ {TYPE_1__ v1; } ;
struct fscrypt_info {TYPE_3__* ci_mode; TYPE_2__ ci_policy; int ci_inode; } ;
struct fscrypt_direct_key {int dk_raw; int dk_descriptor; int * dk_ctfm; TYPE_3__* dk_mode; int dk_refcount; } ;
struct TYPE_6__ {int keysize; } ;


 int VAR_0 ;
 struct fscrypt_direct_key* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct fscrypt_direct_key* FUNC_3 (struct fscrypt_direct_key*,int const*,struct fscrypt_info const*) ;
 int FUNC_4 (struct fscrypt_direct_key*) ;
 int * FUNC_5 (TYPE_3__*,int const*,int ) ;
 struct fscrypt_direct_key* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int const*,int ) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static struct fscrypt_direct_key *
FUNC_9(const struct fscrypt_info *VAR_3, const u8 *VAR_4)
{
 struct fscrypt_direct_key *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_3(((void*)0), VAR_4, VAR_3);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_0);
 FUNC_8(&VAR_5->dk_refcount, 1);
 VAR_5->dk_mode = VAR_3->ci_mode;
 VAR_5->dk_ctfm = FUNC_5(VAR_3->ci_mode, VAR_4,
      VAR_3->ci_inode);
 if (FUNC_1(VAR_5->dk_ctfm)) {
  VAR_6 = FUNC_2(VAR_5->dk_ctfm);
  VAR_5->dk_ctfm = ((void*)0);
  goto err_free_dk;
 }
 FUNC_7(VAR_5->dk_descriptor, VAR_3->ci_policy.v1.master_key_descriptor,
        VAR_1);
 FUNC_7(VAR_5->dk_raw, VAR_4, VAR_3->ci_mode->keysize);

 return FUNC_3(VAR_5, VAR_4, VAR_3);

err_free_dk:
 FUNC_4(VAR_5);
 return FUNC_0(VAR_6);
}
