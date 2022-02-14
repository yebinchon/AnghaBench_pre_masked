
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_host_sds_ring {int dummy; } ;
struct qlcnic_adapter {int drv_sds_rings; int flags; TYPE_2__* ahw; TYPE_1__* recv_ctx; int state; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ diag_test; } ;
struct TYPE_3__ {struct qlcnic_host_sds_ring* sds_rings; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_1 (int ,int *) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*,struct qlcnic_host_sds_ring*) ;
 int FUNC_8 (struct qlcnic_adapter*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_3,
          u8 VAR_4)
{
 struct qlcnic_adapter *VAR_5 = FUNC_2(VAR_3);
 struct qlcnic_host_sds_ring *VAR_6;
 int VAR_7;

 FUNC_1(VAR_2, &VAR_5->state);
 if (VAR_5->ahw->diag_test == VAR_0) {
  for (VAR_7 = 0; VAR_7 < VAR_5->drv_sds_rings; VAR_7++) {
   VAR_6 = &VAR_5->recv_ctx->sds_rings[VAR_7];
   if (VAR_5->flags & VAR_1)
    FUNC_7(VAR_5, VAR_6);
  }
 }

 FUNC_8(VAR_5);
 FUNC_6(VAR_5);

 VAR_5->ahw->diag_test = 0;
 VAR_5->drv_sds_rings = VAR_4;

 if (FUNC_5(VAR_5))
  goto out;

 if (FUNC_4(VAR_3))
  FUNC_0(VAR_5, VAR_3);

out:
 FUNC_3(VAR_3);
}
