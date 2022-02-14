
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_hardware {scalar_t__ hw_version; TYPE_1__* memory_info_regs; scalar_t__ base_port; } ;
struct TYPE_2__ {int memreg_pc_interrupt_ack; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ipw_hardware *VAR_4)
{
 if (VAR_4->hw_version == VAR_1)
  FUNC_0(VAR_0, VAR_4->base_port + VAR_2);
 else
  FUNC_1(VAR_3,
    &VAR_4->memory_info_regs->memreg_pc_interrupt_ack);
}
