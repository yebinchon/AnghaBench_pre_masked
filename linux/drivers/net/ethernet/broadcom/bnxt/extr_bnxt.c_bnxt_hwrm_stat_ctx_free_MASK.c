
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_stat_ctx_free_input {int stat_ctx_id; int member_0; } ;
struct bnxt_cp_ring_info {scalar_t__ hw_stats_ctx_id; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {int cp_nr_rings; int hwrm_cmd_lock; struct bnxt_napi** bnapi; } ;
typedef int req ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bnxt*,struct hwrm_stat_ctx_free_input*,int,int ) ;
 int FUNC_2 (struct bnxt*,struct hwrm_stat_ctx_free_input*,int ,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct bnxt *VAR_3)
{
 int VAR_4 = 0, VAR_5;
 struct hwrm_stat_ctx_free_input VAR_6 = {0};

 if (!VAR_3->bnapi)
  return 0;

 if (FUNC_0(VAR_3))
  return 0;

 FUNC_2(VAR_3, &VAR_6, VAR_1, -1, -1);

 FUNC_4(&VAR_3->hwrm_cmd_lock);
 for (VAR_5 = 0; VAR_5 < VAR_3->cp_nr_rings; VAR_5++) {
  struct bnxt_napi *VAR_7 = VAR_3->bnapi[VAR_5];
  struct bnxt_cp_ring_info *VAR_8 = &VAR_7->cp_ring;

  if (VAR_8->hw_stats_ctx_id != VAR_2) {
   VAR_6.stat_ctx_id = FUNC_3(VAR_8->hw_stats_ctx_id);

   VAR_4 = FUNC_1(VAR_3, &VAR_6, sizeof(VAR_6),
      VAR_0);

   VAR_8->hw_stats_ctx_id = VAR_2;
  }
 }
 FUNC_5(&VAR_3->hwrm_cmd_lock);
 return VAR_4;
}
