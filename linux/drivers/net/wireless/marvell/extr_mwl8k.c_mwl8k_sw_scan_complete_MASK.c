
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwl8k_priv {int sw_scan_start; int hw; scalar_t__ regs; scalar_t__ channel_time; int ap_fw; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_3,
       struct ieee80211_vif *VAR_4)
{
 struct mwl8k_priv *VAR_5 = VAR_3->priv;
 u8 VAR_6;

 if (!VAR_5->ap_fw)
  return;

 VAR_5->sw_scan_start = 0;


 VAR_5->channel_time = 0;
 FUNC_0(VAR_5->regs + VAR_1);
 FUNC_0(VAR_5->regs + VAR_2);
 FUNC_1(VAR_5->hw, 0, VAR_0, &VAR_6);
}
