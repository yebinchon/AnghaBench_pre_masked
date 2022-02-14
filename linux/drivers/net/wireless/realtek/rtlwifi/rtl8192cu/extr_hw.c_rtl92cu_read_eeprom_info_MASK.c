
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {int version; } ;
struct rtl_efuse {int autoload_failflag; int epromtype; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,char*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_efuse* FUNC_4 (struct rtl_priv*) ;
 struct rtl_hal* FUNC_5 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct rtl_priv*,int ) ;

void FUNC_8(struct ieee80211_hw *VAR_8)
{

 struct rtl_priv *VAR_9 = FUNC_6(VAR_8);
 struct rtl_efuse *VAR_10 = FUNC_4(FUNC_6(VAR_8));
 struct rtl_hal *VAR_11 = FUNC_5(FUNC_6(VAR_8));
 u8 VAR_12;

 if (!FUNC_0(VAR_11->version))
  return;
 VAR_12 = FUNC_7(VAR_9, VAR_7);
 VAR_10->epromtype = (VAR_12 & VAR_0) ?
          VAR_4 : VAR_5;
 FUNC_1(VAR_9, VAR_1, VAR_2, "Boot from %s\n",
   VAR_12 & VAR_0 ? "EERROM" : "EFUSE");
 VAR_10->autoload_failflag = (VAR_12 & VAR_6) ? 0 : 1;
 FUNC_1(VAR_9, VAR_1, VAR_3, "Autoload %s\n",
   VAR_12 & VAR_6 ? "OK!!" : "ERR!!");
 FUNC_3(VAR_8);
 FUNC_2(VAR_8);
 return;
}
