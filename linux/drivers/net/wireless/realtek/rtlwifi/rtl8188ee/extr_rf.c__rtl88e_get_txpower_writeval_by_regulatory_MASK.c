
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ dynamic_txhighpower_lvl; } ;
struct rtl_phy {int** mcs_txpwrlevel_origoffset; int pwrgroup_cnt; int current_chan_bw; } ;
struct rtl_priv {TYPE_1__ dm; struct rtl_phy phy; } ;
struct rtl_efuse {int eeprom_regulatory; int** pwrgroup_ht40; int** pwrgroup_ht20; size_t** txpwr_legacyhtdiff; size_t** txpwr_ht20diff; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct rtl_efuse* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_6,
             u8 VAR_7, u8 VAR_8,
             u32 *VAR_9,
             u32 *VAR_10,
             u32 *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_2(VAR_6);
 struct rtl_phy *VAR_13 = &(VAR_12->phy);
 struct rtl_efuse *VAR_14 = FUNC_1(FUNC_2(VAR_6));
 u8 VAR_15, VAR_16 = 0, VAR_17[4], VAR_18 = 0, VAR_19;
 u32 VAR_20, VAR_21, VAR_22;

 for (VAR_22 = 0; VAR_22 < 2; VAR_22++) {
  switch (VAR_14->eeprom_regulatory) {
  case 0:
   VAR_16 = 0;

   VAR_20 =
       VAR_13->mcs_txpwrlevel_origoffset
    [VAR_16][VAR_8 + (VAR_22 ? 8 : 0)]
       + ((VAR_8 < 2) ? VAR_9[VAR_22] : VAR_10[VAR_22]);

   FUNC_0(VAR_12, VAR_0, VAR_3,
    "RTK better performance, writeval(%c) = 0x%x\n",
    ((VAR_22 == 0) ? 'A' : 'B'), VAR_20);
   break;
  case 1:
   if (VAR_13->pwrgroup_cnt == 1) {
    VAR_16 = 0;
   } else {
    if (VAR_7 < 3)
     VAR_16 = 0;
    else if (VAR_7 < 6)
     VAR_16 = 1;
    else if (VAR_7 < 9)
     VAR_16 = 2;
    else if (VAR_7 < 12)
     VAR_16 = 3;
    else if (VAR_7 < 14)
     VAR_16 = 4;
    else if (VAR_7 == 14)
     VAR_16 = 5;
   }

   VAR_20 =
       VAR_13->mcs_txpwrlevel_origoffset[VAR_16]
       [VAR_8 + (VAR_22 ? 8 : 0)] + ((VAR_8 < 2) ?
            VAR_9[VAR_22] :
            VAR_10[VAR_22]);

   FUNC_0(VAR_12, VAR_0, VAR_3,
    "Realtek regulatory, 20MHz, writeval(%c) = 0x%x\n",
     ((VAR_22 == 0) ? 'A' : 'B'), VAR_20);

   break;
  case 2:
   VAR_20 =
       ((VAR_8 < 2) ? VAR_9[VAR_22] : VAR_10[VAR_22]);

   FUNC_0(VAR_12, VAR_0, VAR_3,
    "Better regulatory, writeval(%c) = 0x%x\n",
    ((VAR_22 == 0) ? 'A' : 'B'), VAR_20);
   break;
  case 3:
   VAR_16 = 0;

   if (VAR_13->current_chan_bw == VAR_2) {
    FUNC_0(VAR_12, VAR_0, VAR_3,
     "customer's limit, 40MHz rf(%c) = 0x%x\n",
     ((VAR_22 == 0) ? 'A' : 'B'),
     VAR_14->pwrgroup_ht40[VAR_22][VAR_7 -
            1]);
   } else {
    FUNC_0(VAR_12, VAR_0, VAR_3,
     "customer's limit, 20MHz rf(%c) = 0x%x\n",
     ((VAR_22 == 0) ? 'A' : 'B'),
     VAR_14->pwrgroup_ht20[VAR_22][VAR_7 -
            1]);
   }

   if (VAR_8 < 2)
    VAR_18 =
       VAR_14->txpwr_legacyhtdiff[VAR_22][VAR_7-1];
   else if (VAR_13->current_chan_bw == VAR_1)
    VAR_18 =
     VAR_14->txpwr_ht20diff[VAR_22][VAR_7-1];

   if (VAR_13->current_chan_bw == VAR_2)
    VAR_19 =
     VAR_14->pwrgroup_ht40[VAR_22][VAR_7-1];
   else
    VAR_19 =
     VAR_14->pwrgroup_ht20[VAR_22][VAR_7-1];

   if (VAR_18 > VAR_19)
    VAR_18 = 0;
   else
    VAR_18 = VAR_19 - VAR_18;

   for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
    VAR_17[VAR_15] =
        (u8)((VAR_13->mcs_txpwrlevel_origoffset
       [VAR_16][VAR_8 +
       (VAR_22 ? 8 : 0)] & (0x7f <<
       (VAR_15 * 8))) >> (VAR_15 * 8));

    if (VAR_17[VAR_15] > VAR_18)
     VAR_17[VAR_15] = VAR_18;
   }

   VAR_21 = (VAR_17[3] << 24) |
       (VAR_17[2] << 16) |
       (VAR_17[1] << 8) | (VAR_17[0]);

   FUNC_0(VAR_12, VAR_0, VAR_3,
    "Customer's limit rf(%c) = 0x%x\n",
     ((VAR_22 == 0) ? 'A' : 'B'), VAR_21);

   VAR_20 = VAR_21 +
       ((VAR_8 < 2) ? VAR_9[VAR_22] : VAR_10[VAR_22]);

   FUNC_0(VAR_12, VAR_0, VAR_3,
    "Customer, writeval rf(%c)= 0x%x\n",
     ((VAR_22 == 0) ? 'A' : 'B'), VAR_20);
   break;
  default:
   VAR_16 = 0;
   VAR_20 =
       VAR_13->mcs_txpwrlevel_origoffset[VAR_16]
       [VAR_8 + (VAR_22 ? 8 : 0)]
       + ((VAR_8 < 2) ? VAR_9[VAR_22] : VAR_10[VAR_22]);

   FUNC_0(VAR_12, VAR_0, VAR_3,
    "RTK better performance, writeval rf(%c) = 0x%x\n",
     ((VAR_22 == 0) ? 'A' : 'B'), VAR_20);
   break;
  }

  if (VAR_12->dm.dynamic_txhighpower_lvl == VAR_4)
   VAR_20 = VAR_20 - 0x06060606;
  else if (VAR_12->dm.dynamic_txhighpower_lvl ==
    VAR_5)
   VAR_20 = VAR_20 - 0x0c0c0c0c;
  *(VAR_11 + VAR_22) = VAR_20;
 }
}
