
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int smps; } ;
struct iwl_priv {int dynamic_frag_thresh; int bt_duration; int bt_on_thresh; int bt_valid; int kill_cts_mask; int kill_ack_mask; TYPE_3__* lib; int * contexts; int rx_statistics_jiffies; scalar_t__ agg_tids_count; int missed_beacon_threshold; TYPE_1__ current_ht_config; int iw_mode; int plcp_delta_threshold; int band; int calib_results; int mutex; int sta_lock; } ;
struct TYPE_6__ {TYPE_2__* bt_params; int plcp_delta_threshold; } ;
struct TYPE_5__ {scalar_t__ advanced_bt_coexist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (struct iwl_priv*,int *) ;
 int VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iwl_priv *VAR_12)
{
 FUNC_4(&VAR_12->sta_lock);

 FUNC_3(&VAR_12->mutex);

 FUNC_0(&VAR_12->calib_results);

 VAR_12->band = VAR_9;

 VAR_12->plcp_delta_threshold = VAR_12->lib->plcp_delta_threshold;

 VAR_12->iw_mode = VAR_10;
 VAR_12->current_ht_config.smps = VAR_3;
 VAR_12->missed_beacon_threshold = VAR_7;
 VAR_12->agg_tids_count = 0;

 VAR_12->rx_statistics_jiffies = VAR_11;


 FUNC_2(VAR_12, &VAR_12->contexts[VAR_8]);

 FUNC_1(VAR_12);


 if (VAR_12->lib->bt_params &&
     VAR_12->lib->bt_params->advanced_bt_coexist) {
  VAR_12->kill_ack_mask = VAR_5;
  VAR_12->kill_cts_mask = VAR_6;
  VAR_12->bt_valid = VAR_4;
  VAR_12->bt_on_thresh = VAR_2;
  VAR_12->bt_duration = VAR_0;
  VAR_12->dynamic_frag_thresh = VAR_1;
 }

 return 0;
}
