
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int hw; } ;
struct iwl_mu_group_mgmt_notif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct iwl_mu_group_mgmt_notif*) ;
 int VAR_1 ;
 struct iwl_rx_packet* FUNC_1 (struct iwl_rx_cmd_buffer*) ;

void FUNC_2(struct iwl_mvm *VAR_2,
          struct iwl_rx_cmd_buffer *VAR_3)
{
 struct iwl_rx_packet *VAR_4 = FUNC_1(VAR_3);
 struct iwl_mu_group_mgmt_notif *VAR_5 = (void *)VAR_4->data;

 FUNC_0(
   VAR_2->hw, VAR_0,
   VAR_1, VAR_5);
}
