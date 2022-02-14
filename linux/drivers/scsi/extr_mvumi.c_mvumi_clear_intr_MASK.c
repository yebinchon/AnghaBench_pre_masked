
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvumi_hw_regs {unsigned int int_mu; unsigned int int_comaerr; unsigned int clic_out_err; unsigned int clic_in_err; unsigned int int_comaout; unsigned int clic_irq; unsigned int int_dl_cpu2pciea; int arm_to_pciea_drbl_reg; int outb_isr_cause; int main_int_cause_reg; } ;
struct mvumi_hba {unsigned int global_isr; unsigned int isr_status; struct mvumi_hw_regs* regs; TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 scalar_t__ FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1)
{
 struct mvumi_hba *VAR_2 = (struct mvumi_hba *) VAR_1;
 unsigned int VAR_3, VAR_4 = 0, VAR_5 = 0;
 struct mvumi_hw_regs *VAR_6 = VAR_2->regs;

 VAR_3 = FUNC_0(VAR_6->main_int_cause_reg);
 if (!(VAR_3 & VAR_6->int_mu) || VAR_3 == 0xFFFFFFFF)
  return 1;
 if (FUNC_2(VAR_3 & VAR_6->int_comaerr)) {
  VAR_5 = FUNC_0(VAR_6->outb_isr_cause);
  if (VAR_2->pdev->device == VAR_0) {
   if (VAR_5 & VAR_6->clic_out_err) {
    FUNC_1(VAR_5 & VAR_6->clic_out_err,
       VAR_6->outb_isr_cause);
   }
  } else {
   if (VAR_5 & (VAR_6->clic_in_err | VAR_6->clic_out_err))
    FUNC_1(VAR_5 & (VAR_6->clic_in_err |
      VAR_6->clic_out_err),
      VAR_6->outb_isr_cause);
  }
  VAR_3 ^= VAR_2->regs->int_comaerr;

 }
 if (VAR_3 & VAR_6->int_comaout) {
  VAR_5 = FUNC_0(VAR_6->outb_isr_cause);
  if (VAR_5 & VAR_6->clic_irq)
   FUNC_1(VAR_5 & VAR_6->clic_irq, VAR_6->outb_isr_cause);
 }
 if (VAR_3 & VAR_6->int_dl_cpu2pciea) {
  VAR_4 = FUNC_0(VAR_6->arm_to_pciea_drbl_reg);
  if (VAR_4)
   FUNC_1(VAR_4, VAR_6->arm_to_pciea_drbl_reg);
 }

 VAR_2->global_isr = VAR_3;
 VAR_2->isr_status = VAR_4;

 return 0;
}
