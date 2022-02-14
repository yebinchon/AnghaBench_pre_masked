
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_phy {int **** tx_power_by_rate_offset; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int,int,size_t) ;
 size_t FUNC_2 (struct ieee80211_hw*,size_t,size_t,size_t,int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_14)
{
 struct rtl_priv *VAR_15 = FUNC_3(VAR_14);
 struct rtl_phy *VAR_16 = &VAR_15->phy;
 u8 VAR_17 = 0, VAR_18 = 0;

 for (VAR_18 = VAR_8; VAR_18 <= VAR_9; ++VAR_18) {
  VAR_17 = FUNC_2(VAR_14, VAR_0, VAR_18, VAR_10, VAR_2);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_0][VAR_18][VAR_10][0],
   0, 3, VAR_17);

  VAR_17 = FUNC_2(VAR_14, VAR_0, VAR_18, VAR_10, VAR_7);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_0][VAR_18][VAR_10][1],
   0, 3, VAR_17);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_0][VAR_18][VAR_10][2],
   0, 3, VAR_17);

  VAR_17 = FUNC_2(VAR_14, VAR_0, VAR_18, VAR_10, VAR_5);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_0][VAR_18][VAR_10][3],
   0, 3, VAR_17);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_0][VAR_18][VAR_10][4],
   0, 3, VAR_17);

  VAR_17 = FUNC_2(VAR_14, VAR_0, VAR_18, VAR_11, VAR_6);

  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_0][VAR_18][VAR_11][5],
   0, 3, VAR_17);

  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_0][VAR_18][VAR_11][6],
   0, 3, VAR_17);

  VAR_17 = FUNC_2(VAR_14, VAR_0, VAR_18, VAR_10, VAR_12);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_0][VAR_18][VAR_10][7],
   0, 3, VAR_17);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_0][VAR_18][VAR_10][8],
   0, 3, VAR_17);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_0][VAR_18][VAR_10][9],
   0, 1, VAR_17);

  VAR_17 = FUNC_2(VAR_14, VAR_0, VAR_18, VAR_11, VAR_13);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_0][VAR_18][VAR_10][9],
   2, 3, VAR_17);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_0][VAR_18][VAR_11][10],
   0, 3, VAR_17);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_0][VAR_18][VAR_11][11],
   0, 3, VAR_17);

  VAR_17 = FUNC_2(VAR_14, VAR_1, VAR_18, VAR_10, VAR_7);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_1][VAR_18][VAR_10][1],
   0, 3, VAR_17);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_1][VAR_18][VAR_10][2],
   0, 3, VAR_17);

  VAR_17 = FUNC_2(VAR_14, VAR_1, VAR_18, VAR_10, VAR_5);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_1][VAR_18][VAR_10][3],
   0, 3, VAR_17);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_1][VAR_18][VAR_10][4],
   0, 3, VAR_17);

  VAR_17 = FUNC_2(VAR_14, VAR_1, VAR_18, VAR_11, VAR_6);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_1][VAR_18][VAR_11][5],
   0, 3, VAR_17);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_1][VAR_18][VAR_11][6],
   0, 3, VAR_17);

  VAR_17 = FUNC_2(VAR_14, VAR_1, VAR_18, VAR_10, VAR_12);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_1][VAR_18][VAR_10][7],
   0, 3, VAR_17);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_1][VAR_18][VAR_10][8],
   0, 3, VAR_17);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_1][VAR_18][VAR_10][9],
   0, 1, VAR_17);

  VAR_17 = FUNC_2(VAR_14, VAR_1, VAR_18, VAR_11, VAR_13);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_1][VAR_18][VAR_10][9],
   2, 3, VAR_17);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_1][VAR_18][VAR_11][10],
   0, 3, VAR_17);
  FUNC_1(
   &VAR_16->tx_power_by_rate_offset[VAR_1][VAR_18][VAR_11][11],
   0, 3, VAR_17);
 }

 FUNC_0(VAR_15, VAR_3, VAR_4,
  "<===_rtl8821ae_phy_convert_txpower_dbm_to_relative_value()\n");
}
