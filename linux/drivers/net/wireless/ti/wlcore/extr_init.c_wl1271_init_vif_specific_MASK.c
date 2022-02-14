
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wl12xx_vif {scalar_t__ bss_type; } ;
struct TYPE_5__ {int tid_conf_count; int ac_conf_count; struct conf_tx_tid* tid_conf; struct conf_tx_ac_category* ac_conf; } ;
struct TYPE_4__ {scalar_t__ sta_sleep_auth; } ;
struct TYPE_6__ {TYPE_2__ tx; TYPE_1__ conn; } ;
struct wl1271 {scalar_t__ ap_count; scalar_t__ sta_count; TYPE_3__ conf; int ap_event_mask; int event_mask; } ;
struct ieee80211_vif {int dummy; } ;
struct conf_tx_tid {int * apsd_conf; int ack_policy; int ps_scheme; int tsid; int channel_type; int queue_id; } ;
struct conf_tx_ac_category {int tx_op_limit; int aifsn; int cw_max; int cw_min; int ac; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_3 (struct wl1271*,scalar_t__) ;
 int FUNC_4 (struct wl1271*,struct wl12xx_vif*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_6 (struct wl1271*,struct ieee80211_vif*) ;
 int FUNC_7 (struct wl1271*) ;
 int FUNC_8 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_9 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_10 (struct wl1271*,struct ieee80211_vif*) ;
 int FUNC_11 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_12 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_13 (struct wl1271*,struct wl12xx_vif*) ;
 struct wl12xx_vif* FUNC_14 (struct ieee80211_vif*) ;
 int FUNC_15 (struct wl1271*,struct wl12xx_vif*) ;

int FUNC_16(struct wl1271 *VAR_3, struct ieee80211_vif *VAR_4)
{
 struct wl12xx_vif *VAR_5 = FUNC_14(VAR_4);
 struct conf_tx_ac_category *VAR_6;
 struct conf_tx_tid *VAR_7;
 bool VAR_8 = (VAR_5->bss_type == VAR_0);
 int VAR_9, VAR_10;



 if (VAR_3->ap_count == 0 && VAR_8) {
  VAR_9 = FUNC_3(VAR_3, VAR_1);
  if (VAR_9 < 0)
   return VAR_9;


  VAR_3->event_mask |= VAR_3->ap_event_mask;
  VAR_9 = FUNC_7(VAR_3);
  if (VAR_9 < 0)
   return VAR_9;

 } else if (VAR_3->sta_count == 0 && VAR_3->ap_count == 0 && !VAR_8) {
  u8 VAR_11 = VAR_3->conf.conn.sta_sleep_auth;

  if (VAR_11 != VAR_2)
   VAR_9 = FUNC_3(VAR_3, VAR_11);

  else
   VAR_9 = FUNC_3(VAR_3, VAR_1);

  if (VAR_9 < 0)
   return VAR_9;
 }


 if (VAR_8) {
  VAR_9 = FUNC_5(VAR_3, VAR_5);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_9 = FUNC_11(VAR_3, VAR_5);
  if (VAR_9 < 0)
   return VAR_9;
 } else {
  VAR_9 = FUNC_9(VAR_3, VAR_5);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_9 = FUNC_13(VAR_3, VAR_5);
  if (VAR_9 < 0)
   return VAR_9;
 }

 FUNC_12(VAR_3, VAR_5);


 FUNC_0(VAR_3->conf.tx.tid_conf_count != VAR_3->conf.tx.ac_conf_count);
 for (VAR_10 = 0; VAR_10 < VAR_3->conf.tx.tid_conf_count; VAR_10++) {
  VAR_6 = &VAR_3->conf.tx.ac_conf[VAR_10];
  VAR_9 = FUNC_1(VAR_3, VAR_5, VAR_6->ac,
     VAR_6->cw_min, VAR_6->cw_max,
     VAR_6->aifsn, VAR_6->tx_op_limit);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_7 = &VAR_3->conf.tx.tid_conf[VAR_10];
  VAR_9 = FUNC_4(VAR_3, VAR_5,
      VAR_7->queue_id,
      VAR_7->channel_type,
      VAR_7->tsid,
      VAR_7->ps_scheme,
      VAR_7->ack_policy,
      VAR_7->apsd_conf[0],
      VAR_7->apsd_conf[1]);
  if (VAR_9 < 0)
   return VAR_9;
 }


 VAR_9 = FUNC_2(VAR_3, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;


 if (VAR_8)
  VAR_9 = FUNC_6(VAR_3, VAR_4);
 else
  VAR_9 = FUNC_10(VAR_3, VAR_4);

 if (VAR_9 < 0)
  return VAR_9;


 VAR_9 = FUNC_8(VAR_3, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_15(VAR_3, VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}
