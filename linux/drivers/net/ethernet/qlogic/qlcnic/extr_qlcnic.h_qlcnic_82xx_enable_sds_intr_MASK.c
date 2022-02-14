
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_host_sds_ring {int crb_intr_mask; } ;
struct qlcnic_adapter {int flags; int tgt_mask_reg; TYPE_1__* ahw; } ;
struct TYPE_2__ {int diag_test; } ;


 int FUNC_0 (struct qlcnic_adapter*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct qlcnic_adapter *VAR_1,
       struct qlcnic_host_sds_ring *VAR_2)
{
 if (FUNC_1(VAR_1) &&
     !VAR_1->ahw->diag_test &&
     (VAR_1->flags & VAR_0))
  FUNC_2(0, VAR_2->crb_intr_mask);
 else
  FUNC_2(0x1, VAR_2->crb_intr_mask);

 if (!FUNC_0(VAR_1))
  FUNC_2(0xfbff, VAR_1->tgt_mask_reg);
}
