
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct key {int sem; } ;
struct fscrypt_key {int raw; } ;
struct TYPE_10__ {int master_key_descriptor; } ;
struct TYPE_11__ {TYPE_4__ v1; } ;
struct fscrypt_info {TYPE_6__* ci_mode; TYPE_5__ ci_policy; TYPE_3__* ci_inode; } ;
struct TYPE_12__ {int keysize; } ;
struct TYPE_9__ {TYPE_2__* i_sb; } ;
struct TYPE_8__ {TYPE_1__* s_cop; } ;
struct TYPE_7__ {scalar_t__ key_prefix; } ;


 int VAR_0 ;
 struct key* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 struct key* FUNC_3 (scalar_t__,int ,int ,struct fscrypt_key const**) ;
 int FUNC_4 (struct fscrypt_info*,int ) ;
 int FUNC_5 (struct key*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct fscrypt_info *VAR_2)
{
 struct key *VAR_3;
 const struct fscrypt_key *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_3(VAR_1,
     VAR_2->ci_policy.v1.master_key_descriptor,
     VAR_2->ci_mode->keysize, &VAR_4);
 if (VAR_3 == FUNC_0(-VAR_0) && VAR_2->ci_inode->i_sb->s_cop->key_prefix) {
  VAR_3 = FUNC_3(VAR_2->ci_inode->i_sb->s_cop->key_prefix,
      VAR_2->ci_policy.v1.master_key_descriptor,
      VAR_2->ci_mode->keysize, &VAR_4);
 }
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 VAR_5 = FUNC_4(VAR_2, VAR_4->raw);
 FUNC_6(&VAR_3->sem);
 FUNC_5(VAR_3);
 return VAR_5;
}
