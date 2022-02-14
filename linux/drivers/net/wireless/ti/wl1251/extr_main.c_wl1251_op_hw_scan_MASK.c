
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wl1251 {int scanning; int mutex; TYPE_2__* vif; int hw; int dtim_period; int beacon_int; int channel; int bss_type; } ;
struct sk_buff {int len; int data; } ;
struct ieee80211_vif {int dummy; } ;
struct cfg80211_scan_request {int n_channels; int channels; scalar_t__ ie_len; int ie; TYPE_1__* ssids; scalar_t__ n_ssids; } ;
struct ieee80211_scan_request {struct cfg80211_scan_request req; } ;
struct TYPE_6__ {int flags; } ;
struct ieee80211_hw {TYPE_3__ conf; struct wl1251* priv; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_4__ {size_t ssid_len; int * ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ,int *,size_t,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_5 (struct wl1251*,int *,size_t,int ,int ,int ) ;
 int FUNC_6 (struct wl1251*,int ,int ,int ) ;
 int FUNC_7 (struct wl1251*,int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct wl1251*,int ,int ,int ,int ) ;
 int FUNC_10 (struct wl1251*) ;
 int FUNC_11 (struct wl1251*) ;
 int FUNC_12 (struct wl1251*,int ) ;

__attribute__((used)) static int FUNC_13(struct ieee80211_hw *VAR_9,
        struct ieee80211_vif *VAR_10,
        struct ieee80211_scan_request *VAR_11)
{
 struct cfg80211_scan_request *VAR_12 = &VAR_11->req;
 struct wl1251 *VAR_13 = VAR_9->priv;
 struct sk_buff *VAR_14;
 size_t VAR_15 = 0;
 u8 *VAR_16 = ((void*)0);
 int VAR_17;

 FUNC_8(VAR_1, "mac80211 hw scan");

 if (VAR_12->n_ssids) {
  VAR_16 = VAR_12->ssids[0].ssid;
  VAR_15 = VAR_12->ssids[0].ssid_len;
 }

 FUNC_2(&VAR_13->mutex);

 if (VAR_13->scanning) {
  FUNC_8(VAR_2, "scan already in progress");
  VAR_17 = -VAR_3;
  goto out;
 }

 VAR_17 = FUNC_11(VAR_13);
 if (VAR_17 < 0)
  goto out;

 if (VAR_9->conf.flags & VAR_5) {
  VAR_17 = FUNC_12(VAR_13, VAR_6);
  if (VAR_17 < 0)
   goto out_sleep;
  VAR_17 = FUNC_9(VAR_13, VAR_13->bss_type, VAR_13->channel,
      VAR_13->beacon_int, VAR_13->dtim_period);
  if (VAR_17 < 0)
   goto out_sleep;
 }

 VAR_14 = FUNC_1(VAR_13->hw, VAR_13->vif->addr, VAR_16, VAR_15,
         VAR_12->ie_len);
 if (!VAR_14) {
  VAR_17 = -VAR_4;
  goto out_idle;
 }
 if (VAR_12->ie_len)
  FUNC_4(VAR_14, VAR_12->ie, VAR_12->ie_len);

 VAR_17 = FUNC_6(VAR_13, VAR_0, VAR_14->data,
          VAR_14->len);
 FUNC_0(VAR_14);
 if (VAR_17 < 0)
  goto out_idle;

 VAR_17 = FUNC_7(VAR_13, 0);
 if (VAR_17 < 0)
  goto out_idle;

 VAR_13->scanning = 1;

 VAR_17 = FUNC_5(VAR_13, VAR_16, VAR_15, VAR_12->channels,
         VAR_12->n_channels, VAR_8);
 if (VAR_17 < 0) {
  FUNC_8(VAR_2, "scan failed %d", VAR_17);
  VAR_13->scanning = 0;
  goto out_idle;
 }
 goto out_sleep;

out_idle:
 if (VAR_9->conf.flags & VAR_5)
  VAR_17 = FUNC_12(VAR_13, VAR_7);
out_sleep:
 FUNC_10(VAR_13);

out:
 FUNC_3(&VAR_13->mutex);

 return VAR_17;
}
