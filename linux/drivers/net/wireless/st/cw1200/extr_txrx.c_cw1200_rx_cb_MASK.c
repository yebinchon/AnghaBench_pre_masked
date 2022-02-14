
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct wsm_rx {scalar_t__ status; int channel_number; int rx_rate; int flags; scalar_t__ rcpi_rssi; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_tim_ie {scalar_t__ dtim_period; } ;
struct ieee80211_rx_status {int flag; int rate_idx; scalar_t__ mactime; scalar_t__ antenna; scalar_t__ signal; int encoding; int band; int freq; } ;
struct ieee80211_pspoll {int dummy; } ;
struct TYPE_7__ {int * variable; } ;
struct TYPE_10__ {scalar_t__ category; } ;
struct TYPE_11__ {TYPE_1__ beacon; TYPE_4__ action; } ;
struct ieee80211_mgmt {TYPE_5__ u; } ;
struct ieee80211_hdr {int frame_control; } ;
struct cw1200_link_entry {scalar_t__ status; int rx_queue; int timestamp; } ;
struct cw1200_common {scalar_t__ mode; int action_linkid; scalar_t__ join_dtim_period; int disable_beacon_filter; TYPE_6__* hw; int ps_state_lock; int pm_state; int update_filtering_work; int workqueue; TYPE_3__* vif; int set_beacon_wakeup_period_work; int linkid_reset_work; scalar_t__* action_frame_sa; struct cw1200_link_entry* link_id_db; } ;
typedef scalar_t__ s8 ;
struct TYPE_12__ {int wiphy; } ;
struct TYPE_8__ {scalar_t__ ibss_joined; scalar_t__ assoc; int bssid; } ;
struct TYPE_9__ {TYPE_2__ bss_conf; int p2p; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

 int VAR_15 ;
 int FUNC_2 (int) ;

 int VAR_16 ;


 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int * FUNC_3 (int ,int *,size_t) ;
 int FUNC_4 (struct cw1200_common*) ;
 int FUNC_5 (struct cw1200_common*) ;
 scalar_t__ FUNC_6 (struct cw1200_common*,struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct cw1200_common*,struct sk_buff*) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (int,int ) ;
 scalar_t__ FUNC_11 (struct ieee80211_hdr*) ;
 size_t FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (TYPE_6__*,struct sk_buff*) ;
 int VAR_19 ;
 scalar_t__ FUNC_20 (scalar_t__) ;
 int FUNC_21 (scalar_t__*,scalar_t__,int) ;
 int FUNC_22 (int ,scalar_t__,size_t) ;
 int FUNC_23 (char*,...) ;
 int FUNC_24 (char*,int) ;
 int FUNC_25 (int ,int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (struct sk_buff*,size_t) ;
 int FUNC_28 (int *,struct sk_buff*) ;
 int FUNC_29 (struct sk_buff*,int) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int ,char*) ;
 int FUNC_33 (int *) ;

void FUNC_34(struct cw1200_common *VAR_20,
    struct wsm_rx *VAR_21,
    int VAR_22,
    struct sk_buff **VAR_23)
{
 struct sk_buff *VAR_24 = *VAR_23;
 struct ieee80211_rx_status *VAR_25 = FUNC_0(VAR_24);
 struct ieee80211_hdr *VAR_26 = (struct ieee80211_hdr *)VAR_24->data;
 struct ieee80211_mgmt *VAR_27 = (struct ieee80211_mgmt *)VAR_24->data;
 struct cw1200_link_entry *VAR_28 = ((void*)0);
 unsigned long VAR_29;

 bool VAR_30 = 0;
 bool VAR_31 = VAR_20->vif && VAR_20->vif->p2p;
 size_t VAR_32;
 VAR_25->flag = 0;

 if (VAR_20->mode == VAR_6) {

  goto drop;
 }

 if (VAR_22 && VAR_22 <= VAR_1) {
  VAR_28 = &VAR_20->link_id_db[VAR_22 - 1];
  if (VAR_28->status == VAR_0 &&
      FUNC_16(VAR_26->frame_control))
   VAR_30 = 1;
  VAR_28->timestamp = VAR_19;
 } else if (VAR_31 &&
     FUNC_13(VAR_26->frame_control) &&
     (VAR_27->u.action.category == VAR_12)) {
  FUNC_23("[RX] Going to MAP&RESET link ID\n");
  FUNC_1(FUNC_33(&VAR_20->linkid_reset_work));
  FUNC_21(&VAR_20->action_frame_sa[0],
         FUNC_11(VAR_26), VAR_2);
  VAR_20->action_linkid = 0;
  FUNC_26(&VAR_20->linkid_reset_work);
 }

 if (VAR_22 && VAR_31 &&
     FUNC_13(VAR_26->frame_control) &&
     (VAR_27->u.action.category == VAR_12)) {



  FUNC_1(FUNC_33(&VAR_20->linkid_reset_work));
  FUNC_21(&VAR_20->action_frame_sa[0],
         FUNC_11(VAR_26), VAR_2);
  VAR_20->action_linkid = VAR_22;
  FUNC_26(&VAR_20->linkid_reset_work);
 }
 if (VAR_21->status) {
  if (VAR_21->status == VAR_17) {
   FUNC_23("[RX] MIC failure.\n");
   VAR_25->flag |= VAR_10;
  } else if (VAR_21->status == VAR_18) {
   FUNC_23("[RX] No key found.\n");
   goto drop;
  } else {
   FUNC_23("[RX] Receive failure: %d.\n",
     VAR_21->status);
   goto drop;
  }
 }

 if (VAR_24->len < sizeof(struct ieee80211_pspoll)) {
  FUNC_32(VAR_20->hw->wiphy, "Malformed SDU rx'ed. Size is lesser than IEEE header.\n");
  goto drop;
 }

 if (FUNC_18(VAR_26->frame_control))
  if (FUNC_7(VAR_20, VAR_24))
   goto drop;

 VAR_25->band = ((VAR_21->channel_number & 0xff00) ||
       (VAR_21->channel_number > 14)) ?
   VAR_5 : VAR_4;
 VAR_25->freq = FUNC_10(
   VAR_21->channel_number,
   VAR_25->band);

 if (VAR_21->rx_rate >= 14) {
  VAR_25->encoding = VAR_7;
  VAR_25->rate_idx = VAR_21->rx_rate - 14;
 } else if (VAR_21->rx_rate >= 4) {
  VAR_25->rate_idx = VAR_21->rx_rate - 2;
 } else {
  VAR_25->rate_idx = VAR_21->rx_rate;
 }

 VAR_25->signal = (s8)VAR_21->rcpi_rssi;
 VAR_25->antenna = 0;

 VAR_32 = FUNC_12(VAR_26->frame_control);

 if (FUNC_2(VAR_21->flags)) {
  size_t VAR_33 = 0, VAR_34 = 0;

  VAR_25->flag |= VAR_8 | VAR_9;




  switch (FUNC_2(VAR_21->flags)) {
  case 128:
   VAR_33 = 4 ;
   VAR_34 = 4 ;
   break;
  case 130:
   VAR_33 = 8 ;
   VAR_34 = 4
    + 8 ;
   VAR_25->flag |= VAR_11;
   break;
  case 131:
   VAR_33 = 8 ;
   VAR_34 = 8 ;
   break;
  case 129:
   VAR_33 = 18 ;
   VAR_34 = 16 ;
   break;
  default:
   FUNC_24("Unknown encryption type %d\n",
    FUNC_2(VAR_21->flags));
   goto drop;
  }


  if (VAR_21->status == VAR_17)
   VAR_34 = 0;

  if (VAR_24->len < VAR_32 + VAR_33 + VAR_34) {
   FUNC_32(VAR_20->hw->wiphy, "Malformed SDU rx'ed. Size is lesser than crypto headers.\n");
   goto drop;
  }


  FUNC_29(VAR_24, VAR_24->len - VAR_34);
  FUNC_22(VAR_24->data + VAR_33, VAR_24->data, VAR_32);
  FUNC_27(VAR_24, VAR_33);
 }


 if (VAR_21->flags & VAR_16) {
  FUNC_21(&VAR_25->mactime, VAR_24->data + VAR_24->len - 8, 8);
  VAR_25->mactime = FUNC_20(VAR_25->mactime);
  if (VAR_24->len >= 8)
   FUNC_29(VAR_24, VAR_24->len - 8);
 } else {
  VAR_25->mactime = 0;
 }

 FUNC_4(VAR_20);
 if (VAR_21->flags & VAR_15)
  FUNC_5(VAR_20);

 if (FUNC_13(VAR_26->frame_control) &&
     (VAR_21->flags & VAR_14)) {
  if (FUNC_6(VAR_20, VAR_24))
   return;
 } else if (FUNC_15(VAR_26->frame_control) &&
     !VAR_21->status && VAR_20->vif &&
     FUNC_9(FUNC_11(VAR_26), VAR_20->vif->bss_conf.bssid)) {
  const u8 *VAR_35;
  u8 *VAR_36 = ((struct ieee80211_mgmt *)
     (VAR_24->data))->u.beacon.variable;
  size_t VAR_37 = VAR_24->len - (VAR_36 - (u8 *)(VAR_24->data));

  VAR_35 = FUNC_3(VAR_13, VAR_36, VAR_37);
  if (VAR_35) {
   struct ieee80211_tim_ie *VAR_38 =
    (struct ieee80211_tim_ie *)&VAR_35[2];

   if (VAR_20->join_dtim_period != VAR_38->dtim_period) {
    VAR_20->join_dtim_period = VAR_38->dtim_period;
    FUNC_25(VAR_20->workqueue,
        &VAR_20->set_beacon_wakeup_period_work);
   }
  }


  if (VAR_20->disable_beacon_filter &&
      (VAR_20->vif->bss_conf.assoc ||
       VAR_20->vif->bss_conf.ibss_joined)) {
   VAR_20->disable_beacon_filter = 0;
   FUNC_25(VAR_20->workqueue,
       &VAR_20->update_filtering_work);
  }
 }





 if (FUNC_14(VAR_26->frame_control))
  VAR_29 = 5 * VAR_3;
 else if (FUNC_17(VAR_26->frame_control))
  VAR_29 = 5 * VAR_3;
 else
  VAR_29 = 1 * VAR_3;
 FUNC_8(&VAR_20->pm_state, VAR_29);

 if (VAR_30) {
  FUNC_30(&VAR_20->ps_state_lock);

  if (VAR_28->status == VAR_0)
   FUNC_28(&VAR_28->rx_queue, VAR_24);
  else
   FUNC_19(VAR_20->hw, VAR_24);
  FUNC_31(&VAR_20->ps_state_lock);
 } else {
  FUNC_19(VAR_20->hw, VAR_24);
 }
 *VAR_23 = ((void*)0);

 return;

drop:

 return;
}
