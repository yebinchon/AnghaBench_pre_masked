
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct il_priv {TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ eeprom_ver; scalar_t__ eeprom_calib_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct il_priv*,int ) ;

int
FUNC_3(struct il_priv *VAR_3)
{
 u16 VAR_4;
 u16 VAR_5;

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 VAR_5 = FUNC_2(VAR_3, VAR_0);

 if (VAR_4 < VAR_3->cfg->eeprom_ver ||
     VAR_5 < VAR_3->cfg->eeprom_calib_ver)
  goto err;

 FUNC_1("device EEPROM VER=0x%x, CALIB=0x%x\n", VAR_4, VAR_5);

 return 0;
err:
 FUNC_0("Unsupported (too old) EEPROM VER=0x%x < 0x%x "
        "CALIB=0x%x < 0x%x\n", VAR_4, VAR_3->cfg->eeprom_ver,
        VAR_5, VAR_3->cfg->eeprom_calib_ver);
 return -VAR_2;

}
