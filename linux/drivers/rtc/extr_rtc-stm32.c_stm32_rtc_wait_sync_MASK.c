
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rtc_registers {int isr; } ;
struct stm32_rtc {scalar_t__ base; TYPE_1__* data; } ;
struct TYPE_2__ {struct stm32_rtc_registers regs; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned int,unsigned int,int,int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct stm32_rtc *VAR_1)
{
 const struct stm32_rtc_registers *VAR_2 = &VAR_1->data->regs;
 unsigned int VAR_3 = FUNC_0(VAR_1->base + VAR_2->isr);

 VAR_3 &= ~VAR_0;
 FUNC_2(VAR_3, VAR_1->base + VAR_2->isr);





 return FUNC_1(VAR_1->base + VAR_2->isr,
       VAR_3,
       (VAR_3 & VAR_0),
       10, 100000);
}
