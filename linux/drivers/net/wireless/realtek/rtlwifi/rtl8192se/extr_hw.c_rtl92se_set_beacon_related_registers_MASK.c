
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_mac {int beacon_interval; scalar_t__ opmode; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ieee80211_hw*,int) ;
 struct rtl_mac* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ,int) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

void FUNC_5(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_2(VAR_8);
 struct rtl_mac *VAR_10 = FUNC_1(FUNC_2(VAR_8));
 u16 VAR_11 = 0;
 u16 VAR_12 = 6, VAR_13 = 0xf;
 u16 VAR_14 = 2;


 FUNC_4(VAR_9, VAR_0, VAR_14);


 FUNC_4(VAR_9, VAR_4, VAR_10->beacon_interval);




 FUNC_4(VAR_9, VAR_2, 10 << 4);



 FUNC_4(VAR_9, VAR_1, 256);




 FUNC_3(VAR_9, VAR_3, 100);


 if (VAR_10->opmode == VAR_7)
  VAR_11 |= (VAR_12 << VAR_5);


 VAR_11 |= VAR_13 << VAR_6;


 FUNC_0(VAR_8, VAR_10->beacon_interval);
}
