
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,...) ;
 int FUNC_1 (struct ieee80211_hw*,int,int,int *) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2,
        u8 VAR_3, u8 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_2(VAR_2);
 u8 VAR_6[1] = {0};
 u8 VAR_7[1] = {0};
 VAR_6[0] = VAR_3;
 VAR_7[0] = VAR_4;

 FUNC_0(VAR_5, VAR_0, VAR_1,
  "[BTCoex], Set WLAN_ACT Hi:Lo=0x%x/0x%x\n",
  VAR_3, VAR_4);
 FUNC_0(VAR_5, VAR_0, VAR_1,
  "[BTCoex], write 0x22=0x%x\n", VAR_6[0]);
 FUNC_0(VAR_5, VAR_0, VAR_1,
  "[BTCoex], write 0x11=0x%x\n", VAR_7[0]);


 FUNC_1(VAR_2, 0x22, 1, VAR_6);

 FUNC_1(VAR_2, 0x11, 1, VAR_7);
}
