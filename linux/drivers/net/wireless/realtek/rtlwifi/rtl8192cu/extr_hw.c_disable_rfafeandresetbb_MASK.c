
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*,int,int,int ,int) ;
 int FUNC_2 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_0(VAR_8);







 u8 VAR_10 = 0, VAR_11 = 0;

 FUNC_2(VAR_9, VAR_7, 0xFF);
 FUNC_1(VAR_8, (enum radio_path)VAR_10, 0x0, VAR_4, 0x0);

 VAR_11 |= VAR_0;
 FUNC_2(VAR_9, VAR_5, VAR_11);
 VAR_11 = 0;
 VAR_11 |= (VAR_3 | VAR_2 | VAR_1);
 FUNC_2(VAR_9, VAR_6, VAR_11);
 VAR_11 &= (~VAR_1);
 FUNC_2(VAR_9, VAR_6, VAR_11);
}
