
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct ubifs_info {int hmac_desc_len; int hmac_tfm; } ;
struct TYPE_6__ {int tfm; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,void*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,void const*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (struct ubifs_info const*,int) ;

__attribute__((used)) static int FUNC_5(const struct ubifs_info *VAR_1, const void *VAR_2,
    int VAR_3, int VAR_4, void *VAR_5)
{
 FUNC_0(VAR_0, VAR_1->hmac_tfm);
 int VAR_6 = VAR_1->hmac_desc_len;
 int VAR_7;

 FUNC_4(VAR_1, VAR_4 > 8);
 FUNC_4(VAR_1, VAR_4 + VAR_6 < VAR_3);

 VAR_0->tfm = VAR_1->hmac_tfm;

 VAR_7 = FUNC_2(VAR_0);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_3(VAR_0, VAR_2 + 8, VAR_4 - 8);
 if (VAR_7 < 0)
  return VAR_7;


 if (VAR_3 - VAR_4 - VAR_6 > 0) {
  VAR_7 = FUNC_3(VAR_0, VAR_2 + VAR_4 + VAR_6,
       VAR_3 - VAR_4 - VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return FUNC_1(VAR_0, VAR_5);
}
