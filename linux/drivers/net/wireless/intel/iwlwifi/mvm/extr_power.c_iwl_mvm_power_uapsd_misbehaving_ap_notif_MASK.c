
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_uapsd_misbehaving_ap_notif {int sta_id; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct iwl_rx_packet* FUNC_2 (struct iwl_rx_cmd_buffer*) ;

void FUNC_3(struct iwl_mvm *VAR_2,
           struct iwl_rx_cmd_buffer *VAR_3)
{
 struct iwl_rx_packet *VAR_4 = FUNC_2(VAR_3);
 struct iwl_uapsd_misbehaving_ap_notif *VAR_5 = (void *)VAR_4->data;
 u8 VAR_6 = FUNC_1(VAR_5->sta_id);

 FUNC_0(
  VAR_2->hw, VAR_0,
  VAR_1, &VAR_6);
}
