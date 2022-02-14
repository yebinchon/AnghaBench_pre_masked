
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct survey_info {int filled; scalar_t__ time_scan; scalar_t__ time_tx; scalar_t__ time_rx; scalar_t__ time; } ;
struct TYPE_6__ {scalar_t__ on_time_scan; scalar_t__ tx_time; scalar_t__ rx_time; scalar_t__ on_time_rf; } ;
struct TYPE_5__ {scalar_t__ on_time_scan; scalar_t__ tx_time; scalar_t__ rx_time; scalar_t__ on_time_rf; } ;
struct iwl_mvm {int mutex; TYPE_3__ radio_stats; TYPE_2__ accu_radio_stats; TYPE_1__* fw; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int ucode_capa; } ;


 int VAR_0 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*,int) ;
 int FUNC_5 (struct survey_info*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_7, int VAR_8,
      struct survey_info *VAR_9)
{
 struct iwl_mvm *VAR_10 = FUNC_0(VAR_7);
 int VAR_11;

 FUNC_5(VAR_9, 0, sizeof(*VAR_9));


 if (VAR_8 != 0)
  return -VAR_0;

 if (!FUNC_2(&VAR_10->fw->ucode_capa,
    VAR_1))
  return -VAR_0;

 FUNC_6(&VAR_10->mutex);

 if (FUNC_3(VAR_10)) {
  VAR_11 = FUNC_4(VAR_10, 0);
  if (VAR_11)
   goto out;
 }

 VAR_9->filled = VAR_2 |
    VAR_3 |
    VAR_5 |
    VAR_4;
 VAR_9->time = VAR_10->accu_radio_stats.on_time_rf +
         VAR_10->radio_stats.on_time_rf;
 FUNC_1(VAR_9->time, VAR_6);

 VAR_9->time_rx = VAR_10->accu_radio_stats.rx_time +
     VAR_10->radio_stats.rx_time;
 FUNC_1(VAR_9->time_rx, VAR_6);

 VAR_9->time_tx = VAR_10->accu_radio_stats.tx_time +
     VAR_10->radio_stats.tx_time;
 FUNC_1(VAR_9->time_tx, VAR_6);

 VAR_9->time_scan = VAR_10->accu_radio_stats.on_time_scan +
       VAR_10->radio_stats.on_time_scan;
 FUNC_1(VAR_9->time_scan, VAR_6);

 VAR_11 = 0;
 out:
 FUNC_7(&VAR_10->mutex);
 return VAR_11;
}
