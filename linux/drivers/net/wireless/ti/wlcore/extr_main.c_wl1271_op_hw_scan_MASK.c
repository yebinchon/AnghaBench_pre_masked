
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wl1271 {scalar_t__ state; int mutex; int dev; int roc_map; } ;
struct ieee80211_vif {int dummy; } ;
struct cfg80211_scan_request {TYPE_1__* ssids; scalar_t__ n_ssids; } ;
struct ieee80211_scan_request {struct cfg80211_scan_request req; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct TYPE_2__ {size_t ssid_len; int * ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct wl1271*,struct ieee80211_vif*,int *,size_t,struct cfg80211_scan_request*) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_5,
        struct ieee80211_vif *VAR_6,
        struct ieee80211_scan_request *VAR_7)
{
 struct cfg80211_scan_request *VAR_8 = &VAR_7->req;
 struct wl1271 *VAR_9 = VAR_5->priv;
 int VAR_10;
 u8 *VAR_11 = ((void*)0);
 size_t VAR_12 = 0;

 FUNC_8(VAR_0, "mac80211 hw scan");

 if (VAR_8->n_ssids) {
  VAR_11 = VAR_8->ssids[0].ssid;
  VAR_12 = VAR_8->ssids[0].ssid_len;
 }

 FUNC_1(&VAR_9->mutex);

 if (FUNC_7(VAR_9->state != VAR_4)) {





  VAR_10 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_3(VAR_9->dev);
 if (VAR_10 < 0) {
  FUNC_6(VAR_9->dev);
  goto out;
 }


 if (FUNC_0(VAR_9->roc_map, VAR_3) < VAR_3) {

  VAR_10 = -VAR_2;
  goto out_sleep;
 }

 VAR_10 = FUNC_9(VAR_5->priv, VAR_6, VAR_11, VAR_12, VAR_8);
out_sleep:
 FUNC_4(VAR_9->dev);
 FUNC_5(VAR_9->dev);
out:
 FUNC_2(&VAR_9->mutex);

 return VAR_10;
}
