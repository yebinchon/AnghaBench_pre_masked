
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct il_priv {TYPE_1__* cfg; } ;
struct il_eeprom_channel {int dummy; } ;
struct TYPE_2__ {int * regulatory_bands; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_2 (struct il_priv const*,int ) ;

__attribute__((used)) static void
FUNC_3(const struct il_priv *VAR_7, int VAR_8,
         int *VAR_9,
         const struct il_eeprom_channel **VAR_10,
         const u8 **VAR_11)
{
 u32 VAR_12 = VAR_7->cfg->regulatory_bands[VAR_8 - 1];

 switch (VAR_8) {
 case 1:
  *VAR_9 = FUNC_0(VAR_0);
  *VAR_10 =
      (struct il_eeprom_channel *)FUNC_2(VAR_7,
             VAR_12);
  *VAR_11 = VAR_0;
  break;
 case 2:
  *VAR_9 = FUNC_0(VAR_1);
  *VAR_10 =
      (struct il_eeprom_channel *)FUNC_2(VAR_7,
             VAR_12);
  *VAR_11 = VAR_1;
  break;
 case 3:
  *VAR_9 = FUNC_0(VAR_2);
  *VAR_10 =
      (struct il_eeprom_channel *)FUNC_2(VAR_7,
             VAR_12);
  *VAR_11 = VAR_2;
  break;
 case 4:
  *VAR_9 = FUNC_0(VAR_3);
  *VAR_10 =
      (struct il_eeprom_channel *)FUNC_2(VAR_7,
             VAR_12);
  *VAR_11 = VAR_3;
  break;
 case 5:
  *VAR_9 = FUNC_0(VAR_4);
  *VAR_10 =
      (struct il_eeprom_channel *)FUNC_2(VAR_7,
             VAR_12);
  *VAR_11 = VAR_4;
  break;
 case 6:
  *VAR_9 = FUNC_0(VAR_5);
  *VAR_10 =
      (struct il_eeprom_channel *)FUNC_2(VAR_7,
             VAR_12);
  *VAR_11 = VAR_5;
  break;
 case 7:
  *VAR_9 = FUNC_0(VAR_6);
  *VAR_10 =
      (struct il_eeprom_channel *)FUNC_2(VAR_7,
             VAR_12);
  *VAR_11 = VAR_6;
  break;
 default:
  FUNC_1();
 }
}
