
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sleep_cmd; int sleep_cmd_next; } ;
struct TYPE_5__ {scalar_t__ state; } ;
struct il_priv {TYPE_3__ power_data; TYPE_2__ chain_noise_data; TYPE_1__* ops; int status; int mutex; } ;
struct il_powertable_cmd {int flags; } ;
struct TYPE_4__ {int (* update_chain_flags ) (struct il_priv*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (struct il_priv*,struct il_powertable_cmd*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct il_powertable_cmd*,int) ;
 int FUNC_8 (int *,struct il_powertable_cmd*,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct il_priv*) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static int
FUNC_12(struct il_priv *VAR_6, struct il_powertable_cmd *VAR_7, bool VAR_8)
{
 int VAR_9;
 bool VAR_10;

 FUNC_6(&VAR_6->mutex);


 VAR_10 = VAR_6->chain_noise_data.state == VAR_2 ||
     VAR_6->chain_noise_data.state == VAR_1;

 if (!FUNC_7(&VAR_6->power_data.sleep_cmd, VAR_7, sizeof(*VAR_7)) && !VAR_8)
  return 0;

 if (!FUNC_4(VAR_6))
  return -VAR_0;


 FUNC_8(&VAR_6->power_data.sleep_cmd_next, VAR_7, sizeof(*VAR_7));
 if (FUNC_11(VAR_5, &VAR_6->status) && !VAR_8) {
  FUNC_0("Defer power set mode while scanning\n");
  return 0;
 }

 if (VAR_7->flags & VAR_3)
  FUNC_9(VAR_4, &VAR_6->status);

 VAR_9 = FUNC_5(VAR_6, VAR_7);
 if (!VAR_9) {
  if (!(VAR_7->flags & VAR_3))
   FUNC_3(VAR_4, &VAR_6->status);

  if (VAR_6->ops->update_chain_flags && VAR_10)
   VAR_6->ops->update_chain_flags(VAR_6);
  else if (VAR_6->ops->update_chain_flags)
   FUNC_1("Cannot update the power, chain noise "
    "calibration running: %d\n",
    VAR_6->chain_noise_data.state);

  FUNC_8(&VAR_6->power_data.sleep_cmd, VAR_7, sizeof(*VAR_7));
 } else
  FUNC_2("set power fail, ret = %d", VAR_9);

 return VAR_9;
}
