
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_p2p_info {int discovery_started; int discovery_timer; int discovery_expired_work; } ;
struct wil6210_vif {struct wil_p2p_info p2p; } ;
struct wil6210_priv {int mutex; } ;
struct cfg80211_scan_request {int ie; int ie_len; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct wil6210_priv* FUNC_5 (struct wil6210_vif*) ;
 int FUNC_6 (struct wil6210_priv*,char*,int ) ;
 int FUNC_7 (struct wil6210_priv*,char*) ;
 int VAR_8 ;
 int FUNC_8 (struct wil6210_vif*,int ,int ) ;
 int FUNC_9 (struct wil6210_vif*,int ,int ,int ) ;
 int FUNC_10 (struct wil6210_vif*,int ,int ) ;
 int FUNC_11 (struct wil6210_vif*) ;
 int FUNC_12 (struct wil6210_vif*) ;

int FUNC_13(struct wil6210_vif *VAR_9,
     struct cfg80211_scan_request *VAR_10)
{
 struct wil6210_priv *VAR_11 = FUNC_5(VAR_9);
 int VAR_12;
 struct wil_p2p_info *VAR_13 = &VAR_9->p2p;

 FUNC_6(VAR_11, "p2p_search: channel %d\n", VAR_2);

 FUNC_1(&VAR_11->mutex);

 if (VAR_13->discovery_started) {
  FUNC_7(VAR_11, "search failed. discovery already ongoing\n");
  VAR_12 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_8(VAR_9, VAR_2, VAR_1);
 if (VAR_12) {
  FUNC_7(VAR_11, "wmi_p2p_cfg failed\n");
  goto out;
 }

 VAR_12 = FUNC_10(VAR_9, FUNC_4(VAR_4), VAR_4);
 if (VAR_12) {
  FUNC_7(VAR_11, "wmi_set_ssid failed\n");
  goto out_stop;
 }


 VAR_12 = FUNC_9(VAR_9, VAR_5,
   VAR_10->ie_len, VAR_10->ie);
 if (VAR_12) {
  FUNC_7(VAR_11, "wmi_set_ie(WMI_FRAME_PROBE_REQ) failed\n");
  goto out_stop;
 }




 VAR_12 = FUNC_9(VAR_9, VAR_6,
   VAR_10->ie_len, VAR_10->ie);
 if (VAR_12) {
  FUNC_7(VAR_11, "wmi_set_ie(WMI_FRAME_PROBE_RESP) failed\n");
  goto out_stop;
 }

 VAR_12 = FUNC_11(VAR_9);
 if (VAR_12) {
  FUNC_7(VAR_11, "wmi_start_search failed\n");
  goto out_stop;
 }

 VAR_13->discovery_started = 1;
 FUNC_0(&VAR_13->discovery_expired_work, VAR_8);
 FUNC_2(&VAR_13->discovery_timer,
    VAR_7 + FUNC_3(VAR_3));

out_stop:
 if (VAR_12)
  FUNC_12(VAR_9);

out:
 return VAR_12;
}
