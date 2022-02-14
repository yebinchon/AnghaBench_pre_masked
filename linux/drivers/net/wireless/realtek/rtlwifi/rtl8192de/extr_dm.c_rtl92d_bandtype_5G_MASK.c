
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* ofdm_index; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct rtl_phy {int current_channel; } ;
struct rtl_hal {scalar_t__ macphymode; int interfaceindex; } ;
struct rtl_efuse {int* internal_pa_5g; int eeprom_thermalmeter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct rtl_hal *VAR_2, u8 *VAR_3,
          bool *VAR_4, u8 VAR_5, u8 VAR_6,
          u8 VAR_7, struct rtl_efuse *VAR_8,
          struct rtl_priv *VAR_9, struct rtl_phy *VAR_10,
          const u8 VAR_11[5][VAR_1],
          const u8 VAR_12[8][VAR_1])
{
 int VAR_13;
 u8 VAR_14;
 u8 VAR_15 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  if (VAR_2->macphymode == VAR_0 &&
      VAR_2->interfaceindex == 1)
   *VAR_4 = VAR_8->internal_pa_5g[1];
  else
   *VAR_4 = VAR_8->internal_pa_5g[VAR_13];
  if (*VAR_4) {
   if (VAR_2->interfaceindex == 1 || VAR_13 == VAR_7)
    VAR_15 = 4;
   else
    VAR_15 = 0;
   if (VAR_10->current_channel >= 100 &&
    VAR_10->current_channel <= 165)
    VAR_15 += 2;
  } else {
   if (VAR_2->interfaceindex == 1 || VAR_13 == VAR_7)
    VAR_15 = 2;
   else
    VAR_15 = 0;
  }
  if (VAR_5 > VAR_8->eeprom_thermalmeter)
   VAR_15++;
  if (*VAR_4) {
   if (VAR_6 > VAR_1 - 1)
    VAR_14 = VAR_12[VAR_15]
          [VAR_1 - 1];
   else
    VAR_14 =
         VAR_12[VAR_15][VAR_6];
  } else {
   if (VAR_6 > VAR_1 - 1)
    VAR_14 =
       VAR_11[VAR_15][VAR_1 - 1];
   else
    VAR_14 = VAR_11[VAR_15][VAR_6];
  }
  if (VAR_5 > VAR_8->eeprom_thermalmeter) {
   if (*VAR_4 && VAR_5 > 0x12) {
    VAR_3[VAR_13] = VAR_9->dm.ofdm_index[VAR_13] -
      ((VAR_6 / 2) * 3 + (VAR_6 % 2));
   } else {
    VAR_3[VAR_13] -= VAR_14;
   }
  } else {
   VAR_3[VAR_13] += VAR_14;
  }
 }
}
