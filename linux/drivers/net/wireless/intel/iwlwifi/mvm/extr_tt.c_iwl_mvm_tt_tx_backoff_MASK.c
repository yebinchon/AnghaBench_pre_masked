
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tx_backoff; int min_backoff; } ;
struct iwl_mvm {TYPE_1__ thermal_throttle; } ;
struct iwl_host_cmd {int data; int len; int id; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct iwl_mvm*,struct iwl_host_cmd*) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct iwl_mvm *VAR_1, u32 VAR_2)
{
 struct iwl_host_cmd VAR_3 = {
  .id = VAR_0,
  .len = sizeof(u32), 
  .data = VAR_2, 
 };

 VAR_2 = FUNC_3(VAR_2, VAR_1->thermal_throttle.min_backoff);

 if (FUNC_2(VAR_1, &VAR_3) == 0) {
  FUNC_0(VAR_1, "Set Thermal Tx backoff to: %u\n",
          VAR_2);
  VAR_1->thermal_throttle.tx_backoff = VAR_2;
 } else {
  FUNC_1(VAR_1, "Failed to change Thermal Tx backoff\n");
 }
}
