
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct cfg80211_bitrate_mask {int dummy; } ;
struct ath6kl_vif {int fw_vif_idx; } ;
struct ath6kl {int wmi; } ;


 struct ath6kl* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,struct cfg80211_bitrate_mask const*) ;
 struct ath6kl_vif* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_0,
           struct net_device *VAR_1,
           const u8 *VAR_2,
           const struct cfg80211_bitrate_mask *VAR_3)
{
 struct ath6kl *VAR_4 = FUNC_0(VAR_1);
 struct ath6kl_vif *VAR_5 = FUNC_2(VAR_1);

 return FUNC_1(VAR_4->wmi, VAR_5->fw_vif_idx,
        VAR_3);
}
