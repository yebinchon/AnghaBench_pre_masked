
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int last_bt_notif; } ;
struct iwl_bt_coex_profile_notif {int bt_activity_grading; int secondary_ch_lut; int primary_ch_lut; int bt_ci_compliance; } ;


 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct iwl_bt_coex_profile_notif*,int) ;
 struct iwl_rx_packet* FUNC_4 (struct iwl_rx_cmd_buffer*) ;

void FUNC_5(struct iwl_mvm *VAR_0,
         struct iwl_rx_cmd_buffer *VAR_1)
{
 struct iwl_rx_packet *VAR_2 = FUNC_4(VAR_1);
 struct iwl_bt_coex_profile_notif *VAR_3 = (void *)VAR_2->data;

 FUNC_0(VAR_0, "BT Coex Notification received\n");
 FUNC_0(VAR_0, "\tBT ci compliance %d\n", VAR_3->bt_ci_compliance);
 FUNC_0(VAR_0, "\tBT primary_ch_lut %d\n",
         FUNC_2(VAR_3->primary_ch_lut));
 FUNC_0(VAR_0, "\tBT secondary_ch_lut %d\n",
         FUNC_2(VAR_3->secondary_ch_lut));
 FUNC_0(VAR_0, "\tBT activity grading %d\n",
         FUNC_2(VAR_3->bt_activity_grading));


 FUNC_3(&VAR_0->last_bt_notif, VAR_3, sizeof(VAR_0->last_bt_notif));

 FUNC_1(VAR_0);
}
