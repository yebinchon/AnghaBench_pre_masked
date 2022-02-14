
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int log_hash; int hash_tfm; int hmac_tfm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ubifs_info*) ;

void FUNC_3(struct ubifs_info *VAR_0)
{
 if (!FUNC_2(VAR_0))
  return;

 FUNC_0(VAR_0->hmac_tfm);
 FUNC_0(VAR_0->hash_tfm);
 FUNC_1(VAR_0->log_hash);
}
