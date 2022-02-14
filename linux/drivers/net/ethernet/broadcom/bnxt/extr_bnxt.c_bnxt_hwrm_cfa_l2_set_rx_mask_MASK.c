
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hwrm_cfa_l2_set_rx_mask_input {void* mask; int mc_tbl_addr; void* num_mc_entries; void* vnic_id; int member_0; } ;
struct bnxt_vnic_info {int rx_mask; int mc_list_mapping; int mc_list_count; int fw_vnic_id; } ;
struct bnxt {struct bnxt_vnic_info* vnic_info; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct hwrm_cfa_l2_set_rx_mask_input*,int ,int,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnxt*,struct hwrm_cfa_l2_set_rx_mask_input*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_2, u16 VAR_3)
{
 struct hwrm_cfa_l2_set_rx_mask_input VAR_4 = {0};
 struct bnxt_vnic_info *VAR_5 = &VAR_2->vnic_info[VAR_3];

 FUNC_0(VAR_2, &VAR_4, VAR_0, -1, -1);
 VAR_4.vnic_id = FUNC_1(VAR_5->fw_vnic_id);

 VAR_4.num_mc_entries = FUNC_1(VAR_5->mc_list_count);
 VAR_4.mc_tbl_addr = FUNC_2(VAR_5->mc_list_mapping);
 VAR_4.mask = FUNC_1(VAR_5->rx_mask);
 return FUNC_3(VAR_2, &VAR_4, sizeof(VAR_4), VAR_1);
}
