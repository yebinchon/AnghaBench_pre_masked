
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct stm32_spi {TYPE_3__* cfg; scalar_t__ base; } ;
struct TYPE_6__ {TYPE_2__* regs; } ;
struct TYPE_4__ {int mask; int shift; scalar_t__ reg; } ;
struct TYPE_5__ {TYPE_1__ br; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct stm32_spi *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = 0, VAR_3 = 0;

 VAR_2 |= VAR_0->cfg->regs->br.mask;
 VAR_3 |= ((u32)VAR_1 << VAR_0->cfg->regs->br.shift) &
  VAR_0->cfg->regs->br.mask;

 FUNC_1((FUNC_0(VAR_0->base + VAR_0->cfg->regs->br.reg) &
   ~VAR_2) | VAR_3,
         VAR_0->base + VAR_0->cfg->regs->br.reg);
}
