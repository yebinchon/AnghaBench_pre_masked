
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;
struct ubifs_dent_node {int name; int nlen; } ;
struct fscrypt_name {int dummy; } ;


 int FUNC_0 (struct ubifs_info*,union ubifs_key const*,void*,struct fscrypt_name const*) ;
 int FUNC_1 (struct fscrypt_name const*) ;
 int FUNC_2 (struct fscrypt_name const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct ubifs_info*,union ubifs_key const*,void*) ;

int FUNC_6(struct ubifs_info *VAR_0, const union ubifs_key *VAR_1,
   void *VAR_2, const struct fscrypt_name *VAR_3)
{
 int VAR_4, VAR_5;
 const struct ubifs_dent_node *VAR_6 = VAR_2;





 VAR_4 = FUNC_5(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_5 = FUNC_3(VAR_6->nlen);
 if (FUNC_1(VAR_3) == VAR_5 && !FUNC_4(VAR_6->name, FUNC_2(VAR_3), VAR_5))
  return 0;






 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
