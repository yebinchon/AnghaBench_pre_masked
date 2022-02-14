
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ubifs_info {int hash_len; int hmac_tfm; } ;
struct TYPE_4__ {int tfm; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct ubifs_info *VAR_1, u8 *VAR_2, u8 *VAR_3)
{
 FUNC_0(VAR_0, VAR_1->hmac_tfm);

 VAR_0->tfm = VAR_1->hmac_tfm;

 return FUNC_1(VAR_0, VAR_2, VAR_1->hash_len, VAR_3);
}
