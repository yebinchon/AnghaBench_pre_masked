
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_host_sds_ring {struct qlcnic_adapter* adapter; } ;
struct qlcnic_adapter {int flags; TYPE_1__* ahw; int tgt_status_reg; } ;
typedef scalar_t__ irqreturn_t ;
struct TYPE_2__ {int diag_cnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (struct qlcnic_adapter*,struct qlcnic_host_sds_ring*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct qlcnic_host_sds_ring *VAR_6 = VAR_5;
 struct qlcnic_adapter *VAR_7 = VAR_6->adapter;

 if (VAR_7->flags & VAR_2)
  goto done;
 else if (VAR_7->flags & VAR_3) {
  FUNC_2(0xffffffff, VAR_7->tgt_status_reg);
  goto done;
 }

 if (FUNC_0(VAR_7) == VAR_1)
  return VAR_1;

done:
 VAR_7->ahw->diag_cnt++;
 FUNC_1(VAR_7, VAR_6);
 return VAR_0;
}
