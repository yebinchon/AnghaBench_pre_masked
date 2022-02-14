
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client_update_ramrod_data {void* handle_ptp_pkts_change_flg; void* handle_ptp_pkts_flg; void* tx_switching_change_flg; void* tx_switching_flg; void* silent_vlan_mask; void* silent_vlan_value; void* silent_vlan_removal_flg; void* silent_vlan_change_flg; void* default_vlan_change_flg; void* default_vlan_enable_flg; void* activate_change_flg; void* activate_flg; void* anti_spoofing_change_flg; void* anti_spoofing_enable_flg; void* outer_vlan_removal_change_flg; void* outer_vlan_removal_enable_flg; void* inner_vlan_removal_change_flg; void* inner_vlan_removal_enable_flg; void* default_vlan; int func_id; int client_id; } ;
struct bnx2x_queue_update_params {int update_flags; int silent_removal_mask; int silent_removal_value; int def_vlan; } ;
struct bnx2x_queue_sp_obj {int func_id; int cl_id; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_16,
         struct bnx2x_queue_sp_obj *VAR_17,
         struct bnx2x_queue_update_params *VAR_18,
         struct client_update_ramrod_data *VAR_19)
{

 VAR_19->client_id = VAR_17->cl_id;


 VAR_19->func_id = VAR_17->func_id;


 VAR_19->default_vlan = FUNC_0(VAR_18->def_vlan);


 VAR_19->inner_vlan_removal_enable_flg =
  FUNC_1(VAR_6, &VAR_18->update_flags);
 VAR_19->inner_vlan_removal_change_flg =
  FUNC_1(VAR_7,
    &VAR_18->update_flags);


 VAR_19->outer_vlan_removal_enable_flg =
  FUNC_1(VAR_8, &VAR_18->update_flags);
 VAR_19->outer_vlan_removal_change_flg =
  FUNC_1(VAR_9,
    &VAR_18->update_flags);




 VAR_19->anti_spoofing_enable_flg =
  FUNC_1(VAR_2, &VAR_18->update_flags);
 VAR_19->anti_spoofing_change_flg =
  FUNC_1(VAR_3, &VAR_18->update_flags);


 VAR_19->activate_flg =
  FUNC_1(VAR_0, &VAR_18->update_flags);
 VAR_19->activate_change_flg =
  FUNC_1(VAR_1, &VAR_18->update_flags);


 VAR_19->default_vlan_enable_flg =
  FUNC_1(VAR_4, &VAR_18->update_flags);
 VAR_19->default_vlan_change_flg =
  FUNC_1(VAR_5,
    &VAR_18->update_flags);


 VAR_19->silent_vlan_change_flg =
  FUNC_1(VAR_13,
    &VAR_18->update_flags);
 VAR_19->silent_vlan_removal_flg =
  FUNC_1(VAR_12, &VAR_18->update_flags);
 VAR_19->silent_vlan_value = FUNC_0(VAR_18->silent_removal_value);
 VAR_19->silent_vlan_mask = FUNC_0(VAR_18->silent_removal_mask);


 VAR_19->tx_switching_flg =
  FUNC_1(VAR_14, &VAR_18->update_flags);
 VAR_19->tx_switching_change_flg =
  FUNC_1(VAR_15,
    &VAR_18->update_flags);


 VAR_19->handle_ptp_pkts_flg =
  FUNC_1(VAR_10, &VAR_18->update_flags);
 VAR_19->handle_ptp_pkts_change_flg =
  FUNC_1(VAR_11, &VAR_18->update_flags);
}
