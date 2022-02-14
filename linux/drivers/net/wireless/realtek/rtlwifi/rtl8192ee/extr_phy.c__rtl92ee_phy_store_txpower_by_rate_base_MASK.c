
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct rtl_phy {int**** tx_power_by_rate_offset; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct ieee80211_hw*,size_t,size_t,int ,size_t,size_t) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_1(VAR_9);
 struct rtl_phy *VAR_11 = &VAR_10->phy;
 u16 VAR_12 = 0;
 u8 VAR_13 = 0, VAR_14 = 0;

 for (VAR_14 = VAR_5; VAR_14 <= VAR_6; ++VAR_14) {
  if (VAR_14 == VAR_5) {
   VAR_12 = (u16)(VAR_11->tx_power_by_rate_offset
        [VAR_0][VAR_14][VAR_7][3] >> 24) &
        0xFF;
   VAR_13 = (VAR_12 >> 4) * 10 + (VAR_12 & 0xF);
   FUNC_0(VAR_9, VAR_0,
             VAR_14, VAR_1, VAR_7,
             VAR_13);
  } else if (VAR_14 == VAR_6) {
   VAR_12 = (u16)(VAR_11->tx_power_by_rate_offset
        [VAR_0][VAR_14][VAR_7][3] >> 0) &
        0xFF;
   VAR_13 = (VAR_12 >> 4) * 10 + (VAR_12 & 0xF);
   FUNC_0(VAR_9, VAR_0,
             VAR_14, VAR_1, VAR_7,
             VAR_13);
  }
  VAR_12 = (u16)(VAR_11->tx_power_by_rate_offset
       [VAR_0][VAR_14][VAR_7][1] >> 24) & 0xFF;
  VAR_13 = (VAR_12 >> 4) * 10 + (VAR_12 & 0xF);
  FUNC_0(VAR_9, VAR_0, VAR_14,
            VAR_4, VAR_7, VAR_13);

  VAR_12 = (u16)(VAR_11->tx_power_by_rate_offset
       [VAR_0][VAR_14][VAR_7][5] >> 24) & 0xFF;
  VAR_13 = (VAR_12 >> 4) * 10 + (VAR_12 & 0xF);
  FUNC_0(VAR_9, VAR_0, VAR_14,
            VAR_2, VAR_7,
            VAR_13);

  VAR_12 = (u16)(VAR_11->tx_power_by_rate_offset
       [VAR_0][VAR_14][VAR_8][7] >> 24) & 0xFF;
  VAR_13 = (VAR_12 >> 4) * 10 + (VAR_12 & 0xF);
  FUNC_0(VAR_9, VAR_0, VAR_14,
            VAR_3, VAR_8,
            VAR_13);
 }
}
