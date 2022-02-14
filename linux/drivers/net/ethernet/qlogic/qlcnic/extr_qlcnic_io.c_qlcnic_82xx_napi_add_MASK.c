
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_recv_context {struct qlcnic_host_sds_ring* sds_rings; } ;
struct qlcnic_host_tx_ring {int napi; } ;
struct qlcnic_host_sds_ring {int napi; } ;
struct qlcnic_adapter {int drv_sds_rings; int drv_tx_rings; struct qlcnic_host_tx_ring* tx_ring; TYPE_1__* ahw; struct qlcnic_recv_context* recv_ctx; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int diag_test; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *,int ,int ) ;
 int FUNC_1 (struct net_device*,int *,int ,int ) ;
 scalar_t__ FUNC_2 (struct qlcnic_recv_context*,int) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*,struct net_device*) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_recv_context*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_6(struct qlcnic_adapter *VAR_5,
    struct net_device *VAR_6)
{
 int VAR_7;
 struct qlcnic_host_sds_ring *VAR_8;
 struct qlcnic_recv_context *VAR_9 = VAR_5->recv_ctx;
 struct qlcnic_host_tx_ring *VAR_10;

 if (FUNC_2(VAR_9, VAR_5->drv_sds_rings))
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5->drv_sds_rings; VAR_7++) {
  VAR_8 = &VAR_9->sds_rings[VAR_7];
  if (FUNC_4(VAR_5) &&
      !VAR_5->ahw->diag_test) {
   FUNC_0(VAR_6, &VAR_8->napi, VAR_3,
           VAR_1);
  } else {
   if (VAR_7 == (VAR_5->drv_sds_rings - 1))
    FUNC_0(VAR_6, &VAR_8->napi,
            VAR_2,
            VAR_1);
   else
    FUNC_0(VAR_6, &VAR_8->napi,
            VAR_3,
            VAR_1);
  }
 }

 if (FUNC_3(VAR_5, VAR_6)) {
  FUNC_5(VAR_9);
  return -VAR_0;
 }

 if (FUNC_4(VAR_5) && !VAR_5->ahw->diag_test) {
  for (VAR_7 = 0; VAR_7 < VAR_5->drv_tx_rings; VAR_7++) {
   VAR_10 = &VAR_5->tx_ring[VAR_7];
   FUNC_1(VAR_6, &VAR_10->napi, VAR_4,
           VAR_1);
  }
 }

 return 0;
}
