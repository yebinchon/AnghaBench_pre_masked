
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iwl_mvm {TYPE_1__* fw; } ;
struct iwl_mac_low_latency_cmd {int low_latency_rx; int low_latency_tx; int mac_id; } ;
typedef int cmd ;
struct TYPE_2__ {int ucode_capa; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*,int ,int ,int,struct iwl_mac_low_latency_cmd*) ;

void FUNC_5(struct iwl_mvm *VAR_3,
      bool VAR_4, u16 VAR_5)
{
 struct iwl_mac_low_latency_cmd VAR_6 = {
  .mac_id = FUNC_1(VAR_5)
 };

 if (!FUNC_2(&VAR_3->fw->ucode_capa,
    VAR_0))
  return;

 if (VAR_4) {

  VAR_6.low_latency_rx = 1;
  VAR_6.low_latency_tx = 1;
 }

 if (FUNC_4(VAR_3, FUNC_3(VAR_1,
       VAR_2, 0),
     0, sizeof(VAR_6), &VAR_6))
  FUNC_0(VAR_3, "Failed to send low latency command\n");
}
