
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct wireless_dev {int dummy; } ;
struct wil_p2p_info {int discovery_started; unsigned int listen_duration; struct wireless_dev* pending_listen_wdev; scalar_t__ cookie; int listen_chan; } ;
struct wil6210_vif {scalar_t__ mid; scalar_t__ scan_request; struct wil_p2p_info p2p; } ;
struct wil6210_priv {int mutex; struct wireless_dev* radio_wdev; int vif_mutex; } ;
struct ieee80211_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wireless_dev*,scalar_t__,struct ieee80211_channel*,unsigned int,int ) ;
 int FUNC_1 (int *,struct ieee80211_channel*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct wil6210_vif* FUNC_4 (struct wil6210_priv*,struct wireless_dev*) ;
 int FUNC_5 (struct wil6210_priv*,char*,...) ;
 int FUNC_6 (struct wil6210_priv*,char*) ;
 int FUNC_7 (struct wil6210_vif*) ;

int FUNC_8(struct wil6210_priv *VAR_3, struct wireless_dev *VAR_4,
     unsigned int VAR_5, struct ieee80211_channel *VAR_6,
     u64 *VAR_7)
{
 struct wil6210_vif *VAR_8 = FUNC_4(VAR_3, VAR_4);
 struct wil_p2p_info *VAR_9 = &VAR_8->p2p;
 int VAR_10;

 if (!VAR_6)
  return -VAR_1;

 FUNC_5(VAR_3, "p2p_listen: duration %d\n", VAR_5);

 FUNC_2(&VAR_3->mutex);

 if (VAR_9->discovery_started) {
  FUNC_6(VAR_3, "discovery already ongoing\n");
  VAR_10 = -VAR_0;
  goto out;
 }

 FUNC_1(&VAR_9->listen_chan, VAR_6, sizeof(*VAR_6));
 *VAR_7 = ++VAR_9->cookie;
 VAR_9->listen_duration = VAR_5;

 FUNC_2(&VAR_3->vif_mutex);
 if (VAR_8->scan_request) {
  FUNC_5(VAR_3, "Delaying p2p listen until scan done\n");
  VAR_9->pending_listen_wdev = VAR_4;
  VAR_9->discovery_started = 1;
  VAR_10 = 0;
  FUNC_3(&VAR_3->vif_mutex);
  goto out;
 }
 FUNC_3(&VAR_3->vif_mutex);

 VAR_10 = FUNC_7(VAR_8);
 if (VAR_10)
  goto out;

 VAR_9->discovery_started = 1;
 if (VAR_8->mid == 0)
  VAR_3->radio_wdev = VAR_4;

 FUNC_0(VAR_4, *VAR_7, VAR_6, VAR_5,
      VAR_2);

out:
 FUNC_3(&VAR_3->mutex);
 return VAR_10;
}
