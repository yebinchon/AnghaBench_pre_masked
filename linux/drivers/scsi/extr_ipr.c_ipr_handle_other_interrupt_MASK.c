
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int sense_interrupt_reg32; int clr_interrupt_reg32; int sense_interrupt_reg; int set_interrupt_mask_reg; int clr_interrupt_reg; int sense_interrupt_mask_reg; int sense_interrupt_mask_reg32; } ;
struct ipr_ioa_cfg {int ioa_unit_checked; scalar_t__ sdt_state; TYPE_2__* pdev; TYPE_1__ regs; scalar_t__ clear_isr; TYPE_3__* reset_cmd; scalar_t__ sis64; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int timer; int queue; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct ipr_ioa_cfg*,int ) ;
 int FUNC_3 (struct ipr_ioa_cfg*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(struct ipr_ioa_cfg *VAR_12,
           u32 VAR_13)
{
 irqreturn_t VAR_14 = VAR_8;
 u32 VAR_15;

 VAR_15 = FUNC_7(VAR_12->regs.sense_interrupt_mask_reg32);
 VAR_13 &= ~VAR_15;




 if ((VAR_13 & VAR_6) == 0) {
  if (VAR_12->sis64) {
   VAR_15 = FUNC_7(VAR_12->regs.sense_interrupt_mask_reg);
   VAR_13 = FUNC_7(VAR_12->regs.sense_interrupt_reg) & ~VAR_15;
   if (VAR_13 & VAR_4) {


    FUNC_8(VAR_4, VAR_12->regs.clr_interrupt_reg);
    VAR_13 = FUNC_7(VAR_12->regs.sense_interrupt_reg) & ~VAR_15;
    FUNC_5(&VAR_12->reset_cmd->queue);
    FUNC_0(&VAR_12->reset_cmd->timer);
    FUNC_4(VAR_12->reset_cmd);
    return VAR_8;
   }
  }

  return VAR_9;
 }

 if (VAR_13 & VAR_2) {

  FUNC_8(VAR_2, VAR_12->regs.set_interrupt_mask_reg);
  VAR_13 = FUNC_7(VAR_12->regs.sense_interrupt_reg);

  FUNC_5(&VAR_12->reset_cmd->queue);
  FUNC_0(&VAR_12->reset_cmd->timer);
  FUNC_4(VAR_12->reset_cmd);
 } else if ((VAR_13 & VAR_1) == VAR_13) {
  if (VAR_12->clear_isr) {
   if (VAR_11 && FUNC_6())
    FUNC_1(&VAR_12->pdev->dev,
     "Spurious interrupt detected. 0x%08X\n", VAR_13);
   FUNC_8(VAR_1, VAR_12->regs.clr_interrupt_reg32);
   VAR_13 = FUNC_7(VAR_12->regs.sense_interrupt_reg32);
   return VAR_9;
  }
 } else {
  if (VAR_13 & VAR_3)
   VAR_12->ioa_unit_checked = 1;
  else if (VAR_13 & VAR_5)
   FUNC_1(&VAR_12->pdev->dev,
    "No Host RRQ. 0x%08X\n", VAR_13);
  else
   FUNC_1(&VAR_12->pdev->dev,
    "Permanent IOA failure. 0x%08X\n", VAR_13);

  if (VAR_10 == VAR_12->sdt_state)
   VAR_12->sdt_state = VAR_0;

  FUNC_3(VAR_12, ~0);
  FUNC_2(VAR_12, VAR_7);
 }

 return VAR_14;
}
