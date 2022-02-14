
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct wlcore_acx_peer_cap {void* supported_rates; void* ht_capabilites; int hlid; int ampdu_min_spacing; int ampdu_max_length; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_sta_ht_cap {int ampdu_density; int ampdu_factor; int cap; scalar_t__ ht_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct wlcore_acx_peer_cap*) ;
 struct wlcore_acx_peer_cap* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wlcore_acx_peer_cap*,int) ;
 int FUNC_4 (int ,char*,scalar_t__,int ,int ) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_5,
       struct ieee80211_sta_ht_cap *VAR_6,
       bool VAR_7,
       u32 VAR_8, u8 VAR_9)
{
 struct wlcore_acx_peer_cap *VAR_10;
 int VAR_11 = 0;
 u32 VAR_12 = 0;

 FUNC_4(VAR_1,
       "acx set cap ht_supp: %d ht_cap: %d rates: 0x%x",
       VAR_6->ht_supported, VAR_6->cap, VAR_8);

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_3);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto out;
 }

 if (VAR_7 && VAR_6->ht_supported) {

  VAR_12 = VAR_6->cap;





  VAR_12 |= VAR_4;


  VAR_10->ampdu_max_length = VAR_6->ampdu_factor;
  VAR_10->ampdu_min_spacing = VAR_6->ampdu_density;
 }

 VAR_10->hlid = VAR_9;
 VAR_10->ht_capabilites = FUNC_0(VAR_12);
 VAR_10->supported_rates = FUNC_0(VAR_8);

 VAR_11 = FUNC_3(VAR_5, VAR_0, VAR_10, sizeof(*VAR_10));
 if (VAR_11 < 0) {
  FUNC_5("acx ht capabilities setting failed: %d", VAR_11);
  goto out;
 }

out:
 FUNC_1(VAR_10);
 return VAR_11;
}
