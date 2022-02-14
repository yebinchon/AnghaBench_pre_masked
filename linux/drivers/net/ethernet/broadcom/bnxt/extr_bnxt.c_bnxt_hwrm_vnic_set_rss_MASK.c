
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t u16 ;
struct hwrm_vnic_rss_cfg_input {void* rss_ctx_idx; void* hash_key_tbl_addr; void* ring_grp_tbl_addr; int hash_mode_flags; int hash_type; int member_0; } ;
struct bnxt_vnic_info {scalar_t__* fw_rss_cos_lb_ctx; int flags; scalar_t__* fw_grp_ids; int rss_hash_key_dma_addr; int rss_table_dma_addr; void** rss_table; } ;
struct bnxt {int flags; size_t rx_nr_rings; int rss_hash_cfg; struct bnxt_vnic_info* vnic_info; } ;
typedef int req ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bnxt*,struct hwrm_vnic_rss_cfg_input*,int ,int,int) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct bnxt*,struct hwrm_vnic_rss_cfg_input*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct bnxt *VAR_7, u16 VAR_8, bool VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;
 struct bnxt_vnic_info *VAR_13 = &VAR_7->vnic_info[VAR_8];
 struct hwrm_vnic_rss_cfg_input VAR_14 = {0};

 if ((VAR_7->flags & VAR_0) ||
     VAR_13->fw_rss_cos_lb_ctx[0] == VAR_5)
  return 0;

 FUNC_1(VAR_7, &VAR_14, VAR_3, -1, -1);
 if (VAR_9) {
  VAR_14.hash_type = FUNC_3(VAR_7->rss_hash_cfg);
  VAR_14.hash_mode_flags = VAR_6;
  if (VAR_13->flags & VAR_1) {
   if (FUNC_0(VAR_7))
    VAR_12 = VAR_7->rx_nr_rings - 1;
   else
    VAR_12 = VAR_7->rx_nr_rings;
  } else {
   VAR_12 = 1;
  }


  for (VAR_10 = 0, VAR_11 = 0; VAR_10 < VAR_4; VAR_10++, VAR_11++) {
   if (VAR_11 == VAR_12)
    VAR_11 = 0;
   VAR_13->rss_table[VAR_10] = FUNC_2(VAR_13->fw_grp_ids[VAR_11]);
  }

  VAR_14.ring_grp_tbl_addr = FUNC_4(VAR_13->rss_table_dma_addr);
  VAR_14.hash_key_tbl_addr =
   FUNC_4(VAR_13->rss_hash_key_dma_addr);
 }
 VAR_14.rss_ctx_idx = FUNC_2(VAR_13->fw_rss_cos_lb_ctx[0]);
 return FUNC_5(VAR_7, &VAR_14, sizeof(VAR_14), VAR_2);
}
