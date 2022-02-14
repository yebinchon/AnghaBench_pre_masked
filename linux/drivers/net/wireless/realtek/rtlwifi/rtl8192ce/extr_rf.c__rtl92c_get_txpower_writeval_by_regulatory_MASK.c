
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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct rtl_efuse* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_5,
             u8 VAR_6, u8 VAR_7,
             u32 *VAR_8,
             u32 *VAR_9,
             u32 *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_2(VAR_5);
 struct rtl_phy *VAR_12 = &(VAR_11->phy);
 struct rtl_efuse *VAR_13 = FUNC_1(FUNC_2(VAR_5));
 u8 VAR_14, VAR_15 = 0, VAR_16[4];
 u32 VAR_17, VAR_18, VAR_19;

 for (VAR_19 = 0; VAR_19 < 2; VAR_19++) {
  switch (VAR_13->eeprom_regulatory) {
  case 0:
   VAR_15 = 0;

   VAR_17 = VAR_12->mcs_offset[VAR_15][VAR_7 +
       (VAR_19 ? 8 : 0)]
       + ((VAR_7 < 2) ? VAR_8[VAR_19] : VAR_9[VAR_19]);

   FUNC_0(VAR_11, VAR_0, VAR_2,
    "RTK better performance, writeval(%c) = 0x%x\n",
    VAR_19 == 0 ? 'A' : 'B', VAR_17);
   break;
  case 1:
   if (VAR_12->current_chan_bw == VAR_1) {
    VAR_17 = ((VAR_7 < 2) ? VAR_8[VAR_19] :
         VAR_9[VAR_19]);

    FUNC_0(VAR_11, VAR_0, VAR_2,
     "Realtek regulatory, 40MHz, writeval(%c) = 0x%x\n",
     VAR_19 == 0 ? 'A' : 'B', VAR_17);
   } else {
    if (VAR_12->pwrgroup_cnt == 1)
     VAR_15 = 0;
    if (VAR_12->pwrgroup_cnt >= 3) {
     if (VAR_6 <= 3)
      VAR_15 = 0;
     else if (VAR_6 >= 4 && VAR_6 <= 9)
      VAR_15 = 1;
     else if (VAR_6 > 9)
      VAR_15 = 2;
     if (VAR_12->pwrgroup_cnt == 4)
      VAR_15++;
    }

    VAR_17 = VAR_12->mcs_offset[VAR_15]
        [VAR_7 + (VAR_19 ? 8 : 0)] + ((VAR_7 < 2) ?
             VAR_8[VAR_19] :
             VAR_9[VAR_19]);

    FUNC_0(VAR_11, VAR_0, VAR_2,
     "Realtek regulatory, 20MHz, writeval(%c) = 0x%x\n",
     VAR_19 == 0 ? 'A' : 'B', VAR_17);
   }
   break;
  case 2:
   VAR_17 =
       ((VAR_7 < 2) ? VAR_8[VAR_19] : VAR_9[VAR_19]);

   FUNC_0(VAR_11, VAR_0, VAR_2,
    "Better regulatory, writeval(%c) = 0x%x\n",
    VAR_19 == 0 ? 'A' : 'B', VAR_17);
   break;
  case 3:
   VAR_15 = 0;

   if (VAR_12->current_chan_bw == VAR_1) {
    FUNC_0(VAR_11, VAR_0, VAR_2,
     "customer's limit, 40MHz rf(%c) = 0x%x\n",
     VAR_19 == 0 ? 'A' : 'B',
     VAR_13->pwrgroup_ht40[VAR_19][VAR_6 -
            1]);
   } else {
    FUNC_0(VAR_11, VAR_0, VAR_2,
     "customer's limit, 20MHz rf(%c) = 0x%x\n",
     VAR_19 == 0 ? 'A' : 'B',
     VAR_13->pwrgroup_ht20[VAR_19][VAR_6 -
            1]);
   }
   for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
    VAR_16[VAR_14] = (u8) ((VAR_12->mcs_offset
       [VAR_15][VAR_7 +
       (VAR_19 ? 8 : 0)] & (0x7f << (VAR_14 * 8))) >>
       (VAR_14 * 8));

    if (VAR_12->current_chan_bw ==
        VAR_1) {
     if (VAR_16[VAR_14] >
         VAR_13->
         pwrgroup_ht40[VAR_19][VAR_6 - 1])
      VAR_16[VAR_14] =
          VAR_13->pwrgroup_ht40[VAR_19]
          [VAR_6 - 1];
    } else {
     if (VAR_16[VAR_14] >
         VAR_13->
         pwrgroup_ht20[VAR_19][VAR_6 - 1])
      VAR_16[VAR_14] =
          VAR_13->pwrgroup_ht20[VAR_19]
          [VAR_6 - 1];
    }
   }

   VAR_18 = (VAR_16[3] << 24) |
       (VAR_16[2] << 16) |
       (VAR_16[1] << 8) | (VAR_16[0]);

   FUNC_0(VAR_11, VAR_0, VAR_2,
    "Customer's limit rf(%c) = 0x%x\n",
    VAR_19 == 0 ? 'A' : 'B', VAR_18);

   VAR_17 = VAR_18 +
       ((VAR_7 < 2) ? VAR_8[VAR_19] : VAR_9[VAR_19]);

   FUNC_0(VAR_11, VAR_0, VAR_2,
    "Customer, writeval rf(%c)= 0x%x\n",
    VAR_19 == 0 ? 'A' : 'B', VAR_17);
   break;
  default:
   VAR_15 = 0;
   VAR_17 = VAR_12->mcs_offset[VAR_15]
       [VAR_7 + (VAR_19 ? 8 : 0)]
       + ((VAR_7 < 2) ? VAR_8[VAR_19] : VAR_9[VAR_19]);

   FUNC_0(VAR_11, VAR_0, VAR_2,
    "RTK better performance, writeval rf(%c) = 0x%x\n",
    VAR_19 == 0 ? 'A' : 'B', VAR_17);
   break;
  }

  if (VAR_11->dm.dynamic_txhighpower_lvl == VAR_3)
   VAR_17 = VAR_17 - 0x06060606;
  else if (VAR_11->dm.dynamic_txhighpower_lvl ==
    VAR_4)
   VAR_17 = VAR_17 - 0x0c0c0c0c;
  *(VAR_10 + VAR_19) = VAR_17;
 }
}
