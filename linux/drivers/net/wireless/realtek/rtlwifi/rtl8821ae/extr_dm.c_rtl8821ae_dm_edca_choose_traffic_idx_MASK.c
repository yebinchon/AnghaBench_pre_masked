
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(
 struct ieee80211_hw *VAR_2, u64 VAR_3,
 u64 VAR_4, bool VAR_5,
 bool *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_2);

 if (VAR_5) {
  if (VAR_3 > (VAR_4*4)) {
   *VAR_6 = 0;
   FUNC_0(VAR_7, VAR_0, VAR_1,
     "Uplink Traffic\n");
  } else {
   *VAR_6 = 1;
   FUNC_0(VAR_7, VAR_0, VAR_1,
     "Balance Traffic\n");
  }
 } else {
  if (VAR_4 > (VAR_3*4)) {
   *VAR_6 = 1;
   FUNC_0(VAR_7, VAR_0, VAR_1,
     "Downlink	Traffic\n");
  } else {
   *VAR_6 = 0;
   FUNC_0(VAR_7, VAR_0, VAR_1,
     "Balance Traffic\n");
  }
 }
 return;
}
