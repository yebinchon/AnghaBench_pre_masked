
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_tt_mgmt {scalar_t__ tt_previous_temp; int state; scalar_t__ tt_power_mode; int ct_kill_waiting_tm; } ;
struct iwl_priv {int mutex; int status; struct iwl_tt_mgmt thermal_throttle; } ;
typedef scalar_t__ s32 ;
typedef enum iwl_tt_state { ____Placeholder_iwl_tt_state } iwl_tt_state ;


 int FUNC_0 (struct iwl_priv*,char*,scalar_t__) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;



 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct iwl_priv*,int) ;
 scalar_t__ FUNC_5 (struct iwl_priv*,int) ;
 int FUNC_6 (struct iwl_priv*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct iwl_priv *VAR_9, s32 VAR_10, bool VAR_11)
{
 struct iwl_tt_mgmt *VAR_12 = &VAR_9->thermal_throttle;
 enum iwl_tt_state VAR_13;
 VAR_13 = VAR_12->state;

 if (VAR_10 >= VAR_0)
  VAR_12->state = VAR_6;
 else if (VAR_10 >= VAR_5)
  VAR_12->state = 128;
 else if (VAR_10 >= VAR_4)
  VAR_12->state = 129;
 else
  VAR_12->state = 130;





 FUNC_3(&VAR_9->thermal_throttle.ct_kill_waiting_tm);
 if (VAR_12->state != VAR_13) {
  switch (VAR_12->state) {
  case 130:





   break;
  case 129:
   VAR_12->tt_power_mode = VAR_1;
   break;
  case 128:
   VAR_12->tt_power_mode = VAR_2;
   break;
  default:
   VAR_12->tt_power_mode = VAR_3;
   break;
  }
  FUNC_7(&VAR_9->mutex);
  if (VAR_13 == VAR_6)
   FUNC_2(VAR_8, &VAR_9->status);
  if (VAR_12->state != VAR_6 &&
      FUNC_5(VAR_9, 1)) {



   if (VAR_13 == VAR_6)
    FUNC_9(VAR_8, &VAR_9->status);
   VAR_12->state = VAR_13;
   FUNC_1(VAR_9, "Cannot update power mode, "
     "TT state not updated\n");
  } else {
   if (VAR_12->state == VAR_6) {
    if (VAR_11) {
     FUNC_9(VAR_8, &VAR_9->status);
     FUNC_4(VAR_9, 1);
    } else {
     FUNC_6(VAR_9);
     VAR_12->state = VAR_13;
    }
   } else if (VAR_13 == VAR_6) {
    FUNC_4(VAR_9, 0);
   }
   FUNC_0(VAR_9, "Temperature state changed %u\n",
     VAR_12->state);
   FUNC_0(VAR_9, "Power Index change to %u\n",
     VAR_12->tt_power_mode);
  }
  FUNC_8(&VAR_9->mutex);
 }
}
