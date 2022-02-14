
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_recv_context {struct qlcnic_host_sds_ring* sds_rings; } ;
struct qlcnic_host_tx_ring {int napi; } ;
struct qlcnic_host_sds_ring {int napi; } ;
struct qlcnic_adapter {scalar_t__ is_up; int drv_sds_rings; int flags; int drv_tx_rings; struct qlcnic_host_tx_ring* tx_ring; TYPE_1__* ahw; struct qlcnic_recv_context* recv_ctx; } ;
struct TYPE_2__ {int diag_test; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,struct qlcnic_host_sds_ring*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_host_tx_ring*) ;

void FUNC_4(struct qlcnic_adapter *VAR_2)
{
 int VAR_3;
 struct qlcnic_host_sds_ring *VAR_4;
 struct qlcnic_host_tx_ring *VAR_5;
 struct qlcnic_recv_context *VAR_6 = VAR_2->recv_ctx;

 if (VAR_2->is_up != VAR_0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->drv_sds_rings; VAR_3++) {
  VAR_4 = &VAR_6->sds_rings[VAR_3];
  FUNC_0(&VAR_4->napi);
  FUNC_2(VAR_2, VAR_4);
 }

 if (FUNC_1(VAR_2) &&
     (VAR_2->flags & VAR_1) &&
     !VAR_2->ahw->diag_test) {
  for (VAR_3 = 0; VAR_3 < VAR_2->drv_tx_rings; VAR_3++) {
   VAR_5 = &VAR_2->tx_ring[VAR_3];
   FUNC_0(&VAR_5->napi);
   FUNC_3(VAR_2, VAR_5);
  }
 }
}
