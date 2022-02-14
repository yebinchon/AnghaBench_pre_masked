
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 struct shash_desc* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct shash_desc*) ;
 int FUNC_3 (struct shash_desc*) ;
 struct shash_desc* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct ubifs_info const*) ;

__attribute__((used)) static struct shash_desc *FUNC_6(const struct ubifs_info *VAR_2,
      struct crypto_shash *VAR_3)
{
 struct shash_desc *VAR_4;
 int VAR_5;

 if (!FUNC_5(VAR_2))
  return ((void*)0);

 VAR_4 = FUNC_4(sizeof(*VAR_4) + FUNC_1(VAR_3), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->tfm = VAR_3;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5) {
  FUNC_3(VAR_4);
  return FUNC_0(VAR_5);
 }

 return VAR_4;
}
