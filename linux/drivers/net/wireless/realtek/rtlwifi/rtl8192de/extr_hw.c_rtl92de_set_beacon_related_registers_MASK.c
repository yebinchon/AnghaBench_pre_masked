
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ current_bandtype; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;
struct rtl_mac {int beacon_interval; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int,int) ;
 int FUNC_3 (struct rtl_priv*,int ,int) ;

void FUNC_4(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_6);
 struct rtl_mac *VAR_8 = FUNC_0(FUNC_1(VAR_6));
 u16 VAR_9, VAR_10;

 VAR_9 = VAR_8->beacon_interval;
 VAR_10 = 2;

 FUNC_3(VAR_7, VAR_1, VAR_10);
 FUNC_3(VAR_7, VAR_3, VAR_9);
 FUNC_3(VAR_7, VAR_2, 0x660f);
 FUNC_2(VAR_7, VAR_4, 0x20);
 if (VAR_7->rtlhal.current_bandtype == VAR_0)
  FUNC_2(VAR_7, VAR_5, 0x30);
 else
  FUNC_2(VAR_7, VAR_5, 0x20);
 FUNC_2(VAR_7, 0x606, 0x30);
}
