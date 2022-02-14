
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct rs_rate {int index; void* type; } ;
struct iwl_scale_tbl_info {struct rs_rate rate; struct iwl_rate_scale_data* win; int expected_tpt; } ;
struct iwl_rate_scale_data {scalar_t__ counter; scalar_t__ success_counter; int average_tpt; int success_ratio; } ;
struct iwl_mvm_sta {int agg_tids; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {size_t is_agg; int search_better_tbl; size_t active_tbl; int last_tpt; struct iwl_scale_tbl_info* lq_info; int rs_state; } ;
struct ieee80211_sta {int dummy; } ;
typedef int s32 ;
typedef enum rs_column { ____Placeholder_rs_column } rs_column ;
typedef enum rs_action { ____Placeholder_rs_action } rs_action ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct iwl_mvm*,char*,...) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct rs_rate*) ;
 scalar_t__ FUNC_4 (struct rs_rate*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_sta*) ;
 struct iwl_mvm_sta* FUNC_6 (struct ieee80211_sta*) ;
 int FUNC_7 (struct iwl_mvm*,struct rs_rate*,char*) ;
 int FUNC_8 (struct iwl_mvm*,int,int,void*) ;
 int FUNC_9 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,struct iwl_scale_tbl_info*) ;
 int FUNC_10 (struct iwl_mvm*,struct iwl_scale_tbl_info*,int ,int,int,int,int,int) ;
 int FUNC_11 (struct iwl_lq_sta*,struct rs_rate*) ;
 int FUNC_12 (struct rs_rate*) ;
 int FUNC_13 (struct iwl_mvm*,struct iwl_scale_tbl_info*) ;
 size_t FUNC_14 (size_t) ;
 int FUNC_15 (struct iwl_mvm*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_16 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;
 int FUNC_17 (struct iwl_mvm*,int ,struct iwl_lq_sta*) ;
 int FUNC_18 (struct iwl_lq_sta*,int) ;
 int FUNC_19 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,int) ;
 int FUNC_20 (struct iwl_mvm*,struct iwl_mvm_sta*,int,struct iwl_lq_sta*,struct ieee80211_sta*) ;
 size_t FUNC_21 (struct iwl_mvm*,struct ieee80211_sta*,struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;
 int FUNC_22 (struct iwl_mvm*,struct ieee80211_sta*,struct iwl_lq_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_23 (struct iwl_mvm*,struct ieee80211_sta*,struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static void FUNC_24(struct iwl_mvm *VAR_10,
      struct ieee80211_sta *VAR_11,
      struct iwl_lq_sta *VAR_12,
      int VAR_13, bool VAR_14)
{
 int VAR_15 = VAR_4;
 int VAR_16 = VAR_4;
 int VAR_17;
 struct iwl_rate_scale_data *VAR_18 = ((void*)0);
 int VAR_19 = VAR_0;
 int VAR_20 = VAR_0;
 int VAR_21 = VAR_0;
 u32 VAR_22;
 enum rs_action VAR_23 = 129;
 u16 VAR_24;
 u8 VAR_25 = 0;
 struct iwl_scale_tbl_info *VAR_26, *VAR_27;
 u8 VAR_28 = 0;
 u8 VAR_29 = 0;
 u16 VAR_30;
 s32 VAR_31;
 u8 VAR_32 = VAR_12->is_agg;
 struct iwl_mvm_sta *VAR_33 = FUNC_6(VAR_11);
 struct rs_rate *VAR_34;

 VAR_12->is_agg = !!VAR_33->agg_tids;






 if (!VAR_12->search_better_tbl)
  VAR_28 = VAR_12->active_tbl;
 else
  VAR_28 = FUNC_14(VAR_12->active_tbl);

 VAR_26 = &(VAR_12->lq_info[VAR_28]);
 VAR_34 = &VAR_26->rate;

 if (VAR_32 != VAR_12->is_agg) {
  FUNC_1(VAR_10,
          "Aggregation changed: prev %d current %d. Update expected TPT table\n",
          VAR_32, VAR_12->is_agg);
  FUNC_16(VAR_12, VAR_26);
  FUNC_13(VAR_10, VAR_26);
 }


 VAR_17 = VAR_34->index;


 VAR_24 = FUNC_11(VAR_12, VAR_34);

 if (!(FUNC_0(VAR_17) & VAR_24)) {
  FUNC_2(VAR_10, "Current Rate is not valid\n");
  if (VAR_12->search_better_tbl) {

   VAR_34->type = VAR_5;
   VAR_12->search_better_tbl = 0;
   VAR_26 = &(VAR_12->lq_info[VAR_12->active_tbl]);
   FUNC_23(VAR_10, VAR_11, VAR_12, VAR_26);
  }
  return;
 }


 if (!VAR_26->expected_tpt) {
  FUNC_2(VAR_10, "tbl->expected_tpt is NULL\n");
  return;
 }


 VAR_18 = &(VAR_26->win[VAR_17]);
 VAR_22 = VAR_18->counter - VAR_18->success_counter;
 if ((VAR_22 < VAR_2) &&
     (VAR_18->success_counter < VAR_3)) {
  FUNC_1(VAR_10,
          "%s: Test Window: succ %d total %d\n",
          FUNC_12(VAR_34),
          VAR_18->success_counter, VAR_18->counter);


  VAR_18->average_tpt = VAR_0;



  FUNC_18(VAR_12, 0);

  return;
 }


 if (VAR_12->search_better_tbl) {



  if (VAR_18->average_tpt > VAR_12->last_tpt) {
   FUNC_1(VAR_10,
           "SWITCHING TO NEW TABLE SR: %d "
           "cur-tpt %d old-tpt %d\n",
           VAR_18->success_ratio,
           VAR_18->average_tpt,
           VAR_12->last_tpt);


   VAR_12->active_tbl = VAR_28;
   VAR_19 = VAR_18->average_tpt;

  } else {
   FUNC_1(VAR_10,
           "GOING BACK TO THE OLD TABLE: SR %d "
           "cur-tpt %d old-tpt %d\n",
           VAR_18->success_ratio,
           VAR_18->average_tpt,
           VAR_12->last_tpt);


   VAR_34->type = VAR_5;


   VAR_28 = VAR_12->active_tbl;
   VAR_26 = &(VAR_12->lq_info[VAR_28]);


   VAR_17 = VAR_26->rate.index;
   VAR_19 = VAR_12->last_tpt;


   VAR_25 = 1;
  }



  VAR_12->search_better_tbl = 0;
  VAR_29 = 1;
  goto lq_update;
 }



 VAR_30 = FUNC_8(VAR_10, VAR_17, VAR_24, VAR_34->type);
 VAR_15 = VAR_30 & 0xff;
 VAR_16 = (VAR_30 >> 8) & 0xff;



 VAR_31 = VAR_18->success_ratio;


 VAR_19 = VAR_18->average_tpt;
 if (VAR_15 != VAR_4)
  VAR_20 = VAR_26->win[VAR_15].average_tpt;
 if (VAR_16 != VAR_4)
  VAR_21 = VAR_26->win[VAR_16].average_tpt;

 FUNC_1(VAR_10,
         "%s: cur_tpt %d SR %d low %d high %d low_tpt %d high_tpt %d\n",
         FUNC_12(VAR_34), VAR_19, VAR_31,
         VAR_15, VAR_16, VAR_20, VAR_21);

 VAR_23 = FUNC_10(VAR_10, VAR_26, VAR_31, VAR_15, VAR_16,
       VAR_19, VAR_20, VAR_21);


 if (FUNC_4(VAR_34) &&
     !FUNC_5(VAR_10, VAR_11)) {
  FUNC_1(VAR_10,
          "BT Coex forbids MIMO. Search for new config\n");
  FUNC_18(VAR_12, 1);
  goto lq_update;
 }

 switch (VAR_23) {
 case 130:

  if (VAR_15 != VAR_4) {
   VAR_25 = 1;
   VAR_17 = VAR_15;
  } else {
   FUNC_1(VAR_10,
           "At the bottom rate. Can't decrease\n");
  }

  break;
 case 128:

  if (VAR_16 != VAR_4) {
   VAR_25 = 1;
   VAR_17 = VAR_16;
  } else {
   FUNC_1(VAR_10,
           "At the top rate. Can't increase\n");
  }

  break;
 case 129:

  if (VAR_12->rs_state == VAR_9)
   VAR_25 = FUNC_21(VAR_10, VAR_11, VAR_12, VAR_26);
  break;
 default:
  break;
 }

lq_update:

 if (VAR_25) {
  VAR_26->rate.index = VAR_17;
  if (VAR_1)
   FUNC_22(VAR_10, VAR_11, VAR_12, VAR_26, VAR_23);
  FUNC_15(VAR_10, VAR_11, VAR_26, VAR_23);
  FUNC_23(VAR_10, VAR_11, VAR_12, VAR_26);
 }

 FUNC_18(VAR_12, 0);







 if (!VAR_25 && !VAR_29 &&
     VAR_12->rs_state == VAR_8
     && VAR_18->counter) {
  enum rs_column VAR_35;


  VAR_12->last_tpt = VAR_19;

  FUNC_1(VAR_10,
          "Start Search: update_lq %d done_search %d rs_state %d win->counter %d\n",
          VAR_25, VAR_29, VAR_12->rs_state,
          VAR_18->counter);

  VAR_35 = FUNC_9(VAR_10, VAR_12, VAR_11, VAR_26);
  if (VAR_35 != VAR_6) {
   int VAR_36 = FUNC_19(VAR_10, VAR_12, VAR_11,
            VAR_35);
   if (!VAR_36)
    VAR_12->search_better_tbl = 1;
  } else {
   FUNC_1(VAR_10,
           "No more columns to explore in search cycle. Go to RS_STATE_SEARCH_CYCLE_ENDED\n");
   VAR_12->rs_state = VAR_7;
  }


  if (VAR_12->search_better_tbl) {

   VAR_26 = &VAR_12->lq_info[FUNC_14(VAR_12->active_tbl)];
   FUNC_13(VAR_10, VAR_26);


   VAR_17 = VAR_26->rate.index;

   FUNC_7(VAR_10, &VAR_26->rate,
         "Switch to SEARCH TABLE:");
   FUNC_23(VAR_10, VAR_11, VAR_12, VAR_26);
  } else {
   VAR_29 = 1;
  }
 }

 if (!VAR_14)
  FUNC_20(VAR_10, VAR_33, VAR_13, VAR_12, VAR_11);

 if (VAR_29 && VAR_12->rs_state == VAR_7) {
  VAR_27 = &(VAR_12->lq_info[VAR_12->active_tbl]);
  FUNC_17(VAR_10, FUNC_3(&VAR_27->rate), VAR_12);
 }
}
