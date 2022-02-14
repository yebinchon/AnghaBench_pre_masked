
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl12xx_vif {int role_id; } ;
struct wl1271_acx_rssi_snr_avg_weights {int snr_data; int snr_beacon; int rssi_data; int rssi_beacon; int role_id; } ;
struct conf_roam_trigger_settings {int avg_weight_snr_data; int avg_weight_snr_beacon; int avg_weight_rssi_data; int avg_weight_rssi_beacon; } ;
struct TYPE_2__ {struct conf_roam_trigger_settings roam_trigger; } ;
struct wl1271 {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl1271_acx_rssi_snr_avg_weights*) ;
 struct wl1271_acx_rssi_snr_avg_weights* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl1271_acx_rssi_snr_avg_weights*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_4,
        struct wl12xx_vif *VAR_5)
{
 struct wl1271_acx_rssi_snr_avg_weights *VAR_6 = ((void*)0);
 struct conf_roam_trigger_settings *VAR_7 = &VAR_4->conf.roam_trigger;
 int VAR_8 = 0;

 FUNC_3(VAR_1, "acx rssi snr avg weights");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_6->role_id = VAR_5->role_id;
 VAR_6->rssi_beacon = VAR_7->avg_weight_rssi_beacon;
 VAR_6->rssi_data = VAR_7->avg_weight_rssi_data;
 VAR_6->snr_beacon = VAR_7->avg_weight_snr_beacon;
 VAR_6->snr_data = VAR_7->avg_weight_snr_data;

 VAR_8 = FUNC_2(VAR_4, VAR_0, VAR_6, sizeof(*VAR_6));
 if (VAR_8 < 0) {
  FUNC_4("acx rssi snr trigger weights failed: %d", VAR_8);
  goto out;
 }

out:
 FUNC_0(VAR_6);
 return VAR_8;
}
