
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_host_sds_ring {struct qlcnic_adapter* adapter; } ;
struct qlcnic_adapter {int flags; TYPE_2__* ahw; TYPE_1__* nic_ops; } ;
typedef scalar_t__ irqreturn_t ;
struct TYPE_4__ {int diag_cnt; } ;
struct TYPE_3__ {scalar_t__ (* clear_legacy_intr ) (struct qlcnic_adapter*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_adapter*,struct qlcnic_host_sds_ring*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;

irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct qlcnic_host_sds_ring *VAR_5 = VAR_4;
 struct qlcnic_adapter *VAR_6 = VAR_5->adapter;

 if (VAR_6->flags & VAR_2)
  goto done;

 if (VAR_6->nic_ops->clear_legacy_intr(VAR_6) == VAR_1)
  return VAR_1;

done:
 VAR_6->ahw->diag_cnt++;
 FUNC_0(VAR_6, VAR_5);

 return VAR_0;
}
