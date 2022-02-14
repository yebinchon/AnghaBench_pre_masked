
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtl_phy {int set_bwmode_inprogress; int current_chan_bw; } ;
struct rtl_priv {TYPE_2__* cfg; struct rtl_phy phy; } ;
struct rtl_hal {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* phy_set_bw_mode_callback ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (struct rtl_hal*) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*) ;

void FUNC_6(struct ieee80211_hw *VAR_2,
       enum nl80211_channel_type VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_4(VAR_2);
 struct rtl_phy *VAR_5 = &(VAR_4->phy);
 struct rtl_hal *VAR_6 = FUNC_3(FUNC_4(VAR_2));
 u8 VAR_7 = VAR_5->current_chan_bw;

 if (VAR_5->set_bwmode_inprogress)
  return;
 VAR_5->set_bwmode_inprogress = 1;
 if ((!FUNC_2(VAR_6)) && !(FUNC_0(VAR_2))) {
  VAR_4->cfg->ops->phy_set_bw_mode_callback(VAR_2);
 } else {
  FUNC_1(VAR_4, VAR_0, VAR_1,
    "false driver sleep or unload\n");
  VAR_5->set_bwmode_inprogress = 0;
  VAR_5->current_chan_bw = VAR_7;
 }
}
