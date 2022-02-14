
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_tt_trans {int dummy; } ;
struct iwl_tt_restriction {int dummy; } ;
struct iwl_tt_mgmt {int state; int advanced_tt; struct iwl_tt_trans* restriction; struct iwl_tt_trans* transaction; int ct_kill_waiting_tm; int ct_kill_exit_tm; } ;
struct iwl_priv {struct iwl_tt_mgmt thermal_throttle; TYPE_1__* lib; int ct_exit; int ct_enter; int tt_work; } ;
struct TYPE_2__ {scalar_t__ adv_thermal_throttle; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int FUNC_2 (struct iwl_priv*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct iwl_tt_trans*) ;
 int FUNC_5 (struct iwl_tt_trans*,int *,int) ;
 int FUNC_6 (struct iwl_tt_mgmt*,int ,int) ;
 int * VAR_11 ;
 int FUNC_7 (int *,int ,int ) ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;

void FUNC_8(struct iwl_priv *VAR_16)
{
 struct iwl_tt_mgmt *VAR_17 = &VAR_16->thermal_throttle;
 int VAR_18 = sizeof(struct iwl_tt_trans) * (VAR_5 - 1);
 struct iwl_tt_trans *VAR_19;

 FUNC_1(VAR_16, "Initialize Thermal Throttling\n");

 FUNC_6(VAR_17, 0, sizeof(struct iwl_tt_mgmt));

 VAR_17->state = VAR_1;
 FUNC_7(&VAR_16->thermal_throttle.ct_kill_exit_tm,
      VAR_9, 0);
 FUNC_7(&VAR_16->thermal_throttle.ct_kill_waiting_tm,
      VAR_10, 0);

 FUNC_0(&VAR_16->tt_work, VAR_8);
 FUNC_0(&VAR_16->ct_enter, VAR_6);
 FUNC_0(&VAR_16->ct_exit, VAR_7);

 if (VAR_16->lib->adv_thermal_throttle) {
  FUNC_1(VAR_16, "Advanced Thermal Throttling\n");
  VAR_17->restriction = FUNC_3(VAR_5,
       sizeof(struct iwl_tt_restriction),
       VAR_0);
  VAR_17->transaction = FUNC_3(VAR_5 *
       (VAR_5 - 1),
       sizeof(struct iwl_tt_trans),
       VAR_0);
  if (!VAR_17->restriction || !VAR_17->transaction) {
   FUNC_2(VAR_16, "Fallback to Legacy Throttling\n");
   VAR_16->thermal_throttle.advanced_tt = 0;
   FUNC_4(VAR_17->restriction);
   VAR_17->restriction = ((void*)0);
   FUNC_4(VAR_17->transaction);
   VAR_17->transaction = ((void*)0);
  } else {
   VAR_19 = VAR_17->transaction +
    (VAR_1 * (VAR_5 - 1));
   FUNC_5(VAR_19, &VAR_12[0], VAR_18);
   VAR_19 = VAR_17->transaction +
    (VAR_2 * (VAR_5 - 1));
   FUNC_5(VAR_19, &VAR_13[0], VAR_18);
   VAR_19 = VAR_17->transaction +
    (VAR_3 * (VAR_5 - 1));
   FUNC_5(VAR_19, &VAR_14[0], VAR_18);
   VAR_19 = VAR_17->transaction +
    (VAR_4 * (VAR_5 - 1));
   FUNC_5(VAR_19, &VAR_15[0], VAR_18);
   VAR_18 = sizeof(struct iwl_tt_restriction) *
    VAR_5;
   FUNC_5(VAR_17->restriction,
    &VAR_11[0], VAR_18);
   VAR_16->thermal_throttle.advanced_tt = 1;
  }
 } else {
  FUNC_1(VAR_16, "Legacy Thermal Throttling\n");
  VAR_16->thermal_throttle.advanced_tt = 0;
 }
}
