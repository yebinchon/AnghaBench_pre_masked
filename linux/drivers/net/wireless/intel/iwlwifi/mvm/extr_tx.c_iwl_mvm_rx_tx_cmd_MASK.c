
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm_tx_resp {int frame_count; } ;
struct iwl_mvm {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,struct iwl_rx_packet*) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_rx_packet*) ;
 struct iwl_rx_packet* FUNC_2 (struct iwl_rx_cmd_buffer*) ;

void FUNC_3(struct iwl_mvm *VAR_0, struct iwl_rx_cmd_buffer *VAR_1)
{
 struct iwl_rx_packet *VAR_2 = FUNC_2(VAR_1);
 struct iwl_mvm_tx_resp *VAR_3 = (void *)VAR_2->data;

 if (VAR_3->frame_count == 1)
  FUNC_1(VAR_0, VAR_2);
 else
  FUNC_0(VAR_0, VAR_2);
}
