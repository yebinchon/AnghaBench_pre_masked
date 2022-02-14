
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct iwl_tt_mgmt {scalar_t__ state; } ;
struct iwl_priv {int status; struct iwl_tt_mgmt thermal_throttle; } ;
struct TYPE_2__ {int ct_kill_waiting_tm; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iwl_priv* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct iwl_priv*,int) ;
 struct iwl_priv* VAR_3 ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_5)
{
 struct iwl_priv *VAR_6 = FUNC_1(VAR_6, VAR_5,
        VAR_4.ct_kill_waiting_tm);
 struct iwl_tt_mgmt *VAR_7 = &VAR_6->thermal_throttle;

 if (FUNC_4(VAR_2, &VAR_6->status))
  return;


 if (VAR_7->state != VAR_0) {
  FUNC_0(VAR_6, "entering CT_KILL state when "
    "temperature timer expired\n");
  VAR_7->state = VAR_0;
  FUNC_3(VAR_1, &VAR_6->status);
  FUNC_2(VAR_6, 1);
 }
}
