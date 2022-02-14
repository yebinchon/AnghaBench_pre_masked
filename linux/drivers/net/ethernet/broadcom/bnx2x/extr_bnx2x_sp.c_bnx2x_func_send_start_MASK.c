
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int val; } ;
struct function_start_data {int sd_accept_mf_clss_fail_match_ethtype; int c2s_pri_default; TYPE_2__ c2s_pri_trans_table; scalar_t__ c2s_pri_tt_valid; int no_added_tags; void* sd_vlan_eth_type; int sd_vlan_force_pri_val; int sd_vlan_force_pri_flg; void* sd_accept_mf_clss_fail_ethtype; int sd_accept_mf_clss_fail; int inner_rss; int inner_clss_vxlan; int inner_clss_l2geneve; int inner_clss_l2gre; void* geneve_dst_port; void* vxlan_dst_port; int dmae_cmd_id; int network_cos_mode; int path_id; void* sd_vlan_tag; scalar_t__ function_mode; } ;
struct bnx2x_func_start_params {int sd_vlan_tag; int vxlan_dst_port; int geneve_dst_port; int class_fail_ethtype; int sd_vlan_eth_type; int c2s_pri_default; int c2s_pri; scalar_t__ c2s_pri_valid; int no_added_tags; int sd_vlan_force_pri_val; int sd_vlan_force_pri; int class_fail; int inner_rss; int inner_clss_vxlan; int inner_clss_l2geneve; int inner_clss_l2gre; int network_cos_mode; scalar_t__ mf_mode; } ;
struct TYPE_3__ {struct bnx2x_func_start_params start; } ;
struct bnx2x_func_state_params {TYPE_1__ params; struct bnx2x_func_sp_obj* f_obj; } ;
struct bnx2x_func_sp_obj {int rdata_mapping; scalar_t__ rdata; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnx2x*,int ,int ,int ,int ,int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct function_start_data*,int ,int) ;

__attribute__((used)) static inline int FUNC_7(struct bnx2x *VAR_4,
     struct bnx2x_func_state_params *VAR_5)
{
 struct bnx2x_func_sp_obj *VAR_6 = VAR_5->f_obj;
 struct function_start_data *VAR_7 =
  (struct function_start_data *)VAR_6->rdata;
 dma_addr_t VAR_8 = VAR_6->rdata_mapping;
 struct bnx2x_func_start_params *VAR_9 = &VAR_5->params.start;

 FUNC_6(VAR_7, 0, sizeof(*VAR_7));


 VAR_7->function_mode = (u8)VAR_9->mf_mode;
 VAR_7->sd_vlan_tag = FUNC_4(VAR_9->sd_vlan_tag);
 VAR_7->path_id = FUNC_0(VAR_4);
 VAR_7->network_cos_mode = VAR_9->network_cos_mode;
 VAR_7->dmae_cmd_id = VAR_0;

 VAR_7->vxlan_dst_port = FUNC_4(VAR_9->vxlan_dst_port);
 VAR_7->geneve_dst_port = FUNC_4(VAR_9->geneve_dst_port);
 VAR_7->inner_clss_l2gre = VAR_9->inner_clss_l2gre;
 VAR_7->inner_clss_l2geneve = VAR_9->inner_clss_l2geneve;
 VAR_7->inner_clss_vxlan = VAR_9->inner_clss_vxlan;
 VAR_7->inner_rss = VAR_9->inner_rss;

 VAR_7->sd_accept_mf_clss_fail = VAR_9->class_fail;
 if (VAR_9->class_fail_ethtype) {
  VAR_7->sd_accept_mf_clss_fail_match_ethtype = 1;
  VAR_7->sd_accept_mf_clss_fail_ethtype =
   FUNC_4(VAR_9->class_fail_ethtype);
 }

 VAR_7->sd_vlan_force_pri_flg = VAR_9->sd_vlan_force_pri;
 VAR_7->sd_vlan_force_pri_val = VAR_9->sd_vlan_force_pri_val;
 if (VAR_9->sd_vlan_eth_type)
  VAR_7->sd_vlan_eth_type =
   FUNC_4(VAR_9->sd_vlan_eth_type);
 else
  VAR_7->sd_vlan_eth_type =
   FUNC_4(0x8100);

 VAR_7->no_added_tags = VAR_9->no_added_tags;

 VAR_7->c2s_pri_tt_valid = VAR_9->c2s_pri_valid;
 if (VAR_7->c2s_pri_tt_valid) {
  FUNC_5(VAR_7->c2s_pri_trans_table.val,
         VAR_9->c2s_pri,
         VAR_1);
  VAR_7->c2s_pri_default = VAR_9->c2s_pri_default;
 }







 return FUNC_3(VAR_4, VAR_3, 0,
        FUNC_1(VAR_8),
        FUNC_2(VAR_8), VAR_2);
}
