
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sleep_cmd; int sleep_cmd_next; } ;
struct TYPE_3__ {scalar_t__ state; } ;
struct iwl_priv {TYPE_2__ power_data; TYPE_1__ chain_noise_data; int status; int mutex; } ;
struct iwl_powertable_cmd {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*,scalar_t__) ;
 int FUNC_2 (struct iwl_priv*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct iwl_priv*,int) ;
 int FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (struct iwl_priv*,struct iwl_powertable_cmd*) ;
 int FUNC_6 (struct iwl_priv*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct iwl_powertable_cmd*,int) ;
 int FUNC_9 (int *,struct iwl_powertable_cmd*,int) ;
 scalar_t__ FUNC_10 (int ,int *) ;

int FUNC_11(struct iwl_priv *VAR_5, struct iwl_powertable_cmd *VAR_6,
         bool VAR_7)
{
 int VAR_8;
 bool VAR_9;

 FUNC_7(&VAR_5->mutex);


 VAR_9 = VAR_5->chain_noise_data.state == VAR_2 ||
   VAR_5->chain_noise_data.state == VAR_1;

 if (!FUNC_8(&VAR_5->power_data.sleep_cmd, VAR_6, sizeof(*VAR_6)) && !VAR_7)
  return 0;

 if (!FUNC_4(VAR_5))
  return -VAR_0;


 FUNC_9(&VAR_5->power_data.sleep_cmd_next, VAR_6, sizeof(*VAR_6));
 if (FUNC_10(VAR_4, &VAR_5->status) && !VAR_7) {
  FUNC_0(VAR_5, "Defer power set mode while scanning\n");
  return 0;
 }

 if (VAR_6->flags & VAR_3)
  FUNC_3(VAR_5, 1);

 VAR_8 = FUNC_5(VAR_5, VAR_6);
 if (!VAR_8) {
  if (!(VAR_6->flags & VAR_3))
   FUNC_3(VAR_5, 0);

  if (VAR_9)
   FUNC_6(VAR_5);
  else
   FUNC_1(VAR_5,
     "Cannot update the power, chain noise "
     "calibration running: %d\n",
     VAR_5->chain_noise_data.state);

  FUNC_9(&VAR_5->power_data.sleep_cmd, VAR_6, sizeof(*VAR_6));
 } else
  FUNC_2(VAR_5, "set power fail, ret = %d\n", VAR_8);

 return VAR_8;
}
