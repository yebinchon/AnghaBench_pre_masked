
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl12xx_vif {int basic_rate_set; int role_id; } ;
struct wl1271 {int hw; } ;
struct sk_buff {int len; int data; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,struct ieee80211_vif*) ;
 int FUNC_2 (struct wl1271*,int ,int ,int ,int ,int ,int ) ;
 struct ieee80211_vif* FUNC_3 (struct wl12xx_vif*) ;

int FUNC_4(struct wl1271 *VAR_1, struct wl12xx_vif *VAR_2,
        u16 VAR_3)
{
 struct ieee80211_vif *VAR_4 = FUNC_3(VAR_2);
 struct sk_buff *VAR_5;
 int VAR_6 = 0;

 VAR_5 = FUNC_1(VAR_1->hw, VAR_4);
 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_2(VAR_1, VAR_2->role_id,
          VAR_0, VAR_5->data,
          VAR_5->len, 0, VAR_2->basic_rate_set);

out:
 FUNC_0(VAR_5);
 return VAR_6;
}
