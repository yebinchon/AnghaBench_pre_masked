
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {scalar_t__ eeprom; } ;
struct il3945_eeprom {int antenna_switch_type; } ;
typedef int __le32 ;
struct TYPE_2__ {int antenna; } ;





 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__le32
FUNC_1(const struct il_priv *VAR_4)
{
 struct il3945_eeprom *VAR_5 = (struct il3945_eeprom *)VAR_4->eeprom;

 switch (VAR_3.antenna) {
 case 129:
  return 0;

 case 128:
  if (VAR_5->antenna_switch_type)
   return VAR_2 | VAR_1;
  return VAR_2 | VAR_0;

 case 130:
  if (VAR_5->antenna_switch_type)
   return VAR_2 | VAR_0;
  return VAR_2 | VAR_1;
 }


 FUNC_0("Bad antenna selector value (0x%x)\n",
        VAR_3.antenna);

 return 0;
}
