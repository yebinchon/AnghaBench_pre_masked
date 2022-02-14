
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int action; int is_SGI; int* expected_tpt; int lq_type; int current_rate; int is_ht40; int ant_type; struct iwl_rate_scale_data* win; } ;
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
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;




 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (struct iwl_scale_tbl_info*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_scale_tbl_info*,int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;
 int FUNC_7 (struct iwl_priv*,struct iwl_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_8 (struct iwl_priv*,struct iwl_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_9 (int,int *,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static void FUNC_10(struct iwl_priv *VAR_12,
       struct iwl_lq_sta *VAR_13,
       struct ieee80211_conf *VAR_14,
       struct ieee80211_sta *VAR_15, int VAR_16)
{
 s8 VAR_17 = VAR_13->is_green;
 struct iwl_scale_tbl_info *VAR_18 = &(VAR_13->lq_info[VAR_13->active_tbl]);
 struct iwl_scale_tbl_info *VAR_19 =
    &(VAR_13->lq_info[(1 - VAR_13->active_tbl)]);
 struct iwl_rate_scale_data *VAR_20 = &(VAR_18->win[VAR_16]);
 struct ieee80211_sta_ht_cap *VAR_21 = &VAR_15->ht_cap;
 u32 VAR_22 = (sizeof(struct iwl_scale_tbl_info) -
    (sizeof(struct iwl_rate_scale_data) * VAR_9));
 u8 VAR_23;
 u8 VAR_24 = VAR_12->nvm_data->valid_tx_ant;
 u8 VAR_25 = VAR_12->hw_params.tx_chains_num;
 int VAR_26;
 u8 VAR_27 = 0;

 switch (VAR_12->bt_traffic_load) {
 case 137:

  break;
 case 139:
 case 140:

  if (VAR_18->action != 130)
   VAR_18->action = 130;
  break;
 case 138:

  if (VAR_18->action == 129 ||
      VAR_18->action == 128)
   VAR_18->action = 130;
  break;
 default:
  FUNC_1(VAR_12, "Invalid BT load %d\n", VAR_12->bt_traffic_load);
  break;
 }

 if ((FUNC_2(VAR_12) == VAR_8) &&
     (VAR_18->action < 130 ||
      VAR_18->action > 128)) {

  VAR_18->action = 130;
 }


 if (VAR_12->bt_full_concurrent &&
     (VAR_18->action < 130 ||
      VAR_18->action > 128))
  VAR_18->action = 130;

 VAR_23 = VAR_18->action;
 for (;;) {
  VAR_13->action_counter++;
  switch (VAR_18->action) {
  case 136:
  case 135:
   FUNC_0(VAR_12, "LQ: MIMO3 toggle Antennas\n");

   if (VAR_25 <= 3)
    break;

   if (VAR_20->success_ratio >= VAR_10)
    break;

   FUNC_3(VAR_19, VAR_18, VAR_22);
   if (FUNC_9(VAR_24,
           &VAR_19->current_rate, VAR_19))
    goto out;
   break;
  case 130:
  case 129:
  case 128:
   FUNC_0(VAR_12, "LQ: MIMO3 switch to SISO\n");


   FUNC_3(VAR_19, VAR_18, VAR_22);

   if (VAR_18->action == 130)
    VAR_19->ant_type = VAR_0;
   else if (VAR_18->action == 129)
    VAR_19->ant_type = VAR_3;
   else
    VAR_19->ant_type = VAR_5;

   if (!FUNC_5(VAR_24, VAR_19->ant_type))
    break;

   VAR_26 = FUNC_8(VAR_12, VAR_13, VAR_14, VAR_15,
       VAR_19, VAR_16);
   if (!VAR_26)
    goto out;

   break;

  case 133:
  case 132:
  case 131:
   FUNC_0(VAR_12, "LQ: MIMO3 switch to MIMO2\n");

   FUNC_3(VAR_19, VAR_18, VAR_22);
   VAR_19->is_SGI = 0;
   if (VAR_18->action == 133)
    VAR_19->ant_type = VAR_1;
   else if (VAR_18->action == 132)
    VAR_19->ant_type = VAR_2;
   else
    VAR_19->ant_type = VAR_4;

   if (!FUNC_5(VAR_24, VAR_19->ant_type))
    break;

   VAR_26 = FUNC_7(VAR_12, VAR_13, VAR_14, VAR_15,
       VAR_19, VAR_16);
   if (!VAR_26)
    goto out;

   break;

  case 134:
   if (!VAR_18->is_ht40 && !(VAR_21->cap &
      VAR_6))
    break;
   if (VAR_18->is_ht40 && !(VAR_21->cap &
      VAR_7))
    break;

   FUNC_0(VAR_12, "LQ: MIMO3 toggle SGI/NGI\n");


   FUNC_3(VAR_19, VAR_18, VAR_22);
   VAR_19->is_SGI = !VAR_18->is_SGI;
   FUNC_6(VAR_13, VAR_19);






   if (VAR_18->is_SGI) {
    s32 VAR_28 = VAR_13->last_tpt / 100;
    if (VAR_28 >= VAR_19->expected_tpt[VAR_16])
     break;
   }
   VAR_19->current_rate =
    FUNC_4(VAR_12, VAR_19,
            VAR_16, VAR_17);
   VAR_27 = 1;
   goto out;
  }
  VAR_18->action++;
  if (VAR_18->action > 134)
   VAR_18->action = 136;

  if (VAR_18->action == VAR_23)
   break;
 }
 VAR_19->lq_type = VAR_11;
 return;
 out:
 VAR_13->search_better_tbl = 1;
 VAR_18->action++;
 if (VAR_18->action > 134)
  VAR_18->action = 136;
 if (VAR_27)
  VAR_19->action = VAR_18->action;
}
