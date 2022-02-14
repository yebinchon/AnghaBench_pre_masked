
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs_rate {scalar_t__ bw; int sgi; int type; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {scalar_t__ max_mimo2_rate_idx; scalar_t__ max_siso_rate_idx; scalar_t__ band; void* optimal_nentries; void* optimal_rates; int active_legacy_rate; int optimal_rate_mask; int active_siso_rate; int active_mimo2_rate; scalar_t__ is_vht; struct rs_rate optimal_rate; } ;
struct ieee80211_sta {int dummy; } ;


 void* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (struct rs_rate*) ;
 scalar_t__ FUNC_2 (struct rs_rate*) ;
 scalar_t__ FUNC_3 (struct rs_rate*) ;
 scalar_t__ FUNC_4 (struct rs_rate*) ;
 scalar_t__ FUNC_5 (struct ieee80211_sta*) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_sta*,struct rs_rate*,int *) ;

__attribute__((used)) static void FUNC_7(struct iwl_mvm *VAR_14,
     struct ieee80211_sta *VAR_15,
     struct iwl_lq_sta *VAR_16)
{
 struct rs_rate *VAR_17 = &VAR_16->optimal_rate;

 if (VAR_16->max_mimo2_rate_idx != VAR_0)
  VAR_17->type = VAR_16->is_vht ? VAR_5 : VAR_1;
 else if (VAR_16->max_siso_rate_idx != VAR_0)
  VAR_17->type = VAR_16->is_vht ? VAR_6 : VAR_2;
 else if (VAR_16->band == VAR_7)
  VAR_17->type = VAR_3;
 else
  VAR_17->type = VAR_4;

 VAR_17->bw = FUNC_5(VAR_15);
 VAR_17->sgi = FUNC_6(VAR_14, VAR_15, VAR_17, ((void*)0));



 if (FUNC_2(VAR_17)) {
  VAR_16->optimal_rate_mask = VAR_16->active_mimo2_rate;
 } else if (FUNC_3(VAR_17)) {
  VAR_16->optimal_rate_mask = VAR_16->active_siso_rate;
 } else {
  VAR_16->optimal_rate_mask = VAR_16->active_legacy_rate;

  if (VAR_16->band == VAR_7) {
   VAR_16->optimal_rates = VAR_10;
   VAR_16->optimal_nentries =
    FUNC_0(VAR_10);
  } else {
   VAR_16->optimal_rates = VAR_9;
   VAR_16->optimal_nentries =
    FUNC_0(VAR_9);
  }
 }

 if (FUNC_4(VAR_17)) {
  if (VAR_17->bw == VAR_8) {
   VAR_16->optimal_rates = VAR_13;
   VAR_16->optimal_nentries =
    FUNC_0(VAR_13);
  } else {
   VAR_16->optimal_rates = VAR_12;
   VAR_16->optimal_nentries =
    FUNC_0(VAR_12);
  }
 } else if (FUNC_1(VAR_17)) {
  VAR_16->optimal_rates = VAR_11;
  VAR_16->optimal_nentries = FUNC_0(VAR_11);
 }
}
