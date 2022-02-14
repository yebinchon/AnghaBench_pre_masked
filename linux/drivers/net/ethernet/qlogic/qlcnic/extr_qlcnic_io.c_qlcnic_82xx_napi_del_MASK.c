
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_recv_context {struct qlcnic_host_sds_ring* sds_rings; } ;
struct qlcnic_host_tx_ring {int napi; } ;
struct qlcnic_host_sds_ring {int napi; } ;
struct qlcnic_adapter {int drv_sds_rings; int drv_tx_rings; struct qlcnic_host_tx_ring* tx_ring; TYPE_1__* ahw; struct qlcnic_recv_context* recv_ctx; } ;
struct TYPE_2__ {int diag_test; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_recv_context*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;

void FUNC_4(struct qlcnic_adapter *VAR_0)
{
 int VAR_1;
 struct qlcnic_host_sds_ring *VAR_2;
 struct qlcnic_recv_context *VAR_3 = VAR_0->recv_ctx;
 struct qlcnic_host_tx_ring *VAR_4;

 for (VAR_1 = 0; VAR_1 < VAR_0->drv_sds_rings; VAR_1++) {
  VAR_2 = &VAR_3->sds_rings[VAR_1];
  FUNC_0(&VAR_2->napi);
 }

 FUNC_2(VAR_0->recv_ctx);

 if (FUNC_1(VAR_0) && !VAR_0->ahw->diag_test) {
  for (VAR_1 = 0; VAR_1 < VAR_0->drv_tx_rings; VAR_1++) {
   VAR_4 = &VAR_0->tx_ring[VAR_1];
   FUNC_0(&VAR_4->napi);
  }
 }

 FUNC_3(VAR_0);
}
