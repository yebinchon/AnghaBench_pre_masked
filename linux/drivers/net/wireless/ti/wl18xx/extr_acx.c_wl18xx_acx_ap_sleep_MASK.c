
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct conf_ap_sleep_settings {int idle_conn_thresh; int max_stations_thresh; int connected_duty_cycle; int idle_duty_cycle; } ;
struct TYPE_2__ {struct conf_ap_sleep_settings ap_sleep; } ;
struct wl18xx_priv {TYPE_1__ conf; } ;
struct wl1271 {struct wl18xx_priv* priv; } ;
struct acx_ap_sleep_cfg {int idle_conn_thresh; int max_stations_thresh; int connected_duty_cycle; int idle_duty_cycle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct acx_ap_sleep_cfg*) ;
 struct acx_ap_sleep_cfg* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct acx_ap_sleep_cfg*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct wl1271 *VAR_4)
{
 struct wl18xx_priv *VAR_5 = VAR_4->priv;
 struct acx_ap_sleep_cfg *VAR_6;
 struct conf_ap_sleep_settings *VAR_7 = &VAR_5->conf.ap_sleep;
 int VAR_8;

 FUNC_3(VAR_1, "acx config ap sleep");

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_3);
 if (!VAR_6) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_6->idle_duty_cycle = VAR_7->idle_duty_cycle;
 VAR_6->connected_duty_cycle = VAR_7->connected_duty_cycle;
 VAR_6->max_stations_thresh = VAR_7->max_stations_thresh;
 VAR_6->idle_conn_thresh = VAR_7->idle_conn_thresh;

 VAR_8 = FUNC_2(VAR_4, VAR_0, VAR_6, sizeof(*VAR_6));
 if (VAR_8 < 0) {
  FUNC_4("acx config ap-sleep failed: %d", VAR_8);
  goto out;
 }

out:
 FUNC_0(VAR_6);
 return VAR_8;
}
