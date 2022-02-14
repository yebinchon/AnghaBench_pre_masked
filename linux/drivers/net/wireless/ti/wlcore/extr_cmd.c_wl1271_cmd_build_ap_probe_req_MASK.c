
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {size_t band; int role_id; int * bitrate_masks; } ;
struct wl1271 {int hw; } ;
struct sk_buff {int len; int data; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct sk_buff* FUNC_0 (int ,struct ieee80211_vif*) ;
 int FUNC_1 (struct wl1271*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wl1271*,int ) ;
 struct ieee80211_vif* FUNC_5 (struct wl12xx_vif*) ;

struct sk_buff *FUNC_6(struct wl1271 *VAR_4,
           struct wl12xx_vif *VAR_5,
           struct sk_buff *VAR_6)
{
 struct ieee80211_vif *VAR_7 = FUNC_5(VAR_5);
 int VAR_8;
 u32 VAR_9;

 if (!VAR_6)
  VAR_6 = FUNC_0(VAR_4->hw, VAR_7);
 if (!VAR_6)
  goto out;

 FUNC_2(VAR_2, "set ap probe request template");

 VAR_9 = FUNC_4(VAR_4, VAR_5->bitrate_masks[VAR_5->band]);
 if (VAR_5->band == VAR_3)
  VAR_8 = FUNC_1(VAR_4, VAR_5->role_id,
           VAR_0,
           VAR_6->data, VAR_6->len, 0, VAR_9);
 else
  VAR_8 = FUNC_1(VAR_4, VAR_5->role_id,
           VAR_1,
           VAR_6->data, VAR_6->len, 0, VAR_9);

 if (VAR_8 < 0)
  FUNC_3("Unable to set ap probe request template.");

out:
 return VAR_6;
}
