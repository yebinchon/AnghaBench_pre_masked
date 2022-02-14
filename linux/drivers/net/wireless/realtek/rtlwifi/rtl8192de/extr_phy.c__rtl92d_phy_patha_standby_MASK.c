
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_4);
 FUNC_0(VAR_5, VAR_0, VAR_1, "Path-A standby mode!\n");

 FUNC_2(VAR_4, 0xe28, VAR_2, 0x0);
 FUNC_2(VAR_4, VAR_3, VAR_2, 0x00010000);
 FUNC_2(VAR_4, 0xe28, VAR_2, 0x80800000);
}
