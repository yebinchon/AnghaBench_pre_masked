
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int sense_interrupt_reg; int clr_interrupt_reg32; int clr_interrupt_reg; int set_interrupt_mask_reg; } ;
struct ipr_ioa_cfg {int hrrq_num; TYPE_2__ regs; scalar_t__ sis64; TYPE_1__* hrrq; } ;
struct TYPE_3__ {int _lock; scalar_t__ allow_interrupts; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ipr_ioa_cfg *VAR_0,
       u32 VAR_1)
{
 volatile u32 VAR_2;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0->hrrq_num; VAR_3++) {
  FUNC_1(&VAR_0->hrrq[VAR_3]._lock);
  VAR_0->hrrq[VAR_3].allow_interrupts = 0;
  FUNC_2(&VAR_0->hrrq[VAR_3]._lock);
 }


 if (VAR_0->sis64)
  FUNC_4(~0, VAR_0->regs.set_interrupt_mask_reg);
 else
  FUNC_3(~0, VAR_0->regs.set_interrupt_mask_reg);


 if (VAR_0->sis64)
  FUNC_3(~0, VAR_0->regs.clr_interrupt_reg);
 FUNC_3(VAR_1, VAR_0->regs.clr_interrupt_reg32);
 VAR_2 = FUNC_0(VAR_0->regs.sense_interrupt_reg);
}
