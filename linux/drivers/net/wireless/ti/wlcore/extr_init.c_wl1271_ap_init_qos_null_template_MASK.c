
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {int role_id; int basic_rate_set; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_vif {int addr; } ;
struct ieee80211_qos_hdr {int addr3; int addr2; int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_qos_hdr*) ;
 struct ieee80211_qos_hdr* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct wl1271*,int ,int ,struct ieee80211_qos_hdr*,int,int ,int ) ;
 int FUNC_5 (struct wl1271*,int ) ;
 struct wl12xx_vif* FUNC_6 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_7(struct wl1271 *VAR_7,
         struct ieee80211_vif *VAR_8)
{
 struct wl12xx_vif *VAR_9 = FUNC_6(VAR_8);
 struct ieee80211_qos_hdr *VAR_10;
 int VAR_11;
 u32 VAR_12;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_3);
 if (!VAR_10) {
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_10->frame_control = FUNC_0(VAR_5 |
          VAR_6 |
          VAR_4);



 FUNC_3(VAR_10->addr2, VAR_8->addr, VAR_2);
 FUNC_3(VAR_10->addr3, VAR_8->addr, VAR_2);

 VAR_12 = FUNC_5(VAR_7, VAR_9->basic_rate_set);
 VAR_11 = FUNC_4(VAR_7, VAR_9->role_id,
          VAR_0, VAR_10,
          sizeof(*VAR_10), 0, VAR_12);

out:
 FUNC_1(VAR_10);
 return VAR_11;
}
