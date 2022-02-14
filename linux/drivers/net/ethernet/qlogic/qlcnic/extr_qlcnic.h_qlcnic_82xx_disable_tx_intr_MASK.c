
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_host_tx_ring {int crb_intr_mask; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {int diag_test; } ;


 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct qlcnic_adapter *VAR_0,
       struct qlcnic_host_tx_ring *VAR_1)
{
 if (FUNC_0(VAR_0) &&
     !VAR_0->ahw->diag_test)
  FUNC_1(1, VAR_1->crb_intr_mask);
}
