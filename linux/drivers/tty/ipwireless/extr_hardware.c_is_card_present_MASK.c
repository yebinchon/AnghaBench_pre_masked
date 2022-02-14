
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_hardware {scalar_t__ hw_version; TYPE_1__* memory_info_regs; scalar_t__ base_port; } ;
struct TYPE_2__ {int memreg_card_present; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ipw_hardware *VAR_3)
{
 if (VAR_3->hw_version == VAR_1)
  return FUNC_0(VAR_3->base_port + VAR_2) != 0xFFFF;
 else
  return FUNC_1(&VAR_3->memory_info_regs->memreg_card_present) ==
      VAR_0;
}
