
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {int drv_tx_rings; int flags; TYPE_1__* ahw; int * tx_ring; int state; } ;
struct TYPE_2__ {scalar_t__ diag_test; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int ) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,int ) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void FUNC_9(struct qlcnic_adapter *VAR_3)
{
 int VAR_4;

 if (FUNC_8(VAR_2, &VAR_3->state)) {
  FUNC_6(VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_3->drv_tx_rings; VAR_4++)
   FUNC_7(VAR_3,
       &VAR_3->tx_ring[VAR_4]);

  if (FUNC_1(VAR_3) &&
      (VAR_3->flags & VAR_1) &&
      FUNC_5(VAR_3) &&
      !VAR_3->ahw->diag_test)
    FUNC_2(VAR_3, 0);

  if (FUNC_3(VAR_3) &&
      (VAR_3->flags & VAR_1)) {
   if (VAR_3->ahw->diag_test != VAR_0)
    FUNC_4(VAR_3, 0);
  }

  FUNC_0(20);
 }
}
