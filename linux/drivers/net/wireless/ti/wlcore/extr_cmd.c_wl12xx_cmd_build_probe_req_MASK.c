
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct wl12xx_vif {int * bitrate_masks; } ;
struct wl1271 {int quirks; int sched_scan_templ_id_5; int sched_scan_templ_id_2_4; int hw; int scan_templ_id_5; int scan_templ_id_2_4; } ;
struct sk_buff {int len; int data; } ;
struct ieee80211_vif {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ,size_t const*,size_t,size_t) ;
 int FUNC_2 (struct sk_buff*,size_t const*,size_t) ;
 int FUNC_3 (struct wl1271*,size_t,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,char*,size_t) ;
 int FUNC_5 (struct wl1271*,int ) ;
 struct ieee80211_vif* FUNC_6 (struct wl12xx_vif*) ;

int FUNC_7(struct wl1271 *VAR_4, struct wl12xx_vif *VAR_5,
          u8 VAR_6, u8 VAR_7,
          const u8 *VAR_8, size_t VAR_9,
          const u8 *VAR_10, size_t VAR_11, const u8 *VAR_12,
          size_t VAR_13, bool VAR_14)
{
 struct ieee80211_vif *VAR_15 = FUNC_6(VAR_5);
 struct sk_buff *VAR_16;
 int VAR_17;
 u32 VAR_18;
 u16 VAR_19 = VAR_4->scan_templ_id_2_4;
 u16 VAR_20 = VAR_4->scan_templ_id_5;

 FUNC_4(VAR_0, "build probe request band %d", VAR_7);

 VAR_16 = FUNC_1(VAR_4->hw, VAR_15->addr, VAR_8, VAR_9,
         VAR_11 + VAR_13);
 if (!VAR_16) {
  VAR_17 = -VAR_1;
  goto out;
 }
 if (VAR_11)
  FUNC_2(VAR_16, VAR_10, VAR_11);
 if (VAR_13)
  FUNC_2(VAR_16, VAR_12, VAR_13);

 if (VAR_14 &&
     (VAR_4->quirks & VAR_3)) {
  VAR_19 = VAR_4->sched_scan_templ_id_2_4;
  VAR_20 = VAR_4->sched_scan_templ_id_5;
 }

 VAR_18 = FUNC_5(VAR_4, VAR_5->bitrate_masks[VAR_7]);
 if (VAR_7 == VAR_2)
  VAR_17 = FUNC_3(VAR_4, VAR_6,
           VAR_19,
           VAR_16->data, VAR_16->len, 0, VAR_18);
 else
  VAR_17 = FUNC_3(VAR_4, VAR_6,
           VAR_20,
           VAR_16->data, VAR_16->len, 0, VAR_18);

out:
 FUNC_0(VAR_16);
 return VAR_17;
}
