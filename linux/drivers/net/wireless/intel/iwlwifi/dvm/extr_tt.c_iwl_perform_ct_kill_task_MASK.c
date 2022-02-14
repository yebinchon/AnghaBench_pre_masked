
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ct_kill_exit_tm; } ;
struct iwl_priv {int hw; scalar_t__ mac80211_registered; TYPE_1__ thermal_throttle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct iwl_priv *VAR_3,
      bool VAR_4)
{
 if (VAR_4) {
  FUNC_0(VAR_3, "Stop all queues\n");
  if (VAR_3->mac80211_registered)
   FUNC_1(VAR_3->hw);
  FUNC_0(VAR_3,
    "Schedule 5 seconds CT_KILL Timer\n");
  FUNC_3(&VAR_3->thermal_throttle.ct_kill_exit_tm,
     VAR_2 + VAR_0 * VAR_1);
 } else {
  FUNC_0(VAR_3, "Wake all queues\n");
  if (VAR_3->mac80211_registered)
   FUNC_2(VAR_3->hw);
 }
}
