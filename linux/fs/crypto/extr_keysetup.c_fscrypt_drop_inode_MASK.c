
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_crypt_info; } ;
struct fscrypt_master_key {int mk_secret; } ;
struct fscrypt_info {TYPE_2__* ci_master_key; } ;
struct TYPE_3__ {struct fscrypt_master_key** data; } ;
struct TYPE_4__ {TYPE_1__ payload; } ;


 struct fscrypt_info* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct inode *VAR_0)
{
 const struct fscrypt_info *VAR_1 = FUNC_0(VAR_0->i_crypt_info);
 const struct fscrypt_master_key *VAR_2;







 if (!VAR_1 || !VAR_1->ci_master_key)
  return 0;
 VAR_2 = VAR_1->ci_master_key->payload.data[0];
 return !FUNC_1(&VAR_2->mk_secret);
}
