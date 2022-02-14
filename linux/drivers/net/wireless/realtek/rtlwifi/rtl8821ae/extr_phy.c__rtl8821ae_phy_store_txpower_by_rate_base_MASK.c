
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
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ieee80211_hw*,size_t,size_t,int ,size_t,size_t) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_1(VAR_12);
 struct rtl_phy *VAR_14 = &VAR_13->phy;
 u16 VAR_15 = 0;
 u8 VAR_16 = 0, VAR_17 = 0;

 for (VAR_17 = VAR_6; VAR_17 <= VAR_7; ++VAR_17) {
  VAR_15 = (u16)(VAR_14->tx_power_by_rate_offset[VAR_0][VAR_17][VAR_8][0] >> 24) & 0xFF;
  VAR_16 = (VAR_15 >> 4) * 10 + (VAR_15 & 0xF);
  FUNC_0(VAR_12, VAR_0, VAR_17, VAR_2, VAR_8, VAR_16);

  VAR_15 = (u16)(VAR_14->tx_power_by_rate_offset[VAR_0][VAR_17][VAR_8][2] >> 24) & 0xFF;
  VAR_16 = (VAR_15 >> 4) * 10 + (VAR_15 & 0xF);
  FUNC_0(VAR_12, VAR_0, VAR_17, VAR_5, VAR_8, VAR_16);

  VAR_15 = (u16)(VAR_14->tx_power_by_rate_offset[VAR_0][VAR_17][VAR_8][4] >> 24) & 0xFF;
  VAR_16 = (VAR_15 >> 4) * 10 + (VAR_15 & 0xF);
  FUNC_0(VAR_12, VAR_0, VAR_17, VAR_3, VAR_8, VAR_16);

  VAR_15 = (u16)(VAR_14->tx_power_by_rate_offset[VAR_0][VAR_17][VAR_9][6] >> 24) & 0xFF;
  VAR_16 = (VAR_15 >> 4) * 10 + (VAR_15 & 0xF);
  FUNC_0(VAR_12, VAR_0, VAR_17, VAR_4, VAR_9, VAR_16);

  VAR_15 = (u16)(VAR_14->tx_power_by_rate_offset[VAR_0][VAR_17][VAR_8][8] >> 24) & 0xFF;
  VAR_16 = (VAR_15 >> 4) * 10 + (VAR_15 & 0xF);
  FUNC_0(VAR_12, VAR_0, VAR_17, VAR_10, VAR_8, VAR_16);

  VAR_15 = (u16)(VAR_14->tx_power_by_rate_offset[VAR_0][VAR_17][VAR_9][11] >> 8) & 0xFF;
  VAR_16 = (VAR_15 >> 4) * 10 + (VAR_15 & 0xF);
  FUNC_0(VAR_12, VAR_0, VAR_17, VAR_11, VAR_9, VAR_16);

  VAR_15 = (u16)(VAR_14->tx_power_by_rate_offset[VAR_1][VAR_17][VAR_8][2] >> 24) & 0xFF;
  VAR_16 = (VAR_15 >> 4) * 10 + (VAR_15 & 0xF);
  FUNC_0(VAR_12, VAR_1, VAR_17, VAR_5, VAR_8, VAR_16);

  VAR_15 = (u16)(VAR_14->tx_power_by_rate_offset[VAR_1][VAR_17][VAR_8][4] >> 24) & 0xFF;
  VAR_16 = (VAR_15 >> 4) * 10 + (VAR_15 & 0xF);
  FUNC_0(VAR_12, VAR_1, VAR_17, VAR_3, VAR_8, VAR_16);

  VAR_15 = (u16)(VAR_14->tx_power_by_rate_offset[VAR_1][VAR_17][VAR_9][6] >> 24) & 0xFF;
  VAR_16 = (VAR_15 >> 4) * 10 + (VAR_15 & 0xF);
  FUNC_0(VAR_12, VAR_1, VAR_17, VAR_4, VAR_9, VAR_16);

  VAR_15 = (u16)(VAR_14->tx_power_by_rate_offset[VAR_1][VAR_17][VAR_8][8] >> 24) & 0xFF;
  VAR_16 = (VAR_15 >> 4) * 10 + (VAR_15 & 0xF);
  FUNC_0(VAR_12, VAR_1, VAR_17, VAR_10, VAR_8, VAR_16);

  VAR_15 = (u16)(VAR_14->tx_power_by_rate_offset[VAR_1][VAR_17][VAR_9][11] >> 8) & 0xFF;
  VAR_16 = (VAR_15 >> 4) * 10 + (VAR_15 & 0xF);
  FUNC_0(VAR_12, VAR_1, VAR_17, VAR_11, VAR_9, VAR_16);
 }
}
