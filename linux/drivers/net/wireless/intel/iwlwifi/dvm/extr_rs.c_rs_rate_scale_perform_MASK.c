
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ state; } ;
struct iwl_tid_data {TYPE_1__ agg; } ;
struct iwl_station_priv {struct iwl_rxon_context* ctx; } ;
struct iwl_scale_tbl_info {int* expected_tpt; scalar_t__ max_search; int current_rate; void* lq_type; struct iwl_rate_scale_data* win; } ;
struct iwl_rxon_context {int dummy; } ;
struct iwl_rate_scale_data {scalar_t__ counter; int average_tpt; int success_ratio; int success_counter; } ;
struct iwl_priv {scalar_t__ bt_traffic_load; struct iwl_tid_data** tid_data; struct ieee80211_hw* hw; } ;
struct TYPE_4__ {size_t sta_id; } ;
struct iwl_lq_sta {int supp_rates; size_t band; int tx_agg_tid_en; int is_agg; int active_tbl; int is_green; int last_txrate_idx; int max_rate_idx; int last_tpt; int enable_counter; scalar_t__ last_bt_traffic; scalar_t__ action_counter; TYPE_2__ lq; struct iwl_scale_tbl_info* lq_info; int stay_in_tbl; scalar_t__ search_better_tbl; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_sta {int* supp_rates; scalar_t__ drv_priv; } ;
struct ieee80211_conf {int dummy; } ;
struct ieee80211_hw {struct ieee80211_conf conf; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int s8 ;
typedef int s32 ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct iwl_priv*,char*,...) ;
 int FUNC_2 (struct iwl_priv*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 size_t VAR_17 ;
 int FUNC_3 (struct ieee80211_conf*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (struct iwl_priv*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct iwl_priv*,struct iwl_rxon_context*,TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_12 (struct iwl_priv*) ;
 int FUNC_13 (struct iwl_priv*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_14 (struct iwl_priv*,struct iwl_lq_sta*,int ) ;
 int FUNC_15 (struct iwl_priv*,int,int,void*) ;
 int FUNC_16 (struct iwl_lq_sta*,struct ieee80211_hdr*,void*) ;
 int FUNC_17 (struct iwl_priv*,struct iwl_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,int) ;
 int FUNC_18 (struct iwl_priv*,struct iwl_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,int) ;
 int FUNC_19 (struct iwl_priv*,struct iwl_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,int) ;
 int FUNC_20 (struct iwl_priv*,struct iwl_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,int) ;
 int FUNC_21 (struct iwl_rate_scale_data*) ;
 int FUNC_22 (struct iwl_priv*,int,struct iwl_lq_sta*) ;
 int FUNC_23 (struct iwl_lq_sta*,int) ;
 int FUNC_24 (struct iwl_lq_sta*,struct ieee80211_hdr*) ;
 int FUNC_25 (struct iwl_priv*,int,struct iwl_lq_sta*,struct ieee80211_sta*) ;
 int FUNC_26 (struct iwl_priv*,struct iwl_rxon_context*,struct iwl_lq_sta*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_27 (struct ieee80211_sta*) ;

__attribute__((used)) static void FUNC_28(struct iwl_priv *VAR_18,
      struct sk_buff *VAR_19,
      struct ieee80211_sta *VAR_20,
      struct iwl_lq_sta *VAR_21)
{
 struct ieee80211_hw *VAR_22 = VAR_18->hw;
 struct ieee80211_conf *VAR_23 = &VAR_22->conf;
 struct ieee80211_tx_info *VAR_24 = FUNC_0(VAR_19);
 struct ieee80211_hdr *VAR_25 = (struct ieee80211_hdr *)VAR_19->data;
 int VAR_26 = VAR_13;
 int VAR_27 = VAR_13;
 int VAR_28;
 int VAR_29;
 struct iwl_rate_scale_data *VAR_30 = ((void*)0);
 int VAR_31 = VAR_7;
 int VAR_32 = VAR_7;
 int VAR_33 = VAR_7;
 u32 VAR_34;
 s8 VAR_35 = 0;
 u16 VAR_36;
 u8 VAR_37 = 0;
 struct iwl_scale_tbl_info *VAR_38, *VAR_39;
 u16 VAR_40 = 0;
 u8 VAR_41 = 0;
 u8 VAR_42 = 0;
 u8 VAR_43 = 0;
 u16 VAR_44;
 s32 VAR_45;
 u8 VAR_46 = VAR_8;
 struct iwl_tid_data *VAR_47;
 struct iwl_station_priv *VAR_48 = (void *)VAR_20->drv_priv;
 struct iwl_rxon_context *VAR_49 = VAR_48->ctx;

 FUNC_1(VAR_18, "rate scale calculate new rate for skb\n");



 if (!FUNC_4(VAR_25->frame_control) ||
     VAR_24->flags & VAR_1)
  return;

 VAR_21->supp_rates = VAR_20->supp_rates[VAR_21->band];

 VAR_46 = FUNC_24(VAR_21, VAR_25);
 if ((VAR_46 != VAR_8) &&
     (VAR_21->tx_agg_tid_en & (1 << VAR_46))) {
  VAR_47 = &VAR_18->tid_data[VAR_21->lq.sta_id][VAR_46];
  if (VAR_47->agg.state == VAR_2)
   VAR_21->is_agg = 0;
  else
   VAR_21->is_agg = 1;
 } else
  VAR_21->is_agg = 0;






 if (!VAR_21->search_better_tbl)
  VAR_42 = VAR_21->active_tbl;
 else
  VAR_42 = 1 - VAR_21->active_tbl;

 VAR_38 = &(VAR_21->lq_info[VAR_42]);
 if (FUNC_5(VAR_38->lq_type))
  VAR_21->is_green = 0;
 else
  VAR_21->is_green = FUNC_27(VAR_20);
 VAR_41 = VAR_21->is_green;


 VAR_28 = VAR_21->last_txrate_idx;

 FUNC_1(VAR_18, "Rate scale index %d for type %d\n", VAR_28,
         VAR_38->lq_type);


 VAR_36 = FUNC_16(VAR_21, VAR_25, VAR_38->lq_type);

 FUNC_1(VAR_18, "mask 0x%04X\n", VAR_36);


 if (FUNC_5(VAR_38->lq_type)) {
  if (VAR_21->band == VAR_17)

   VAR_40 = (u16) (VAR_36 &
    (VAR_21->supp_rates << VAR_6));
  else
   VAR_40 = (u16) (VAR_36 &
            VAR_21->supp_rates);

 } else
  VAR_40 = VAR_36;

 if (!VAR_40)
  VAR_40 = VAR_36;

 if (!((1 << VAR_28) & VAR_40)) {
  FUNC_2(VAR_18, "Current Rate is not valid\n");
  if (VAR_21->search_better_tbl) {

   VAR_38->lq_type = VAR_16;
   VAR_21->search_better_tbl = 0;
   VAR_38 = &(VAR_21->lq_info[VAR_21->active_tbl]);

   VAR_28 = FUNC_10(VAR_38->current_rate);
   FUNC_26(VAR_18, VAR_49, VAR_21, VAR_38,
        VAR_28, VAR_41);
  }
  return;
 }


 if (!VAR_38->expected_tpt) {
  FUNC_2(VAR_18, "tbl->expected_tpt is NULL\n");
  return;
 }


 if ((VAR_21->max_rate_idx != -1) &&
     (VAR_21->max_rate_idx < VAR_28)) {
  VAR_28 = VAR_21->max_rate_idx;
  VAR_37 = 1;
  VAR_30 = &(VAR_38->win[VAR_28]);
  goto lq_update;
 }

 VAR_30 = &(VAR_38->win[VAR_28]);
 VAR_34 = VAR_30->counter - VAR_30->success_counter;
 if ((VAR_34 < VAR_14) &&
   (VAR_30->success_counter < VAR_15)) {
  FUNC_1(VAR_18, "LQ: still below TH. succ=%d total=%d "
          "for index %d\n",
          VAR_30->success_counter, VAR_30->counter, VAR_28);


  VAR_30->average_tpt = VAR_7;



  FUNC_23(VAR_21, 0);

  goto out;
 }


 if (VAR_30->average_tpt != ((VAR_30->success_ratio *
   VAR_38->expected_tpt[VAR_28] + 64) / 128)) {
  FUNC_2(VAR_18, "expected_tpt should have been calculated by now\n");
  VAR_30->average_tpt = ((VAR_30->success_ratio *
     VAR_38->expected_tpt[VAR_28] + 64) / 128);
 }


 if (VAR_21->search_better_tbl &&
     (FUNC_12(VAR_18) == VAR_4)) {



  if (VAR_30->average_tpt > VAR_21->last_tpt) {

   FUNC_1(VAR_18, "LQ: SWITCHING TO NEW TABLE "
     "suc=%d cur-tpt=%d old-tpt=%d\n",
     VAR_30->success_ratio,
     VAR_30->average_tpt,
     VAR_21->last_tpt);

   if (!FUNC_5(VAR_38->lq_type))
    VAR_21->enable_counter = 1;


   VAR_21->active_tbl = VAR_42;
   VAR_31 = VAR_30->average_tpt;


  } else {

   FUNC_1(VAR_18, "LQ: GOING BACK TO THE OLD TABLE "
     "suc=%d cur-tpt=%d old-tpt=%d\n",
     VAR_30->success_ratio,
     VAR_30->average_tpt,
     VAR_21->last_tpt);


   VAR_38->lq_type = VAR_16;


   VAR_42 = VAR_21->active_tbl;
   VAR_38 = &(VAR_21->lq_info[VAR_42]);


   VAR_28 = FUNC_10(VAR_38->current_rate);
   VAR_31 = VAR_21->last_tpt;


   VAR_37 = 1;
  }



  VAR_21->search_better_tbl = 0;
  VAR_43 = 1;
  goto lq_update;
 }



 VAR_44 = FUNC_15(VAR_18, VAR_28, VAR_40,
     VAR_38->lq_type);
 VAR_26 = VAR_44 & 0xff;
 VAR_27 = (VAR_44 >> 8) & 0xff;


 if ((VAR_21->max_rate_idx != -1) &&
     (VAR_21->max_rate_idx < VAR_27))
  VAR_27 = VAR_13;

 VAR_45 = VAR_30->success_ratio;


 VAR_31 = VAR_30->average_tpt;
 if (VAR_26 != VAR_13)
  VAR_32 = VAR_38->win[VAR_26].average_tpt;
 if (VAR_27 != VAR_13)
  VAR_33 = VAR_38->win[VAR_27].average_tpt;

 VAR_35 = 0;


 if ((VAR_45 <= VAR_10) || (VAR_31 == 0)) {
  FUNC_1(VAR_18, "decrease rate because of low success_ratio\n");
  VAR_35 = -1;


 } else if ((VAR_32 == VAR_7) &&
     (VAR_33 == VAR_7)) {

  if (VAR_27 != VAR_13 && VAR_45 >= VAR_12)
   VAR_35 = 1;
  else if (VAR_26 != VAR_13)
   VAR_35 = 0;
 }



 else if ((VAR_32 != VAR_7) &&
   (VAR_33 != VAR_7) &&
   (VAR_32 < VAR_31) &&
   (VAR_33 < VAR_31))
  VAR_35 = 0;



 else {

  if (VAR_33 != VAR_7) {

   if (VAR_33 > VAR_31 &&
     VAR_45 >= VAR_12) {
    VAR_35 = 1;
   } else {
    VAR_35 = 0;
   }


  } else if (VAR_32 != VAR_7) {

   if (VAR_32 > VAR_31) {
    FUNC_1(VAR_18,
        "decrease rate because of low tpt\n");
    VAR_35 = -1;
   } else if (VAR_45 >= VAR_12) {
    VAR_35 = 1;
   }
  }
 }



 if ((VAR_35 == -1) && (VAR_26 != VAR_13) &&
      ((VAR_45 > VAR_11) ||
       (VAR_31 > (100 * VAR_38->expected_tpt[VAR_26]))))
  VAR_35 = 0;
 if (!FUNC_9(VAR_18) && !FUNC_5(VAR_38->lq_type))
  VAR_35 = -1;
 if (FUNC_12(VAR_18) != VAR_4 &&
  (FUNC_6(VAR_38->lq_type) || FUNC_7(VAR_38->lq_type)))
  VAR_35 = -1;

 if ((VAR_18->bt_traffic_load >= VAR_5) &&
      (FUNC_6(VAR_38->lq_type) || FUNC_7(VAR_38->lq_type))) {
  if (VAR_21->last_bt_traffic > VAR_18->bt_traffic_load) {





  } else if (VAR_21->last_bt_traffic <= VAR_18->bt_traffic_load) {
   VAR_35 = -1;
  }
 }
 VAR_21->last_bt_traffic = VAR_18->bt_traffic_load;

 if ((VAR_18->bt_traffic_load >= VAR_5) &&
      (FUNC_6(VAR_38->lq_type) || FUNC_7(VAR_38->lq_type))) {

  FUNC_23(VAR_21, 1);
  goto lq_update;
 }

 switch (VAR_35) {
 case -1:

  if (VAR_26 != VAR_13) {
   VAR_37 = 1;
   VAR_28 = VAR_26;
  }

  break;
 case 1:

  if (VAR_27 != VAR_13) {
   VAR_37 = 1;
   VAR_28 = VAR_27;
  }

  break;
 case 0:

 default:
  break;
 }

 FUNC_1(VAR_18, "choose rate scale index %d action %d low %d "
      "high %d type %d\n",
       VAR_28, VAR_35, VAR_26, VAR_27, VAR_38->lq_type);

lq_update:

 if (VAR_37)
  FUNC_26(VAR_18, VAR_49, VAR_21, VAR_38, VAR_28, VAR_41);

 if (FUNC_12(VAR_18) == VAR_4) {


   FUNC_23(VAR_21, 0);
 }






 if (!VAR_37 && !VAR_43 && !VAR_21->stay_in_tbl && VAR_30->counter) {

  VAR_21->last_tpt = VAR_31;



  if (FUNC_5(VAR_38->lq_type))
   FUNC_17(VAR_18, VAR_21, VAR_23, VAR_20, VAR_28);
  else if (FUNC_8(VAR_38->lq_type))
   FUNC_20(VAR_18, VAR_21, VAR_23, VAR_20, VAR_28);
  else if (FUNC_6(VAR_38->lq_type))
   FUNC_18(VAR_18, VAR_21, VAR_23, VAR_20, VAR_28);
  else
   FUNC_19(VAR_18, VAR_21, VAR_23, VAR_20, VAR_28);


  if (VAR_21->search_better_tbl) {

   VAR_38 = &(VAR_21->lq_info[(1 - VAR_21->active_tbl)]);
   for (VAR_29 = 0; VAR_29 < VAR_9; VAR_29++)
    FUNC_21(&(VAR_38->win[VAR_29]));


   VAR_28 = FUNC_10(VAR_38->current_rate);

   FUNC_1(VAR_18, "Switch current  mcs: %X index: %d\n",
         VAR_38->current_rate, VAR_28);
   FUNC_14(VAR_18, VAR_21, VAR_38->current_rate);
   FUNC_11(VAR_18, VAR_49, &VAR_21->lq, VAR_0, 0);
  } else
   VAR_43 = 1;
 }

 if (VAR_43 && !VAR_21->stay_in_tbl) {





  VAR_39 = &(VAR_21->lq_info[VAR_21->active_tbl]);
  if (FUNC_5(VAR_39->lq_type) && !FUNC_3(VAR_23) &&
      VAR_21->action_counter > VAR_39->max_search) {
   FUNC_1(VAR_18, "LQ: STAY in legacy table\n");
   FUNC_22(VAR_18, 1, VAR_21);
  }




  if (VAR_21->enable_counter &&
      (VAR_21->action_counter >= VAR_39->max_search) &&
      FUNC_9(VAR_18)) {
   if ((VAR_21->last_tpt > VAR_3) &&
       (VAR_21->tx_agg_tid_en & (1 << VAR_46)) &&
       (VAR_46 != VAR_8)) {
    u8 VAR_50 = VAR_21->lq.sta_id;
    VAR_47 = &VAR_18->tid_data[VAR_50][VAR_46];
    if (VAR_47->agg.state == VAR_2) {
     FUNC_1(VAR_18,
             "try to aggregate tid %d\n",
             VAR_46);
     FUNC_25(VAR_18, VAR_46,
         VAR_21, VAR_20);
    }
   }
   FUNC_22(VAR_18, 0, VAR_21);
  }
 }

out:
 VAR_38->current_rate = FUNC_13(VAR_18, VAR_38, VAR_28, VAR_41);
 VAR_21->last_txrate_idx = VAR_28;
}
