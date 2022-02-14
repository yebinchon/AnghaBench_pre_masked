
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct ct_kill_notif {int temperature; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_rx_packet*) ;
 struct iwl_rx_packet* FUNC_5 (struct iwl_rx_cmd_buffer*) ;

void FUNC_6(struct iwl_mvm *VAR_0, struct iwl_rx_cmd_buffer *VAR_1)
{
 struct iwl_rx_packet *VAR_2 = FUNC_5(VAR_1);
 struct ct_kill_notif *VAR_3;
 int VAR_4 = FUNC_4(VAR_2);

 if (FUNC_2(VAR_4 != sizeof(*VAR_3))) {
  FUNC_1(VAR_0, "Invalid CT_KILL_NOTIFICATION\n");
  return;
 }

 VAR_3 = (struct ct_kill_notif *)VAR_2->data;
 FUNC_0(VAR_0, "CT Kill notification temperature = %d\n",
         VAR_3->temperature);

 FUNC_3(VAR_0);
}
