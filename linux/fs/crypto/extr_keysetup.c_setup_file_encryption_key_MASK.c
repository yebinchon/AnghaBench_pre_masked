
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {struct fscrypt_master_key** data; } ;
struct key {TYPE_4__ payload; } ;
struct TYPE_16__ {int raw; int size; } ;
struct fscrypt_master_key {int mk_secret_sem; TYPE_8__ mk_secret; } ;
struct TYPE_13__ {int identifier; int descriptor; } ;
struct fscrypt_key_specifier {TYPE_5__ u; int type; } ;
struct TYPE_10__ {int master_key_identifier; } ;
struct TYPE_9__ {int master_key_descriptor; } ;
struct TYPE_15__ {int version; TYPE_2__ v2; TYPE_1__ v1; } ;
struct fscrypt_info {TYPE_7__ ci_policy; TYPE_6__* ci_mode; TYPE_3__* ci_inode; } ;
struct TYPE_14__ {int keysize; } ;
struct TYPE_11__ {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct key* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 struct key* FUNC_5 (int ,struct fscrypt_key_specifier*) ;
 int FUNC_6 (struct fscrypt_info*,int ) ;
 int FUNC_7 (struct fscrypt_info*) ;
 int FUNC_8 (struct fscrypt_info*,struct fscrypt_master_key*) ;
 int FUNC_9 (int *,char*,int ,int ,int *,int ,int ) ;
 int FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (struct key*) ;
 int FUNC_12 (struct fscrypt_key_specifier*) ;
 int FUNC_13 (struct fscrypt_key_specifier*) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct fscrypt_info *VAR_6,
         struct key **VAR_7)
{
 struct key *VAR_8;
 struct fscrypt_master_key *VAR_9 = ((void*)0);
 struct fscrypt_key_specifier VAR_10;
 int VAR_11;

 switch (VAR_6->ci_policy.version) {
 case 129:
  VAR_10.type = VAR_4;
  FUNC_14(VAR_10.u.descriptor,
         VAR_6->ci_policy.v1.master_key_descriptor,
         VAR_2);
  break;
 case 128:
  VAR_10.type = VAR_5;
  FUNC_14(VAR_10.u.identifier,
         VAR_6->ci_policy.v2.master_key_identifier,
         VAR_3);
  break;
 default:
  FUNC_3(1);
  return -VAR_0;
 }

 VAR_8 = FUNC_5(VAR_6->ci_inode->i_sb, &VAR_10);
 if (FUNC_1(VAR_8)) {
  if (VAR_8 != FUNC_0(-VAR_1) ||
      VAR_6->ci_policy.version != 129)
   return FUNC_2(VAR_8);







  return FUNC_7(VAR_6);
 }

 VAR_9 = VAR_8->payload.data[0];
 FUNC_4(&VAR_9->mk_secret_sem);


 if (!FUNC_10(&VAR_9->mk_secret)) {
  VAR_11 = -VAR_1;
  goto out_release_key;
 }







 if (VAR_9->mk_secret.size < VAR_6->ci_mode->keysize) {
  FUNC_9(((void*)0),
        "key with %s %*phN is too short (got %u bytes, need %u+ bytes)",
        FUNC_13(&VAR_10),
        FUNC_12(&VAR_10), (u8 *)&VAR_10.u,
        VAR_9->mk_secret.size, VAR_6->ci_mode->keysize);
  VAR_11 = -VAR_1;
  goto out_release_key;
 }

 switch (VAR_6->ci_policy.version) {
 case 129:
  VAR_11 = FUNC_6(VAR_6, VAR_9->mk_secret.raw);
  break;
 case 128:
  VAR_11 = FUNC_8(VAR_6, VAR_9);
  break;
 default:
  FUNC_3(1);
  VAR_11 = -VAR_0;
  break;
 }
 if (VAR_11)
  goto out_release_key;

 *VAR_7 = VAR_8;
 return 0;

out_release_key:
 FUNC_15(&VAR_9->mk_secret_sem);
 FUNC_11(VAR_8);
 return VAR_11;
}
