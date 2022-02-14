
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int action; int is_SGI; int* expected_tpt; int lq_type; int ant_type; int current_rate; int is_ht40; struct iwl_rate_scale_data* win; } ;
struct iwl_rate_scale_data {int success_ratio; } ;
struct TYPE_4__ {int tx_chains_num; } ;
struct iwl_priv {int bt_traffic_load; scalar_t__ bt_full_concurrent; TYPE_2__ hw_params; TYPE_1__* nvm_data; } ;
struct iwl_lq_sta {size_t active_tbl; int last_tpt; int search_better_tbl; int action_counter; struct iwl_scale_tbl_info* lq_info; int is_green; } ;
struct ieee80211_sta_ht_cap {int cap; } ;
struct ieee80211_sta {struct ieee80211_sta_ht_cap ht_cap; } ;
struct ieee80211_conf {int dummy; } ;
typedef int s8 ;
typedef int s32 ;
struct TYPE_3__ {int valid_tx_ant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;




 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*,int) ;







 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (struct iwl_scale_tbl_info*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_scale_tbl_info*,int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;
 int FUNC_7 (struct iwl_priv*,struct iwl_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_8 (struct iwl_priv*,struct iwl_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_9 (int,int *,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static void FUNC_10(struct iwl_priv *VAR_10,
       struct iwl_lq_sta *VAR_11,
       struct ieee80211_conf *VAR_12,
       struct ieee80211_sta *VAR_13, int VAR_14)
{
 s8 VAR_15 = VAR_11->is_green;
 struct iwl_scale_tbl_info *VAR_16 = &(VAR_11->lq_info[VAR_11->active_tbl]);
 struct iwl_scale_tbl_info *VAR_17 =
    &(VAR_11->lq_info[(1 - VAR_11->active_tbl)]);
 struct iwl_rate_scale_data *VAR_18 = &(VAR_16->win[VAR_14]);
 struct ieee80211_sta_ht_cap *VAR_19 = &VAR_13->ht_cap;
 u32 VAR_20 = (sizeof(struct iwl_scale_tbl_info) -
    (sizeof(struct iwl_rate_scale_data) * VAR_7));
 u8 VAR_21;
 u8 VAR_22 = VAR_10->nvm_data->valid_tx_ant;
 u8 VAR_23 = VAR_10->hw_params.tx_chains_num;
 u8 VAR_24 = 0;
 int VAR_25;

 switch (VAR_10->bt_traffic_load) {
 case 135:

  break;
 case 137:
 case 138:

  if (VAR_16->action != 130)
   VAR_16->action = 130;
  break;
 case 136:

  if (VAR_16->action == 129 ||
      VAR_16->action == 128)
   VAR_16->action = 130;
  break;
 default:
  FUNC_1(VAR_10, "Invalid BT load %d\n", VAR_10->bt_traffic_load);
  break;
 }

 if ((FUNC_2(VAR_10) == VAR_6) &&
     (VAR_16->action < 130 ||
      VAR_16->action > 128)) {

  VAR_16->action = 130;
 }


 if (VAR_10->bt_full_concurrent &&
     (VAR_16->action < 130 ||
      VAR_16->action > 128))
  VAR_16->action = 130;

 VAR_21 = VAR_16->action;
 for (;;) {
  VAR_11->action_counter++;
  switch (VAR_16->action) {
  case 134:
  case 133:
   FUNC_0(VAR_10, "LQ: MIMO2 toggle Antennas\n");

   if (VAR_23 <= 2)
    break;

   if (VAR_18->success_ratio >= VAR_8)
    break;

   FUNC_3(VAR_17, VAR_16, VAR_20);
   if (FUNC_9(VAR_22,
           &VAR_17->current_rate, VAR_17)) {
    VAR_24 = 1;
    goto out;
   }
   break;
  case 130:
  case 129:
  case 128:
   FUNC_0(VAR_10, "LQ: MIMO2 switch to SISO\n");


   FUNC_3(VAR_17, VAR_16, VAR_20);

   if (VAR_16->action == 130)
    VAR_17->ant_type = VAR_0;
   else if (VAR_16->action == 129)
    VAR_17->ant_type = VAR_2;
   else
    VAR_17->ant_type = VAR_3;

   if (!FUNC_5(VAR_22, VAR_17->ant_type))
    break;

   VAR_25 = FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13,
       VAR_17, VAR_14);
   if (!VAR_25)
    goto out;

   break;

  case 132:
   if (!VAR_16->is_ht40 && !(VAR_19->cap &
      VAR_4))
    break;
   if (VAR_16->is_ht40 && !(VAR_19->cap &
      VAR_5))
    break;

   FUNC_0(VAR_10, "LQ: MIMO2 toggle SGI/NGI\n");


   FUNC_3(VAR_17, VAR_16, VAR_20);
   VAR_17->is_SGI = !VAR_16->is_SGI;
   FUNC_6(VAR_11, VAR_17);






   if (VAR_16->is_SGI) {
    s32 VAR_26 = VAR_11->last_tpt / 100;
    if (VAR_26 >= VAR_17->expected_tpt[VAR_14])
     break;
   }
   VAR_17->current_rate =
    FUNC_4(VAR_10, VAR_17,
            VAR_14, VAR_15);
   VAR_24 = 1;
   goto out;

  case 131:
   FUNC_0(VAR_10, "LQ: MIMO2 switch to MIMO3\n");
   FUNC_3(VAR_17, VAR_16, VAR_20);
   VAR_17->is_SGI = 0;
   VAR_17->ant_type = VAR_1;

   if (!FUNC_5(VAR_22, VAR_17->ant_type))
    break;

   VAR_25 = FUNC_7(VAR_10, VAR_11, VAR_12, VAR_13,
       VAR_17, VAR_14);
   if (!VAR_25)
    goto out;

   break;
  }
  VAR_16->action++;
  if (VAR_16->action > 131)
   VAR_16->action = 134;

  if (VAR_16->action == VAR_21)
   break;
 }
 VAR_17->lq_type = VAR_9;
 return;
 out:
 VAR_11->search_better_tbl = 1;
 VAR_16->action++;
 if (VAR_16->action > 131)
  VAR_16->action = 134;
 if (VAR_24)
  VAR_17->action = VAR_16->action;

}
