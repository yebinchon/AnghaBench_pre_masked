
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int well_known_message ;
typedef int u8 ;
struct ubifs_info {int hmac_tfm; } ;
struct TYPE_6__ {int tfm; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (struct ubifs_info*) ;

int FUNC_5(struct ubifs_info *VAR_1, u8 *VAR_2)
{
 FUNC_0(VAR_0, VAR_1->hmac_tfm);
 int VAR_3;
 const char VAR_4[] = "UBIFS";

 if (!FUNC_4(VAR_1))
  return 0;

 VAR_0->tfm = VAR_1->hmac_tfm;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_0, VAR_4,
      sizeof(VAR_4) - 1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 if (VAR_3)
  return VAR_3;
 return 0;
}
