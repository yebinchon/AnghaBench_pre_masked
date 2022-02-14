
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ubifs_info {int hash_tfm; } ;
struct ubifs_ch {int len; } ;
struct TYPE_4__ {int tfm; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,void const*,int ,int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;

int FUNC_3(const struct ubifs_info *VAR_1, const void *VAR_2,
       u8 *VAR_3)
{
 const struct ubifs_ch *VAR_4 = VAR_2;
 FUNC_0(VAR_0, VAR_1->hash_tfm);
 int VAR_5;

 VAR_0->tfm = VAR_1->hash_tfm;

 VAR_5 = FUNC_1(VAR_0, VAR_2, FUNC_2(VAR_4->len), VAR_3);
 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
