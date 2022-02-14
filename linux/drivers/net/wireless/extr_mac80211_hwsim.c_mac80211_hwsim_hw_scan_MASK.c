
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac80211_hwsim_data {int hw_scan; int hw; int mutex; int survey_data; int scan_addr; scalar_t__ scan_chan_idx; struct ieee80211_vif* hw_scan_vif; struct cfg80211_scan_request* hw_scan_request; scalar_t__ tmp_chan; } ;
struct ieee80211_vif {int addr; } ;
struct cfg80211_scan_request {int flags; int mac_addr_mask; int mac_addr; } ;
struct ieee80211_scan_request {struct cfg80211_scan_request req; } ;
struct ieee80211_hw {int wiphy; struct mac80211_hwsim_data* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_3,
      struct ieee80211_vif *VAR_4,
      struct ieee80211_scan_request *VAR_5)
{
 struct mac80211_hwsim_data *VAR_6 = VAR_3->priv;
 struct cfg80211_scan_request *VAR_7 = &VAR_5->req;

 FUNC_5(&VAR_6->mutex);
 if (FUNC_0(VAR_6->tmp_chan || VAR_6->hw_scan_request)) {
  FUNC_6(&VAR_6->mutex);
  return -VAR_0;
 }
 VAR_6->hw_scan_request = VAR_7;
 VAR_6->hw_scan_vif = VAR_4;
 VAR_6->scan_chan_idx = 0;
 if (VAR_7->flags & VAR_2)
  FUNC_1(VAR_6->scan_addr,
         VAR_5->req.mac_addr,
         VAR_5->req.mac_addr_mask);
 else
  FUNC_3(VAR_6->scan_addr, VAR_4->addr, VAR_1);
 FUNC_4(VAR_6->survey_data, 0, sizeof(VAR_6->survey_data));
 FUNC_6(&VAR_6->mutex);

 FUNC_7(VAR_3->wiphy, "hwsim hw_scan request\n");

 FUNC_2(VAR_6->hw, &VAR_6->hw_scan, 0);

 return 0;
}
