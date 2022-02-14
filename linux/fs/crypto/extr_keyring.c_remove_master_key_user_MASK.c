
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct fscrypt_master_key {int mk_users; } ;


 scalar_t__ FUNC_0 (struct key*) ;
 int FUNC_1 (struct key*) ;
 struct key* FUNC_2 (struct fscrypt_master_key*) ;
 int FUNC_3 (struct key*) ;
 int FUNC_4 (int ,struct key*) ;

__attribute__((used)) static int FUNC_5(struct fscrypt_master_key *VAR_0)
{
 struct key *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);
 VAR_2 = FUNC_4(VAR_0->mk_users, VAR_1);
 FUNC_3(VAR_1);
 return VAR_2;
}
