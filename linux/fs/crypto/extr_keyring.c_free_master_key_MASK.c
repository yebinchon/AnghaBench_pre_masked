
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fscrypt_master_key {int mk_users; int * mk_mode_keys; int mk_secret; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fscrypt_master_key*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct fscrypt_master_key *VAR_0)
{
 size_t VAR_1;

 FUNC_4(&VAR_0->mk_secret);

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->mk_mode_keys); VAR_1++)
  FUNC_1(VAR_0->mk_mode_keys[VAR_1]);

 FUNC_2(VAR_0->mk_users);
 FUNC_3(VAR_0);
}
