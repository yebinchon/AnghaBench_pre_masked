
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hwrm_vnic_plcmodes_cfg_input {void* vnic_id; void* hds_threshold; void* jumbo_thresh; void* enables; void* flags; int member_0; } ;
struct bnxt_vnic_info {int fw_vnic_id; } ;
struct bnxt {int rx_copy_thresh; struct bnxt_vnic_info* vnic_info; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bnxt*,struct hwrm_vnic_plcmodes_cfg_input*,int ,int,int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct bnxt*,struct hwrm_vnic_plcmodes_cfg_input*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_7, u16 VAR_8)
{
 struct bnxt_vnic_info *VAR_9 = &VAR_7->vnic_info[VAR_8];
 struct hwrm_vnic_plcmodes_cfg_input VAR_10 = {0};

 FUNC_0(VAR_7, &VAR_10, VAR_1, -1, -1);
 VAR_10.flags = FUNC_2(VAR_6 |
    VAR_4 |
    VAR_5);
 VAR_10.enables =
  FUNC_2(VAR_3 |
       VAR_2);

 VAR_10.jumbo_thresh = FUNC_1(VAR_7->rx_copy_thresh);
 VAR_10.hds_threshold = FUNC_1(VAR_7->rx_copy_thresh);
 VAR_10.vnic_id = FUNC_2(VAR_9->fw_vnic_id);
 return FUNC_3(VAR_7, &VAR_10, sizeof(VAR_10), VAR_0);
}
