
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_host_sds_ring {int crb_intr_mask; } ;
struct qlcnic_adapter {int flags; TYPE_1__* ahw; } ;
struct TYPE_2__ {int diag_test; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct qlcnic_adapter *VAR_1,
        struct qlcnic_host_sds_ring *VAR_2)
{
 if (FUNC_0(VAR_1) &&
     !VAR_1->ahw->diag_test &&
     (VAR_1->flags & VAR_0))
  FUNC_1(0x1, VAR_2->crb_intr_mask);
 else
  FUNC_1(0, VAR_2->crb_intr_mask);
}
