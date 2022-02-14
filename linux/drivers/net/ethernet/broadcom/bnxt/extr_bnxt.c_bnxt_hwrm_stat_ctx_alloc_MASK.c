
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwrm_stat_ctx_alloc_output {int stat_ctx_id; } ;
struct hwrm_stat_ctx_alloc_input {int stats_dma_addr; int update_period_ms; int stats_dma_length; int member_0; } ;
struct bnxt_cp_ring_info {int hw_stats_ctx_id; int hw_stats_map; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int stats_coal_ticks; int cp_nr_rings; int hwrm_cmd_lock; TYPE_1__* grp_info; struct bnxt_napi** bnapi; int hw_ring_stats_size; struct hwrm_stat_ctx_alloc_output* hwrm_cmd_resp_addr; } ;
typedef int req ;
struct TYPE_2__ {int fw_stats_ctx; } ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnxt*,struct hwrm_stat_ctx_alloc_input*,int,int ) ;
 int FUNC_2 (struct bnxt*,struct hwrm_stat_ctx_alloc_input*,int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct bnxt *VAR_2)
{
 int VAR_3 = 0, VAR_4;
 struct hwrm_stat_ctx_alloc_input VAR_5 = {0};
 struct hwrm_stat_ctx_alloc_output *VAR_6 = VAR_2->hwrm_cmd_resp_addr;

 if (FUNC_0(VAR_2))
  return 0;

 FUNC_2(VAR_2, &VAR_5, VAR_1, -1, -1);

 VAR_5.stats_dma_length = FUNC_3(VAR_2->hw_ring_stats_size);
 VAR_5.update_period_ms = FUNC_4(VAR_2->stats_coal_ticks / 1000);

 FUNC_7(&VAR_2->hwrm_cmd_lock);
 for (VAR_4 = 0; VAR_4 < VAR_2->cp_nr_rings; VAR_4++) {
  struct bnxt_napi *VAR_7 = VAR_2->bnapi[VAR_4];
  struct bnxt_cp_ring_info *VAR_8 = &VAR_7->cp_ring;

  VAR_5.stats_dma_addr = FUNC_5(VAR_8->hw_stats_map);

  VAR_3 = FUNC_1(VAR_2, &VAR_5, sizeof(VAR_5),
     VAR_0);
  if (VAR_3)
   break;

  VAR_8->hw_stats_ctx_id = FUNC_6(VAR_6->stat_ctx_id);

  VAR_2->grp_info[VAR_4].fw_stats_ctx = VAR_8->hw_stats_ctx_id;
 }
 FUNC_8(&VAR_2->hwrm_cmd_lock);
 return VAR_3;
}
