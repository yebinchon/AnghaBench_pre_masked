
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ct_kill_threshold; int ct_kill_exit_threshold; } ;
struct TYPE_4__ {int ct_kill_toggle; } ;
struct iwl_priv {TYPE_3__ hw_params; TYPE_2__* lib; TYPE_1__ thermal_throttle; int trans; } ;
struct iwl_ct_kill_throttling_config {void* critical_temperature_R; void* critical_temperature_exit; void* critical_temperature_enter; } ;
struct iwl_ct_kill_config {void* critical_temperature_R; void* critical_temperature_exit; void* critical_temperature_enter; } ;
typedef int cmd ;
typedef int adv_cmd ;
struct TYPE_5__ {scalar_t__ support_ct_kill_exit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,int ,...) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int VAR_2 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_priv*,int ,int ,int,struct iwl_ct_kill_throttling_config*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct iwl_priv *VAR_3)
{
 struct iwl_ct_kill_config VAR_4;
 struct iwl_ct_kill_throttling_config VAR_5;
 int VAR_6 = 0;

 FUNC_4(VAR_3->trans, VAR_0,
      VAR_1);

 VAR_3->thermal_throttle.ct_kill_toggle = 0;

 if (VAR_3->lib->support_ct_kill_exit) {
  VAR_5.critical_temperature_enter =
   FUNC_2(VAR_3->hw_params.ct_kill_threshold);
  VAR_5.critical_temperature_exit =
   FUNC_2(VAR_3->hw_params.ct_kill_exit_threshold);

  VAR_6 = FUNC_3(VAR_3,
           VAR_2,
           0, sizeof(VAR_5), &VAR_5);
  if (VAR_6)
   FUNC_1(VAR_3, "REPLY_CT_KILL_CONFIG_CMD failed\n");
  else
   FUNC_0(VAR_3, "REPLY_CT_KILL_CONFIG_CMD "
    "succeeded, critical temperature enter is %d,"
    "exit is %d\n",
    VAR_3->hw_params.ct_kill_threshold,
    VAR_3->hw_params.ct_kill_exit_threshold);
 } else {
  VAR_4.critical_temperature_R =
   FUNC_2(VAR_3->hw_params.ct_kill_threshold);

  VAR_6 = FUNC_3(VAR_3,
           VAR_2,
           0, sizeof(VAR_4), &VAR_4);
  if (VAR_6)
   FUNC_1(VAR_3, "REPLY_CT_KILL_CONFIG_CMD failed\n");
  else
   FUNC_0(VAR_3, "REPLY_CT_KILL_CONFIG_CMD "
    "succeeded, "
    "critical temperature is %d\n",
    VAR_3->hw_params.ct_kill_threshold);
 }
}
