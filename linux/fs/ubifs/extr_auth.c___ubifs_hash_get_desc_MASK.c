
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int hash_tfm; } ;
struct shash_desc {int dummy; } ;


 struct shash_desc* FUNC_0 (struct ubifs_info const*,int ) ;

struct shash_desc *FUNC_1(const struct ubifs_info *VAR_0)
{
 return FUNC_0(VAR_0, VAR_0->hash_tfm);
}
