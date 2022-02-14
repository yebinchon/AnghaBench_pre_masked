
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_recv_context {struct qlcnic_host_sds_ring* sds_rings; } ;
struct qlcnic_host_tx_ring {int napi; } ;
struct qlcnic_host_sds_ring {int napi; } ;
struct qlcnic_adapter {scalar_t__ is_up; int drv_sds_rings; int flags; int drv_tx_rings; struct qlcnic_host_tx_ring* tx_ring; struct qlcnic_recv_context* recv_ctx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qlcnic_adapter*,struct qlcnic_host_sds_ring*) ;
 int FUNC_3 (struct qlcnic_adapter*,struct qlcnic_host_tx_ring*) ;

void FUNC_4(struct qlcnic_adapter *VAR_3)
{
 int VAR_4;
 struct qlcnic_host_sds_ring *VAR_5;
 struct qlcnic_recv_context *VAR_6 = VAR_3->recv_ctx;
 struct qlcnic_host_tx_ring *VAR_7;

 if (VAR_3->is_up != VAR_0)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->drv_sds_rings; VAR_4++) {
  VAR_5 = &VAR_6->sds_rings[VAR_4];
  if (VAR_3->flags & VAR_1)
   FUNC_2(VAR_3, VAR_5);
  FUNC_1(&VAR_5->napi);
  FUNC_0(&VAR_5->napi);
 }

 if ((VAR_3->flags & VAR_1) &&
     !(VAR_3->flags & VAR_2)) {
  for (VAR_4 = 0; VAR_4 < VAR_3->drv_tx_rings; VAR_4++) {
   VAR_7 = &VAR_3->tx_ring[VAR_4];
   FUNC_3(VAR_3, VAR_7);
   FUNC_1(&VAR_7->napi);
   FUNC_0(&VAR_7->napi);
  }
 }
}
