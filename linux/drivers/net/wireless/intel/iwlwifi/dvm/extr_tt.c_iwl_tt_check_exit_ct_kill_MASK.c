
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct iwl_tt_mgmt {scalar_t__ state; int ct_kill_toggle; int ct_kill_exit_tm; } ;
struct iwl_priv {struct iwl_tt_mgmt thermal_throttle; int trans; int status; } ;
struct TYPE_2__ {int ct_kill_exit_tm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct iwl_priv* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,unsigned long*) ;
 int FUNC_4 (int ,unsigned long*) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int *,scalar_t__) ;
 struct iwl_priv* VAR_9 ;
 scalar_t__ FUNC_7 (int ,int *) ;
 TYPE_1__ VAR_10 ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_11)
{
 struct iwl_priv *VAR_12 = FUNC_1(VAR_12, VAR_11,
        VAR_10.ct_kill_exit_tm);
 struct iwl_tt_mgmt *VAR_13 = &VAR_12->thermal_throttle;
 unsigned long VAR_14;

 if (FUNC_7(VAR_7, &VAR_12->status))
  return;

 if (VAR_13->state == VAR_6) {
  if (VAR_12->thermal_throttle.ct_kill_toggle) {
   FUNC_5(VAR_12->trans, VAR_1,
        VAR_2);
   VAR_12->thermal_throttle.ct_kill_toggle = 0;
  } else {
   FUNC_5(VAR_12->trans, VAR_3,
        VAR_2);
   VAR_12->thermal_throttle.ct_kill_toggle = 1;
  }
  FUNC_2(VAR_12->trans, VAR_0);
  if (FUNC_3(VAR_12->trans, &VAR_14))
   FUNC_4(VAR_12->trans, &VAR_14);




  FUNC_0(VAR_12, "schedule ct_kill exit timer\n");
  FUNC_6(&VAR_12->thermal_throttle.ct_kill_exit_tm,
     VAR_8 + VAR_4 * VAR_5);
 }
}
