
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rtc_registers {scalar_t__ scr; } ;
struct stm32_rtc {scalar_t__ base; TYPE_1__* data; } ;
struct TYPE_2__ {struct stm32_rtc_registers regs; } ;


 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct stm32_rtc *VAR_0,
          unsigned int VAR_1)
{
 struct stm32_rtc_registers VAR_2 = VAR_0->data->regs;


 FUNC_0(VAR_1, VAR_0->base + VAR_2.scr);
}
