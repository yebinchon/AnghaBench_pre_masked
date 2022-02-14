
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_card_state_notif {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,char*,char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct iwl_rx_packet* FUNC_2 (struct iwl_rx_cmd_buffer*) ;

void FUNC_3(struct iwl_mvm *VAR_3,
     struct iwl_rx_cmd_buffer *VAR_4)
{
 struct iwl_rx_packet *VAR_5 = FUNC_2(VAR_4);
 struct iwl_card_state_notif *VAR_6 = (void *)VAR_5->data;
 u32 VAR_7 = FUNC_1(VAR_6->flags);

 FUNC_0(VAR_3, "Card state received: HW:%s SW:%s CT:%s\n",
     (VAR_7 & VAR_1) ? "Kill" : "On",
     (VAR_7 & VAR_2) ? "Kill" : "On",
     (VAR_7 & VAR_0) ?
     "Reached" : "Not reached");
}
