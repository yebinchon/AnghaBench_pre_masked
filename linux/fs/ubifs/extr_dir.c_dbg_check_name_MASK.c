
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;
struct ubifs_dent_node {int name; int nlen; } ;
struct fscrypt_name {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info const*) ;
 scalar_t__ FUNC_1 (struct fscrypt_name const*) ;
 int FUNC_2 (struct fscrypt_name const*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(const struct ubifs_info *VAR_1,
     const struct ubifs_dent_node *VAR_2,
     const struct fscrypt_name *VAR_3)
{
 if (!FUNC_0(VAR_1))
  return 0;
 if (FUNC_3(VAR_2->nlen) != FUNC_1(VAR_3))
  return -VAR_0;
 if (FUNC_4(VAR_2->name, FUNC_2(VAR_3), FUNC_1(VAR_3)))
  return -VAR_0;
 return 0;
}
