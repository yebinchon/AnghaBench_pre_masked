
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shash_desc {int dummy; } ;
struct TYPE_2__ {struct crypto_shash* tfm; } ;
struct sdesc {TYPE_1__ shash; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char const*) ;
 struct crypto_shash* FUNC_3 (char const*,int ,int ) ;
 int FUNC_4 (struct crypto_shash*) ;
 int FUNC_5 (struct crypto_shash*) ;
 struct sdesc* FUNC_6 (size_t,int ) ;

int
FUNC_7(const char *VAR_3,
  struct crypto_shash **VAR_4, struct sdesc **VAR_5)
{
 int VAR_6 = 0;
 size_t VAR_7;

 if (*VAR_5 != ((void*)0))
  return 0;

 *VAR_4 = FUNC_3(VAR_3, 0, 0);
 if (FUNC_0(*VAR_4)) {
  FUNC_2(VAR_2, "could not allocate crypto %s\n", VAR_3);
  VAR_6 = FUNC_1(*VAR_4);
  *VAR_4 = ((void*)0);
  *VAR_5 = ((void*)0);
  return VAR_6;
 }

 VAR_7 = sizeof(struct shash_desc) + FUNC_5(*VAR_4);
 *VAR_5 = FUNC_6(VAR_7, VAR_1);
 if (*VAR_5 == ((void*)0)) {
  FUNC_2(VAR_2, "no memory left to allocate crypto %s\n", VAR_3);
  FUNC_4(*VAR_4);
  *VAR_4 = ((void*)0);
  return -VAR_0;
 }

 (*VAR_5)->shash.tfm = *VAR_4;
 return 0;
}
