
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_recv_context {struct qlcnic_host_tx_ring* sds_rings; } ;
struct qlcnic_host_tx_ring {scalar_t__ irq; } ;
struct qlcnic_host_sds_ring {scalar_t__ irq; } ;
struct qlcnic_adapter {int flags; int drv_sds_rings; int drv_tx_rings; struct qlcnic_host_tx_ring* tx_ring; TYPE_1__* ahw; struct qlcnic_recv_context* recv_ctx; } ;
struct TYPE_2__ {scalar_t__ diag_test; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,struct qlcnic_host_tx_ring*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_2 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;

__attribute__((used)) static void
FUNC_4(struct qlcnic_adapter *VAR_3)
{
 int VAR_4;
 struct qlcnic_host_sds_ring *VAR_5;
 struct qlcnic_host_tx_ring *VAR_6;

 struct qlcnic_recv_context *VAR_7 = VAR_3->recv_ctx;

 if (VAR_3->ahw->diag_test != VAR_0) {
  if (FUNC_1(VAR_3) ||
      (FUNC_2(VAR_3) &&
       (VAR_3->flags & VAR_1))) {
   for (VAR_4 = 0; VAR_4 < VAR_3->drv_sds_rings; VAR_4++) {
    VAR_5 = &VAR_7->sds_rings[VAR_4];
    FUNC_0(VAR_5->irq, VAR_5);
   }
  }
  if ((FUNC_2(VAR_3) &&
       !(VAR_3->flags & VAR_2)) ||
      (FUNC_1(VAR_3) &&
       FUNC_3(VAR_3))) {
   for (VAR_4 = 0; VAR_4 < VAR_3->drv_tx_rings;
        VAR_4++) {
    VAR_6 = &VAR_3->tx_ring[VAR_4];
    if (VAR_6->irq)
     FUNC_0(VAR_6->irq, VAR_6);
   }
  }
 }
}
