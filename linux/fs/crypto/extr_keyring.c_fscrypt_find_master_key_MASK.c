
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_master_keys; } ;
struct key {int dummy; } ;
struct fscrypt_key_specifier {int dummy; } ;


 int VAR_0 ;
 struct key* FUNC_0 (int ) ;
 int VAR_1 ;
 struct key* FUNC_1 (int ) ;
 int FUNC_2 (char*,struct fscrypt_key_specifier const*) ;
 int VAR_2 ;
 struct key* FUNC_3 (struct key*,int *,char*) ;

struct key *FUNC_4(struct super_block *VAR_3,
        const struct fscrypt_key_specifier *VAR_4)
{
 struct key *VAR_5;
 char VAR_6[VAR_1];


 VAR_5 = FUNC_1(VAR_3->s_master_keys);
 if (VAR_5 == ((void*)0))
  return FUNC_0(-VAR_0);

 FUNC_2(VAR_6, VAR_4);
 return FUNC_3(VAR_5, &VAR_2, VAR_6);
}
