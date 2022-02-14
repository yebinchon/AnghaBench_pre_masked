
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
typedef size_t u16 ;
struct hwrm_vnic_rss_cfg_input {size_t ring_table_pair_index; void* rss_ctx_idx; void* hash_key_tbl_addr; void* ring_grp_tbl_addr; int hash_mode_flags; int hash_type; void* vnic_id; int member_0; } ;
struct bnxt_vnic_info {size_t fw_vnic_id; size_t* fw_rss_cos_lb_ctx; int * rss_table; int rss_hash_key_dma_addr; int rss_table_dma_addr; } ;
struct TYPE_2__ {size_t fw_ring_id; } ;
struct bnxt_rx_ring_info {TYPE_1__ rx_ring_struct; } ;
struct bnxt {size_t rx_nr_rings; struct bnxt_rx_ring_info* rx_ring; int rss_hash_cfg; struct bnxt_vnic_info* vnic_info; } ;
typedef int req ;
typedef int __le16 ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (struct bnxt*,struct bnxt_rx_ring_info*) ;
 int FUNC_2 (struct bnxt*,struct hwrm_vnic_rss_cfg_input*,int ,int,int) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct bnxt*,struct hwrm_vnic_rss_cfg_input*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct bnxt *VAR_3, u16 VAR_4, bool VAR_5)
{
 struct bnxt_vnic_info *VAR_6 = &VAR_3->vnic_info[VAR_4];
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = VAR_3->rx_nr_rings;
 struct bnxt_rx_ring_info *VAR_12 = &VAR_3->rx_ring[0];
 struct hwrm_vnic_rss_cfg_input VAR_13 = {0};

 FUNC_2(VAR_3, &VAR_13, VAR_1, -1, -1);
 VAR_13.vnic_id = FUNC_3(VAR_6->fw_vnic_id);
 if (!VAR_5) {
  FUNC_6(VAR_3, &VAR_13, sizeof(VAR_13), VAR_0);
  return 0;
 }
 VAR_13.hash_type = FUNC_4(VAR_3->rss_hash_cfg);
 VAR_13.hash_mode_flags = VAR_2;
 VAR_13.ring_grp_tbl_addr = FUNC_5(VAR_6->rss_table_dma_addr);
 VAR_13.hash_key_tbl_addr = FUNC_5(VAR_6->rss_hash_key_dma_addr);
 VAR_10 = FUNC_0(VAR_3->rx_nr_rings, 64);
 for (VAR_7 = 0, VAR_9 = 0; VAR_7 < VAR_10; VAR_7++) {
  __le16 *VAR_14 = VAR_6->rss_table;
  int VAR_15;

  VAR_13.ring_table_pair_index = VAR_7;
  VAR_13.rss_ctx_idx = FUNC_3(VAR_6->fw_rss_cos_lb_ctx[VAR_7]);
  for (VAR_8 = 0; VAR_8 < 64; VAR_8++) {
   u16 VAR_16;

   VAR_16 = VAR_12->rx_ring_struct.fw_ring_id;
   *VAR_14++ = FUNC_3(VAR_16);
   VAR_16 = FUNC_1(VAR_3, VAR_12);
   *VAR_14++ = FUNC_3(VAR_16);
   VAR_12++;
   VAR_9++;
   if (VAR_9 == VAR_11) {
    VAR_9 = 0;
    VAR_12 = &VAR_3->rx_ring[0];
   }
  }
  VAR_15 = FUNC_6(VAR_3, &VAR_13, sizeof(VAR_13), VAR_0);
  if (VAR_15)
   return VAR_15;
 }
 return 0;
}
