
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int host_ioa_interrupt_reg; int ioa_host_interrupt_reg; int ioa_host_interrupt_mask_reg; } ;
struct pmcraid_instance {int ioa_hard_reset; int ioa_unit_check; TYPE_1__ int_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct pmcraid_instance *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_0(VAR_4->int_regs.ioa_host_interrupt_mask_reg);
 VAR_6 = FUNC_0(VAR_4->int_regs.ioa_host_interrupt_reg);
 VAR_7 = FUNC_0(VAR_4->int_regs.host_ioa_interrupt_reg);

 if ((VAR_5 & VAR_1) == 0 ||
     (VAR_7 & VAR_0) ||
     (VAR_6 & VAR_3)) {
  FUNC_1("IOA requires hard reset\n");
  VAR_4->ioa_hard_reset = 1;
 }


 if (VAR_6 & VAR_2)
  VAR_4->ioa_unit_check = 1;
}
