
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_umount; } ;
struct fscrypt_master_key {int dummy; } ;


 int FUNC_0 (struct super_block*,struct fscrypt_master_key*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fscrypt_master_key*) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0,
           struct fscrypt_master_key *VAR_1)
{
 int VAR_2;
 int VAR_3;
 FUNC_1(&VAR_0->s_umount);
 VAR_2 = FUNC_3(VAR_0);
 FUNC_4(&VAR_0->s_umount);
 FUNC_2(VAR_1);
 VAR_3 = FUNC_0(VAR_0, VAR_1);

 return VAR_2 ?: VAR_3;
}
