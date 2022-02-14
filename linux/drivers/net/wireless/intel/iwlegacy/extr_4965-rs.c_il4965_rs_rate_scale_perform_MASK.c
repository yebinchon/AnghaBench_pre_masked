
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_5__ {scalar_t__ state; } ;
struct il_tid_data {TYPE_2__ agg; } ;
struct il_scale_tbl_info {int* expected_tpt; scalar_t__ max_search; int current_rate; void* lq_type; struct il_rate_scale_data* win; } ;
struct il_rate_scale_data {scalar_t__ counter; int average_tpt; int success_ratio; int success_counter; } ;
struct il_priv {TYPE_1__* stations; struct ieee80211_hw* hw; } ;
struct TYPE_6__ {size_t sta_id; } ;
struct il_lq_sta {int supp_rates; size_t band; int tx_agg_tid_en; int is_agg; int active_tbl; int is_green; int last_txrate_idx; int max_rate_idx; int last_tpt; int enable_counter; scalar_t__ action_counter; TYPE_3__ lq; struct il_scale_tbl_info* lq_info; int stay_in_tbl; scalar_t__ search_better_tbl; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_sta {int* supp_rates; } ;
struct ieee80211_conf {int dummy; } ;
struct ieee80211_hw {struct ieee80211_conf conf; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int s8 ;
typedef int s32 ;
struct TYPE_4__ {struct il_tid_data* tid; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct ieee80211_conf*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct il_priv*,struct il_scale_tbl_info*,int,int) ;
 int FUNC_7 (struct il_priv*,struct il_lq_sta*,int ) ;
 int FUNC_8 (struct il_priv*,int,int,void*) ;
 int FUNC_9 (struct il_lq_sta*,struct ieee80211_hdr*,void*) ;
 int FUNC_10 (struct il_priv*,struct il_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,int) ;
 int FUNC_11 (struct il_priv*,struct il_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,int) ;
 int FUNC_12 (struct il_priv*,struct il_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,int) ;
 int FUNC_13 (struct il_rate_scale_data*) ;
 int FUNC_14 (struct il_priv*,int,struct il_lq_sta*) ;
 int FUNC_15 (struct il_lq_sta*,int) ;
 int FUNC_16 (struct il_lq_sta*,struct ieee80211_hdr*) ;
 int FUNC_17 (struct il_priv*,int,struct il_lq_sta*,struct ieee80211_sta*) ;
 int FUNC_18 (struct il_priv*,struct il_lq_sta*,struct il_scale_tbl_info*,int,int) ;
 int FUNC_19 (struct il_priv*,struct ieee80211_sta*) ;
 int FUNC_20 (struct il_priv*,TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_21 (void*) ;
 scalar_t__ FUNC_22 (void*) ;

__attribute__((used)) static void
FUNC_23(struct il_priv *VAR_16, struct sk_buff *VAR_17,
        struct ieee80211_sta *VAR_18,
        struct il_lq_sta *VAR_19)
{
 struct ieee80211_hw *VAR_20 = VAR_16->hw;
 struct ieee80211_conf *VAR_21 = &VAR_20->conf;
 struct ieee80211_tx_info *VAR_22 = FUNC_1(VAR_17);
 struct ieee80211_hdr *VAR_23 = (struct ieee80211_hdr *)VAR_17->data;
 int VAR_24 = VAR_13;
 int VAR_25 = VAR_13;
 int VAR_26;
 int VAR_27;
 struct il_rate_scale_data *VAR_28 = ((void*)0);
 int VAR_29 = VAR_5;
 int VAR_30 = VAR_5;
 int VAR_31 = VAR_5;
 u32 VAR_32;
 s8 VAR_33 = 0;
 u16 VAR_34;
 u8 VAR_35 = 0;
 struct il_scale_tbl_info *VAR_36, *VAR_37;
 u16 VAR_38 = 0;
 u8 VAR_39 = 0;
 u8 VAR_40 = 0;
 u8 VAR_41 = 0;
 u16 VAR_42;
 s32 VAR_43;
 u8 VAR_44 = VAR_7;
 struct il_tid_data *VAR_45;

 FUNC_0("rate scale calculate new rate for skb\n");



 if (!FUNC_4(VAR_23->frame_control) ||
     (VAR_22->flags & VAR_1))
  return;

 VAR_19->supp_rates = VAR_18->supp_rates[VAR_19->band];

 VAR_44 = FUNC_16(VAR_19, VAR_23);
 if (VAR_44 != VAR_7 && (VAR_19->tx_agg_tid_en & (1 << VAR_44))) {
  VAR_45 = &VAR_16->stations[VAR_19->lq.sta_id].tid[VAR_44];
  if (VAR_45->agg.state == VAR_2)
   VAR_19->is_agg = 0;
  else
   VAR_19->is_agg = 1;
 } else
  VAR_19->is_agg = 0;






 if (!VAR_19->search_better_tbl)
  VAR_40 = VAR_19->active_tbl;
 else
  VAR_40 = 1 - VAR_19->active_tbl;

 VAR_36 = &(VAR_19->lq_info[VAR_40]);
 if (FUNC_21(VAR_36->lq_type))
  VAR_19->is_green = 0;
 else
  VAR_19->is_green = FUNC_19(VAR_16, VAR_18);
 VAR_39 = VAR_19->is_green;


 VAR_26 = VAR_19->last_txrate_idx;

 FUNC_0("Rate scale idx %d for type %d\n", VAR_26, VAR_36->lq_type);


 VAR_34 = FUNC_9(VAR_19, VAR_23, VAR_36->lq_type);

 FUNC_0("mask 0x%04X\n", VAR_34);


 if (FUNC_21(VAR_36->lq_type)) {
  if (VAR_19->band == VAR_8)

   VAR_38 =
       (u16) (VAR_34 &
       (VAR_19->supp_rates << VAR_4));
  else
   VAR_38 =
       (u16) (VAR_34 & VAR_19->supp_rates);

 } else
  VAR_38 = VAR_34;

 if (!VAR_38)
  VAR_38 = VAR_34;

 if (!((1 << VAR_26) & VAR_38)) {
  FUNC_2("Current Rate is not valid\n");
  if (VAR_19->search_better_tbl) {

   VAR_36->lq_type = VAR_6;
   VAR_19->search_better_tbl = 0;
   VAR_36 = &(VAR_19->lq_info[VAR_19->active_tbl]);

   VAR_26 = FUNC_5(VAR_36->current_rate);
   FUNC_18(VAR_16, VAR_19, VAR_36, VAR_26,
            VAR_39);
  }
  return;
 }


 if (!VAR_36->expected_tpt) {
  FUNC_2("tbl->expected_tpt is NULL\n");
  return;
 }


 if (VAR_19->max_rate_idx != -1 && VAR_19->max_rate_idx < VAR_26) {
  VAR_26 = VAR_19->max_rate_idx;
  VAR_35 = 1;
  VAR_28 = &(VAR_36->win[VAR_26]);
  goto lq_update;
 }

 VAR_28 = &(VAR_36->win[VAR_26]);
 VAR_32 = VAR_28->counter - VAR_28->success_counter;
 if (VAR_32 < VAR_14 &&
     VAR_28->success_counter < VAR_15) {
  FUNC_0("LQ: still below TH. succ=%d total=%d " "for idx %d\n",
         VAR_28->success_counter, VAR_28->counter, VAR_26);


  VAR_28->average_tpt = VAR_5;



  FUNC_15(VAR_19, 0);

  goto out;
 }


 if (VAR_28->average_tpt !=
     ((VAR_28->success_ratio * VAR_36->expected_tpt[VAR_26] + 64) / 128)) {
  FUNC_2("expected_tpt should have been calculated by now\n");
  VAR_28->average_tpt =
      ((VAR_28->success_ratio * VAR_36->expected_tpt[VAR_26] + 64) / 128);
 }


 if (VAR_19->search_better_tbl) {



  if (VAR_28->average_tpt > VAR_19->last_tpt) {

   FUNC_0("LQ: SWITCHING TO NEW TBL "
          "suc=%d cur-tpt=%d old-tpt=%d\n",
          VAR_28->success_ratio, VAR_28->average_tpt,
          VAR_19->last_tpt);

   if (!FUNC_21(VAR_36->lq_type))
    VAR_19->enable_counter = 1;


   VAR_19->active_tbl = VAR_40;
   VAR_29 = VAR_28->average_tpt;


  } else {

   FUNC_0("LQ: GOING BACK TO THE OLD TBL "
          "suc=%d cur-tpt=%d old-tpt=%d\n",
          VAR_28->success_ratio, VAR_28->average_tpt,
          VAR_19->last_tpt);


   VAR_36->lq_type = VAR_6;


   VAR_40 = VAR_19->active_tbl;
   VAR_36 = &(VAR_19->lq_info[VAR_40]);


   VAR_26 = FUNC_5(VAR_36->current_rate);
   VAR_29 = VAR_19->last_tpt;


   VAR_35 = 1;
  }



  VAR_19->search_better_tbl = 0;
  VAR_41 = 1;
  goto lq_update;
 }



 VAR_42 =
     FUNC_8(VAR_16, VAR_26, VAR_38,
     VAR_36->lq_type);
 VAR_24 = VAR_42 & 0xff;
 VAR_25 = (VAR_42 >> 8) & 0xff;


 if (VAR_19->max_rate_idx != -1 && VAR_19->max_rate_idx < VAR_25)
  VAR_25 = VAR_13;

 VAR_43 = VAR_28->success_ratio;


 VAR_29 = VAR_28->average_tpt;
 if (VAR_24 != VAR_13)
  VAR_30 = VAR_36->win[VAR_24].average_tpt;
 if (VAR_25 != VAR_13)
  VAR_31 = VAR_36->win[VAR_25].average_tpt;

 VAR_33 = 0;


 if (VAR_43 <= VAR_10 || VAR_29 == 0) {
  FUNC_0("decrease rate because of low success_ratio\n");
  VAR_33 = -1;


 } else if (VAR_30 == VAR_5 && VAR_31 == VAR_5) {

  if (VAR_25 != VAR_13 && VAR_43 >= VAR_12)
   VAR_33 = 1;
  else if (VAR_24 != VAR_13)
   VAR_33 = 0;
 }



 else if (VAR_30 != VAR_5 && VAR_31 != VAR_5 &&
   VAR_30 < VAR_29 && VAR_31 < VAR_29)
  VAR_33 = 0;



 else {

  if (VAR_31 != VAR_5) {

   if (VAR_31 > VAR_29 && VAR_43 >= VAR_12)
    VAR_33 = 1;
   else
    VAR_33 = 0;


  } else if (VAR_30 != VAR_5) {

   if (VAR_30 > VAR_29) {
    FUNC_0("decrease rate because of low tpt\n");
    VAR_33 = -1;
   } else if (VAR_43 >= VAR_12) {
    VAR_33 = 1;
   }
  }
 }



 if (VAR_33 == -1 && VAR_24 != VAR_13 &&
     (VAR_43 > VAR_11 || VAR_29 > 100 * VAR_36->expected_tpt[VAR_24]))
  VAR_33 = 0;

 switch (VAR_33) {
 case -1:

  if (VAR_24 != VAR_13) {
   VAR_35 = 1;
   VAR_26 = VAR_24;
  }

  break;
 case 1:

  if (VAR_25 != VAR_13) {
   VAR_35 = 1;
   VAR_26 = VAR_25;
  }

  break;
 case 0:

 default:
  break;
 }

 FUNC_0("choose rate scale idx %d action %d low %d " "high %d type %d\n",
        VAR_26, VAR_33, VAR_24, VAR_25, VAR_36->lq_type);

lq_update:

 if (VAR_35)
  FUNC_18(VAR_16, VAR_19, VAR_36, VAR_26, VAR_39);



 FUNC_15(VAR_19, 0);







 if (!VAR_35 && !VAR_41 && !VAR_19->stay_in_tbl && VAR_28->counter) {

  VAR_19->last_tpt = VAR_29;



  if (FUNC_21(VAR_36->lq_type))
   FUNC_10(VAR_16, VAR_19, VAR_21, VAR_18, VAR_26);
  else if (FUNC_22(VAR_36->lq_type))
   FUNC_12(VAR_16, VAR_19, VAR_21, VAR_18,
           VAR_26);
  else
   FUNC_11(VAR_16, VAR_19, VAR_21, VAR_18,
            VAR_26);


  if (VAR_19->search_better_tbl) {

   VAR_36 = &(VAR_19->lq_info[(1 - VAR_19->active_tbl)]);
   for (VAR_27 = 0; VAR_27 < VAR_9; VAR_27++)
    FUNC_13(&(VAR_36->win[VAR_27]));


   VAR_26 = FUNC_5(VAR_36->current_rate);

   FUNC_0("Switch current  mcs: %X idx: %d\n",
          VAR_36->current_rate, VAR_26);
   FUNC_7(VAR_16, VAR_19, VAR_36->current_rate);
   FUNC_20(VAR_16, &VAR_19->lq, VAR_0, 0);
  } else
   VAR_41 = 1;
 }

 if (VAR_41 && !VAR_19->stay_in_tbl) {





  VAR_37 = &(VAR_19->lq_info[VAR_19->active_tbl]);
  if (FUNC_21(VAR_37->lq_type) && !FUNC_3(VAR_21) &&
      VAR_19->action_counter > VAR_37->max_search) {
   FUNC_0("LQ: STAY in legacy table\n");
   FUNC_14(VAR_16, 1, VAR_19);
  }




  if (VAR_19->enable_counter &&
      VAR_19->action_counter >= VAR_37->max_search) {
   if (VAR_19->last_tpt > VAR_3 &&
       (VAR_19->tx_agg_tid_en & (1 << VAR_44)) &&
       VAR_44 != VAR_7) {
    VAR_45 =
        &VAR_16->stations[VAR_19->lq.sta_id].tid[VAR_44];
    if (VAR_45->agg.state == VAR_2) {
     FUNC_0("try to aggregate tid %d\n",
            VAR_44);
     FUNC_17(VAR_16, VAR_44,
         VAR_19, VAR_18);
    }
   }
   FUNC_14(VAR_16, 0, VAR_19);
  }
 }

out:
 VAR_36->current_rate =
     FUNC_6(VAR_16, VAR_36, VAR_26, VAR_39);
 VAR_27 = VAR_26;
 VAR_19->last_txrate_idx = VAR_27;
}
