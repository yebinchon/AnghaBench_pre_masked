
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ct_kill_waiting_tm; } ;
struct iwl_priv {TYPE_1__ thermal_throttle; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct iwl_priv *VAR_2)
{
 FUNC_0(VAR_2, "Prepare to enter IWL_TI_CT_KILL\n");

 FUNC_1(VAR_2, 0, 0);

 FUNC_2(&VAR_2->thermal_throttle.ct_kill_waiting_tm,
   VAR_1 + FUNC_3(VAR_0));
}
