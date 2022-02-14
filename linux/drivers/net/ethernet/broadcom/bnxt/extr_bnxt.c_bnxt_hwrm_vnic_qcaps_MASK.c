
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrm_vnic_qcaps_output {int max_aggs_supported; int flags; } ;
struct hwrm_vnic_qcaps_input {int member_0; } ;
struct ctx_hw_stats_ext {int dummy; } ;
struct ctx_hw_stats {int dummy; } ;
struct bnxt {int hw_ring_stats_size; int flags; int hwrm_spec_code; int hwrm_cmd_lock; int max_tpa_v2; struct hwrm_vnic_qcaps_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bnxt*,struct hwrm_vnic_qcaps_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_vnic_qcaps_input*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct bnxt *VAR_7)
{
 struct hwrm_vnic_qcaps_output *VAR_8 = VAR_7->hwrm_cmd_resp_addr;
 struct hwrm_vnic_qcaps_input VAR_9 = {0};
 int VAR_10;

 VAR_7->hw_ring_stats_size = sizeof(struct ctx_hw_stats);
 VAR_7->flags &= ~(VAR_1 | VAR_2);
 if (VAR_7->hwrm_spec_code < 0x10600)
  return 0;

 FUNC_1(VAR_7, &VAR_9, VAR_4, -1, -1);
 FUNC_4(&VAR_7->hwrm_cmd_lock);
 VAR_10 = FUNC_0(VAR_7, &VAR_9, sizeof(VAR_9), VAR_3);
 if (!VAR_10) {
  u32 VAR_11 = FUNC_3(VAR_8->flags);

  if (!(VAR_7->flags & VAR_0) &&
      (VAR_11 & VAR_6))
   VAR_7->flags |= VAR_1;
  if (VAR_11 &
      VAR_5)
   VAR_7->flags |= VAR_2;
  VAR_7->max_tpa_v2 = FUNC_2(VAR_8->max_aggs_supported);
  if (VAR_7->max_tpa_v2)
   VAR_7->hw_ring_stats_size =
    sizeof(struct ctx_hw_stats_ext);
 }
 FUNC_5(&VAR_7->hwrm_cmd_lock);
 return VAR_10;
}
