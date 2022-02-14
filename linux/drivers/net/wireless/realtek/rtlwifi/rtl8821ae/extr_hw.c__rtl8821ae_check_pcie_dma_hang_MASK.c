
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (int) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__,int) ;

__attribute__((used)) static bool FUNC_6(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_3(VAR_3);
 u8 VAR_5;


 VAR_5 = FUNC_4(VAR_4, VAR_2 + 3);
 if (!(VAR_5 & FUNC_0(2))) {
  FUNC_5(VAR_4, VAR_2 + 3, (VAR_5 | FUNC_0(2)));
  FUNC_2(100);
 }



 VAR_5 = FUNC_4(VAR_4, VAR_2 + 3);
 if ((VAR_5 & FUNC_0(0)) || (VAR_5 & FUNC_0(1))) {
  FUNC_1(VAR_4, VAR_0, VAR_1,
    "CheckPcieDMAHang8821AE(): true! Reset PCIE DMA!\n");
  return 1;
 } else {
  return 0;
 }
}
