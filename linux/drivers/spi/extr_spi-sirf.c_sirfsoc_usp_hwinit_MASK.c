
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sirfsoc_spi {TYPE_1__* regs; scalar_t__ base; } ;
struct TYPE_2__ {scalar_t__ usp_mode1; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sirfsoc_spi *VAR_1)
{

 FUNC_1(FUNC_0(VAR_1->base + VAR_1->regs->usp_mode1) &
  ~VAR_0, VAR_1->base + VAR_1->regs->usp_mode1);
 FUNC_1(FUNC_0(VAR_1->base + VAR_1->regs->usp_mode1) |
  VAR_0, VAR_1->base + VAR_1->regs->usp_mode1);
}
