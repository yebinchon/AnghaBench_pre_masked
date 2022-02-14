
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct ieee80211_mgmt {int frame_control; } ;
struct ieee80211_channel {scalar_t__ center_freq; } ;
struct cfg80211_mgmt_tx_params {size_t len; unsigned int wait; int no_cck; int * buf; struct ieee80211_channel* chan; } ;
struct ath6kl_vif {scalar_t__ ch_hint; scalar_t__ nw_type; int fw_vif_idx; int send_action_id; int flags; int ndev; } ;
struct ath6kl {int wmi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*,size_t) ;
 int FUNC_2 (struct ath6kl_vif*,scalar_t__,scalar_t__,unsigned int,int const*,size_t,int*,int) ;
 struct ath6kl* FUNC_3 (int ) ;
 int FUNC_4 (struct ath6kl_vif*,int const*,size_t,scalar_t__) ;
 struct ath6kl_vif* FUNC_5 (struct wireless_dev*) ;
 int FUNC_6 (int ,int ,scalar_t__,scalar_t__,unsigned int,int const*,size_t,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct wiphy *VAR_3, struct wireless_dev *VAR_4,
     struct cfg80211_mgmt_tx_params *VAR_5, u64 *VAR_6)
{
 struct ath6kl_vif *VAR_7 = FUNC_5(VAR_4);
 struct ath6kl *VAR_8 = FUNC_3(VAR_7->ndev);
 struct ieee80211_channel *VAR_9 = VAR_5->chan;
 const u8 *VAR_10 = VAR_5->buf;
 size_t VAR_11 = VAR_5->len;
 unsigned int VAR_12 = VAR_5->wait;
 bool VAR_13 = VAR_5->no_cck;
 u32 VAR_14, VAR_15;
 const struct ieee80211_mgmt *VAR_16;
 bool VAR_17, VAR_18;




 VAR_15 = VAR_7->ch_hint;
 if (VAR_9)
  VAR_15 = VAR_9->center_freq;


 if (FUNC_0(VAR_15 == 0))
  return -VAR_2;

 VAR_16 = (const struct ieee80211_mgmt *) VAR_10;
 if (VAR_7->nw_type == VAR_0 && FUNC_8(VAR_1, &VAR_7->flags) &&
     FUNC_7(VAR_16->frame_control) &&
     FUNC_1(VAR_10, VAR_11)) {




  *VAR_6 = 0;
  return FUNC_4(VAR_7, VAR_10, VAR_11, VAR_15);
 }

 VAR_14 = VAR_7->send_action_id++;
 if (VAR_14 == 0) {




  VAR_14 = VAR_7->send_action_id++;
 }

 *VAR_6 = VAR_14;


 if (VAR_7->nw_type == VAR_0) {
  VAR_18 = FUNC_2(VAR_7, VAR_14, VAR_15, VAR_12, VAR_10, VAR_11,
        &VAR_17, VAR_13);
  if (VAR_18)
   return 0;
 }

 return FUNC_6(VAR_8->wmi, VAR_7->fw_vif_idx, VAR_14, VAR_15,
     VAR_12, VAR_10, VAR_11, VAR_13);
}
