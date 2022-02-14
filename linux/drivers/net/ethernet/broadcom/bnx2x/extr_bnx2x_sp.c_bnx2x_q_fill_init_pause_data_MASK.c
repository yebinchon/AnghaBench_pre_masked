
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxq_pause_params {int pri_map; int sge_th_hi; int sge_th_lo; int bd_th_hi; int bd_th_lo; int rcq_th_hi; int rcq_th_lo; } ;
struct client_init_rx_data {void* rx_cos_mask; void* sge_pause_thr_high; void* sge_pause_thr_low; void* bd_pause_thr_high; void* bd_pause_thr_low; void* cqe_pause_thr_high; void* cqe_pause_thr_low; } ;
struct bnx2x_queue_sp_obj {int dummy; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct bnx2x_queue_sp_obj *VAR_0,
    struct rxq_pause_params *VAR_1,
    struct client_init_rx_data *VAR_2)
{

 VAR_2->cqe_pause_thr_low = FUNC_0(VAR_1->rcq_th_lo);
 VAR_2->cqe_pause_thr_high = FUNC_0(VAR_1->rcq_th_hi);
 VAR_2->bd_pause_thr_low = FUNC_0(VAR_1->bd_th_lo);
 VAR_2->bd_pause_thr_high = FUNC_0(VAR_1->bd_th_hi);
 VAR_2->sge_pause_thr_low = FUNC_0(VAR_1->sge_th_lo);
 VAR_2->sge_pause_thr_high = FUNC_0(VAR_1->sge_th_hi);
 VAR_2->rx_cos_mask = FUNC_0(VAR_1->pri_map);
}
