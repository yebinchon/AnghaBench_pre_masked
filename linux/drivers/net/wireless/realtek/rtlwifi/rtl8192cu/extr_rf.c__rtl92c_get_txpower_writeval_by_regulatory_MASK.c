
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ dynamic_txhighpower_lvl; } ;
struct rtl_phy {int** mcs_offset; int pwrgroup_cnt; int current_chan_bw; } ;
struct rtl_priv {TYPE_1__ dm; struct rtl_phy phy; } ;
struct rtl_efuse {int eeprom_regulatory; int** pwrgroup_ht40; int** pwrgroup_ht20; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct rtl_efuse* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_7,
             u8 VAR_8, u8 VAR_9,
             u32 *VAR_10,
             u32 *VAR_11,
             u32 *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_2(VAR_7);
 struct rtl_phy *VAR_14 = &(VAR_13->phy);
 struct rtl_efuse *VAR_15 = FUNC_1(FUNC_2(VAR_7));
 u8 VAR_16, VAR_17 = 0, VAR_18[4];
 u32 VAR_19, VAR_20, VAR_21;

 for (VAR_21 = 0; VAR_21 < 2; VAR_21++) {
  switch (VAR_15->eeprom_regulatory) {
  case 0:
   VAR_17 = 0;
   VAR_19 = VAR_14->mcs_offset
       [VAR_17][VAR_9 + (VAR_21 ? 8 : 0)]
       + ((VAR_9 < 2) ? VAR_10[VAR_21] : VAR_11[VAR_21]);
   FUNC_0(VAR_13, VAR_0, VAR_3,
    "RTK better performance,writeval(%c) = 0x%x\n",
    VAR_21 == 0 ? 'A' : 'B', VAR_19);
   break;
  case 1:
   if (VAR_14->pwrgroup_cnt == 1)
    VAR_17 = 0;
   if (VAR_14->pwrgroup_cnt >= 3) {
    if (VAR_8 <= 3)
     VAR_17 = 0;
    else if (VAR_8 >= 4 && VAR_8 <= 9)
     VAR_17 = 1;
    else if (VAR_8 > 9)
     VAR_17 = 2;
    if (VAR_14->current_chan_bw ==
        VAR_1)
     VAR_17++;
    else
     VAR_17 += 4;
   }
   VAR_19 = VAR_14->mcs_offset[VAR_17][VAR_9 +
     (VAR_21 ? 8 : 0)] +
     ((VAR_9 < 2) ? VAR_10[VAR_21] :
     VAR_11[VAR_21]);
   FUNC_0(VAR_13, VAR_0, VAR_3,
    "Realtek regulatory, 20MHz, writeval(%c) = 0x%x\n",
    VAR_21 == 0 ? 'A' : 'B', VAR_19);
   break;
  case 2:
   VAR_19 = ((VAR_9 < 2) ? VAR_10[VAR_21] :
       VAR_11[VAR_21]);
   FUNC_0(VAR_13, VAR_0, VAR_3,
    "Better regulatory,writeval(%c) = 0x%x\n",
    VAR_21 == 0 ? 'A' : 'B', VAR_19);
   break;
  case 3:
   VAR_17 = 0;
   if (VAR_14->current_chan_bw ==
       VAR_2) {
    FUNC_0(VAR_13, VAR_0, VAR_3,
     "customer's limit, 40MHzrf(%c) = 0x%x\n",
     VAR_21 == 0 ? 'A' : 'B',
     VAR_15->pwrgroup_ht40[VAR_21]
     [VAR_8 - 1]);
   } else {
    FUNC_0(VAR_13, VAR_0, VAR_3,
     "customer's limit, 20MHz rf(%c) = 0x%x\n",
     VAR_21 == 0 ? 'A' : 'B',
     VAR_15->pwrgroup_ht20[VAR_21]
     [VAR_8 - 1]);
   }
   for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
    VAR_18[VAR_16] = (u8) ((VAR_14->mcs_offset
        [VAR_17][VAR_9 + (VAR_21 ? 8 : 0)]
        & (0x7f << (VAR_16 * 8))) >> (VAR_16 * 8));
    if (VAR_14->current_chan_bw ==
        VAR_2) {
     if (VAR_18[VAR_16] >
         VAR_15->pwrgroup_ht40[VAR_21]
      [VAR_8 - 1])
      VAR_18[VAR_16] = VAR_15->
          pwrgroup_ht40[VAR_21]
          [VAR_8 - 1];
    } else {
     if (VAR_18[VAR_16] >
         VAR_15->pwrgroup_ht20[VAR_21]
      [VAR_8 - 1])
      VAR_18[VAR_16] =
          VAR_15->pwrgroup_ht20[VAR_21]
          [VAR_8 - 1];
    }
   }
   VAR_20 = (VAR_18[3] << 24) |
       (VAR_18[2] << 16) |
       (VAR_18[1] << 8) | (VAR_18[0]);
   FUNC_0(VAR_13, VAR_0, VAR_3,
    "Customer's limit rf(%c) = 0x%x\n",
    VAR_21 == 0 ? 'A' : 'B', VAR_20);
   VAR_19 = VAR_20 + ((VAR_9 < 2) ?
       VAR_10[VAR_21] : VAR_11[VAR_21]);
   FUNC_0(VAR_13, VAR_0, VAR_3,
    "Customer, writeval rf(%c)= 0x%x\n",
    VAR_21 == 0 ? 'A' : 'B', VAR_19);
   break;
  default:
   VAR_17 = 0;
   VAR_19 = VAR_14->mcs_offset[VAR_17]
       [VAR_9 + (VAR_21 ? 8 : 0)] + ((VAR_9 < 2) ?
       VAR_10[VAR_21] : VAR_11[VAR_21]);
   FUNC_0(VAR_13, VAR_0, VAR_3,
    "RTK better performance, writevalrf(%c) = 0x%x\n",
    VAR_21 == 0 ? 'A' : 'B', VAR_19);
   break;
  }
  if (VAR_13->dm.dynamic_txhighpower_lvl ==
      VAR_5)
   VAR_19 = 0x14141414;
  else if (VAR_13->dm.dynamic_txhighpower_lvl ==
    VAR_6)
   VAR_19 = 0x00000000;
  if (VAR_13->dm.dynamic_txhighpower_lvl == VAR_4)
   VAR_19 = VAR_19 - 0x06060606;
  *(VAR_12 + VAR_21) = VAR_19;
 }
}
