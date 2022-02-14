
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_phy {int **** tx_power_by_rate_offset; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (int *,int,int,size_t) ;
 size_t FUNC_2 (struct ieee80211_hw*,size_t,size_t,size_t,int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(
       struct ieee80211_hw *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_3(VAR_10);
 struct rtl_phy *VAR_12 = &VAR_11->phy;
 u8 VAR_13 = 0, VAR_14 = VAR_7;

 VAR_13 = FUNC_2(VAR_10,
   VAR_0, VAR_14, VAR_8, VAR_1);
 FUNC_1(
     &VAR_12->tx_power_by_rate_offset[VAR_0][VAR_14][VAR_8][2],
     1, 1, VAR_13);
 FUNC_1(
     &VAR_12->tx_power_by_rate_offset[VAR_0][VAR_14][VAR_8][3],
     1, 3, VAR_13);

 VAR_13 = FUNC_2(VAR_10, VAR_0, VAR_14,
             VAR_8, VAR_6);
 FUNC_1(
     &VAR_12->tx_power_by_rate_offset[VAR_0][VAR_14][VAR_8][0],
     0, 3, VAR_13);
 FUNC_1(
     &VAR_12->tx_power_by_rate_offset[VAR_0][VAR_14][VAR_8][1],
     0, 3, VAR_13);

 VAR_13 = FUNC_2(VAR_10, VAR_0,
      VAR_14, VAR_8, VAR_4);
 FUNC_1(
     &VAR_12->tx_power_by_rate_offset[VAR_0][VAR_14][VAR_8][4],
     0, 3, VAR_13);
 FUNC_1(
     &VAR_12->tx_power_by_rate_offset[VAR_0][VAR_14][VAR_8][5],
     0, 3, VAR_13);

 VAR_13 = FUNC_2(VAR_10, VAR_0,
             VAR_14, VAR_9,
             VAR_5);
 FUNC_1(
     &VAR_12->tx_power_by_rate_offset[VAR_0][VAR_14][VAR_9][6],
     0, 3, VAR_13);

 FUNC_1(
     &VAR_12->tx_power_by_rate_offset[VAR_0][VAR_14][VAR_9][7],
     0, 3, VAR_13);

 FUNC_0(VAR_11, VAR_2, VAR_3,
     "<===_rtl8723be_phy_convert_txpower_dbm_to_relative_value()\n");
}
