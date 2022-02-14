
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int***** txpwr_limit_2_4g; int*** txpwr_by_rate_base_24g; int***** txpwr_limit_5g; int*** txpwr_by_rate_base_5g; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_21)
{
 struct rtl_priv *VAR_22 = FUNC_3(VAR_21);
 struct rtl_phy *VAR_23 = &VAR_22->phy;
 u8 VAR_24, VAR_25;
 u8 VAR_26, VAR_27, VAR_28, VAR_29;
 u8 VAR_30 = 0;
 u8 VAR_31 = 0;
 s8 VAR_32 = 0, VAR_33 = 0;
 u8 VAR_34 = 0;

 FUNC_0(VAR_22, VAR_4, VAR_5,
  "=====> _rtl8812ae_phy_convert_txpower_limit_to_power_index()\n");

 FUNC_1(VAR_21);

 for (VAR_26 = 0; VAR_26 < VAR_10; ++VAR_26) {
  for (VAR_27 = 0; VAR_27 < VAR_6; ++VAR_27) {
   for (VAR_28 = 0; VAR_28 < VAR_2; ++VAR_28) {
    for (VAR_29 = 0; VAR_29 < VAR_9; ++VAR_29) {


     if (VAR_29 == 0) {
      VAR_30 =
       FUNC_2(VAR_21,
       VAR_0, VAR_12);
     } else if (VAR_29 == 1) {
      VAR_30 =
       FUNC_2(VAR_21,
       VAR_0, VAR_13);
     } else if (VAR_29 == 2) {
      VAR_30 =
       FUNC_2(VAR_21,
       VAR_0, VAR_15);
     } else if (VAR_29 == 3) {
      VAR_30 =
       FUNC_2(VAR_21,
       VAR_0, VAR_14);
     }

     VAR_33 = VAR_23->txpwr_limit_2_4g[VAR_26]
      [VAR_27][VAR_29][VAR_28][VAR_18];

     for (VAR_34 = VAR_18;
      VAR_34 < VAR_11;
      ++VAR_34) {
      if (VAR_29 == 3)
       VAR_24 =
       VAR_23->txpwr_by_rate_base_24g[VAR_34][VAR_20][VAR_30];
      else
       VAR_24 =
       VAR_23->txpwr_by_rate_base_24g[VAR_34][VAR_19][VAR_30];

      if (VAR_33 != VAR_8) {
       VAR_32 = VAR_33 - VAR_24;
       VAR_23->txpwr_limit_2_4g[VAR_26]
        [VAR_27][VAR_29][VAR_28][VAR_34] =
        VAR_32;
      }

      FUNC_0(VAR_22, VAR_4, VAR_5,
       "TxPwrLimit_2_4G[regulation %d][bw %d][rateSection %d][channel %d] = %d\n(TxPwrLimit in dBm %d - BW40PwrLmt2_4G[channel %d][rfpath %d] %d)\n",
       VAR_26, VAR_27, VAR_29, VAR_28,
       VAR_23->txpwr_limit_2_4g[VAR_26][VAR_27]
       [VAR_29][VAR_28][VAR_34], (VAR_33 == 63)
       ? 0 : VAR_33/2, VAR_28, VAR_34,
       VAR_24);
     }
    }
   }
  }
 }
 for (VAR_26 = 0; VAR_26 < VAR_10; ++VAR_26) {
  for (VAR_27 = 0; VAR_27 < VAR_7; ++VAR_27) {
   for (VAR_28 = 0; VAR_28 < VAR_3; ++VAR_28) {
    for (VAR_29 = 0; VAR_29 < VAR_9; ++VAR_29) {



     if (VAR_29 == 1) {
      VAR_31 =
       FUNC_2(VAR_21,
       VAR_1, VAR_13);
     } else if (VAR_29 == 2) {
      VAR_31 =
       FUNC_2(VAR_21,
       VAR_1, VAR_15);
     } else if (VAR_29 == 3) {
      VAR_31 =
       FUNC_2(VAR_21,
       VAR_1, VAR_14);
     } else if (VAR_29 == 4) {
      VAR_31 =
       FUNC_2(VAR_21,
       VAR_1, VAR_16);
     } else if (VAR_29 == 5) {
      VAR_31 =
       FUNC_2(VAR_21,
       VAR_1, VAR_17);
     }

     VAR_33 = VAR_23->txpwr_limit_5g[VAR_26]
      [VAR_27][VAR_29][VAR_28]
      [VAR_18];

     for (VAR_34 = VAR_18;
          VAR_34 < VAR_11;
          ++VAR_34) {
      if (VAR_29 == 3 || VAR_29 == 5)
       VAR_25 =
       VAR_23->txpwr_by_rate_base_5g[VAR_34]
       [VAR_20][VAR_31];
      else
       VAR_25 =
       VAR_23->txpwr_by_rate_base_5g[VAR_34]
       [VAR_19][VAR_31];

      if (VAR_33 != VAR_8) {
       VAR_32 =
        VAR_33 - VAR_25;
       VAR_23->txpwr_limit_5g[VAR_26]
        [VAR_27][VAR_29][VAR_28]
        [VAR_34] = VAR_32;
      }

      FUNC_0(VAR_22, VAR_4, VAR_5,
       "TxPwrLimit_5G[regulation %d][bw %d][rateSection %d][channel %d] =%d\n(TxPwrLimit in dBm %d - BW40PwrLmt5G[chnl group %d][rfpath %d] %d)\n",
       VAR_26, VAR_27, VAR_29,
       VAR_28, VAR_23->txpwr_limit_5g[VAR_26]
       [VAR_27][VAR_29][VAR_28][VAR_34],
       VAR_33, VAR_28, VAR_34, VAR_25);
     }
    }
   }
  }
 }
 FUNC_0(VAR_22, VAR_4, VAR_5,
   "<===== _rtl8812ae_phy_convert_txpower_limit_to_power_index()\n");
}
