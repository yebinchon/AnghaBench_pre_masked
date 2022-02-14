
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wmi_remain_on_chnl_event {int duration; int freq; } ;
struct wmi {struct ath6kl* parent_dev; } ;
struct ieee80211_channel {int dummy; } ;
struct ath6kl_vif {int wdev; int last_roc_id; } ;
struct ath6kl {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (int *,int ,struct ieee80211_channel*,int ,int ) ;
 struct ieee80211_channel* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct wmi *VAR_3, u8 *VAR_4,
           int VAR_5, struct ath6kl_vif *VAR_6)
{
 struct wmi_remain_on_chnl_event *VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 struct ieee80211_channel *VAR_10;
 struct ath6kl *VAR_11 = VAR_3->parent_dev;
 u32 VAR_12;

 if (VAR_5 < sizeof(*VAR_7))
  return -VAR_1;

 VAR_7 = (struct wmi_remain_on_chnl_event *) VAR_4;
 VAR_8 = FUNC_3(VAR_7->freq);
 VAR_9 = FUNC_3(VAR_7->duration);
 FUNC_0(VAR_0, "remain_on_chnl: freq=%u dur=%u\n",
     VAR_8, VAR_9);
 VAR_10 = FUNC_2(VAR_11->wiphy, VAR_8);
 if (!VAR_10) {
  FUNC_0(VAR_0,
      "remain_on_chnl: Unknown channel (freq=%u)\n",
      VAR_8);
  return -VAR_1;
 }
 VAR_12 = VAR_6->last_roc_id;
 FUNC_1(&VAR_6->wdev, VAR_12, VAR_10,
      VAR_9, VAR_2);

 return 0;
}
