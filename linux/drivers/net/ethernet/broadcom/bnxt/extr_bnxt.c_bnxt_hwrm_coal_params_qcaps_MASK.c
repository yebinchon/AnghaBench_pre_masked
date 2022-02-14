
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_ring_aggint_qcaps_output {int timer_units; int num_cmpl_aggr_int_max; int int_lat_tmr_max_max; int int_lat_tmr_min_max; int cmpl_aggr_dma_tmr_during_int_max; int cmpl_aggr_dma_tmr_max; int num_cmpl_dma_aggr_during_int_max; int num_cmpl_dma_aggr_max; int nq_params; int cmpl_params; } ;
struct hwrm_ring_aggint_qcaps_input {int member_0; } ;
struct bnxt_coal_cap {int num_cmpl_dma_aggr_max; int num_cmpl_dma_aggr_during_int_max; int cmpl_aggr_dma_tmr_max; int cmpl_aggr_dma_tmr_during_int_max; int int_lat_tmr_min_max; int int_lat_tmr_max_max; int num_cmpl_aggr_int_max; int timer_units; void* nq_params; void* cmpl_params; } ;
struct bnxt {int hwrm_spec_code; int hwrm_cmd_lock; struct bnxt_coal_cap coal_cap; struct hwrm_ring_aggint_qcaps_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnxt*,struct hwrm_ring_aggint_qcaps_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_ring_aggint_qcaps_input*,int ,int,int) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct bnxt *VAR_3)
{
 struct hwrm_ring_aggint_qcaps_output *VAR_4 = VAR_3->hwrm_cmd_resp_addr;
 struct bnxt_coal_cap *VAR_5 = &VAR_3->coal_cap;
 struct hwrm_ring_aggint_qcaps_input VAR_6 = {0};
 int VAR_7;

 VAR_5->cmpl_params = VAR_0;
 VAR_5->num_cmpl_dma_aggr_max = 63;
 VAR_5->num_cmpl_dma_aggr_during_int_max = 63;
 VAR_5->cmpl_aggr_dma_tmr_max = 65535;
 VAR_5->cmpl_aggr_dma_tmr_during_int_max = 65535;
 VAR_5->int_lat_tmr_min_max = 65535;
 VAR_5->int_lat_tmr_max_max = 65535;
 VAR_5->num_cmpl_aggr_int_max = 65535;
 VAR_5->timer_units = 80;

 if (VAR_3->hwrm_spec_code < 0x10902)
  return;

 FUNC_1(VAR_3, &VAR_6, VAR_2, -1, -1);
 FUNC_4(&VAR_3->hwrm_cmd_lock);
 VAR_7 = FUNC_0(VAR_3, &VAR_6, sizeof(VAR_6), VAR_1);
 if (!VAR_7) {
  VAR_5->cmpl_params = FUNC_3(VAR_4->cmpl_params);
  VAR_5->nq_params = FUNC_3(VAR_4->nq_params);
  VAR_5->num_cmpl_dma_aggr_max =
   FUNC_2(VAR_4->num_cmpl_dma_aggr_max);
  VAR_5->num_cmpl_dma_aggr_during_int_max =
   FUNC_2(VAR_4->num_cmpl_dma_aggr_during_int_max);
  VAR_5->cmpl_aggr_dma_tmr_max =
   FUNC_2(VAR_4->cmpl_aggr_dma_tmr_max);
  VAR_5->cmpl_aggr_dma_tmr_during_int_max =
   FUNC_2(VAR_4->cmpl_aggr_dma_tmr_during_int_max);
  VAR_5->int_lat_tmr_min_max =
   FUNC_2(VAR_4->int_lat_tmr_min_max);
  VAR_5->int_lat_tmr_max_max =
   FUNC_2(VAR_4->int_lat_tmr_max_max);
  VAR_5->num_cmpl_aggr_int_max =
   FUNC_2(VAR_4->num_cmpl_aggr_int_max);
  VAR_5->timer_units = FUNC_2(VAR_4->timer_units);
 }
 FUNC_5(&VAR_3->hwrm_cmd_lock);
}
