
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int bt_coexistence; } ;
struct rtl_phy {int current_channel; scalar_t__ current_chan_bw; } ;
struct rtl_priv {TYPE_1__ btcoexist; struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int,int,int*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

void FUNC_4(struct ieee80211_hw *VAR_4,
      bool VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_3(VAR_4);
 struct rtl_phy *VAR_7 = &(VAR_6->phy);
 u8 VAR_8[3] = {0};
 u8 VAR_9;

 if (!VAR_6->btcoexist.bt_coexistence)
  return;

 if (VAR_3 == VAR_5)
  VAR_8[0] = 0x1;
 else
  VAR_8[0] = 0x0;

 if (FUNC_1(VAR_4)) {
  VAR_9 = VAR_7->current_channel;
  VAR_8[1] = VAR_9;
 }

 if (VAR_7->current_chan_bw == VAR_2)
  VAR_8[2] = 0x30;
 else
  VAR_8[2] = 0x20;

 FUNC_0(VAR_6, VAR_0, VAR_1,
   "[BTCoex], FW write 0x19=0x%x\n",
   VAR_8[0]<<16|VAR_8[1]<<8|VAR_8[2]);

 FUNC_2(VAR_4, 0x19, 3, VAR_8);
}
