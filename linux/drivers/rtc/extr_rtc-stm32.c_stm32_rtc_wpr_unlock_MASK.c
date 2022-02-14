
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rtc_registers {scalar_t__ wpr; } ;
struct stm32_rtc {scalar_t__ base; TYPE_1__* data; } ;
struct TYPE_2__ {struct stm32_rtc_registers regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct stm32_rtc *VAR_2)
{
 const struct stm32_rtc_registers *VAR_3 = &VAR_2->data->regs;

 FUNC_0(VAR_0, VAR_2->base + VAR_3->wpr);
 FUNC_0(VAR_1, VAR_2->base + VAR_3->wpr);
}
