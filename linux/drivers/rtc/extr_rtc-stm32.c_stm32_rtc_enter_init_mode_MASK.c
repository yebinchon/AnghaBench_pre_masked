
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rtc_registers {int isr; } ;
struct stm32_rtc {scalar_t__ base; TYPE_1__* data; } ;
struct TYPE_2__ {struct stm32_rtc_registers regs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned int,unsigned int,int,int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct stm32_rtc *VAR_2)
{
 const struct stm32_rtc_registers *VAR_3 = &VAR_2->data->regs;
 unsigned int VAR_4 = FUNC_0(VAR_2->base + VAR_3->isr);

 if (!(VAR_4 & VAR_1)) {
  VAR_4 |= VAR_0;
  FUNC_2(VAR_4, VAR_2->base + VAR_3->isr);







  return FUNC_1(
     VAR_2->base + VAR_3->isr,
     VAR_4, (VAR_4 & VAR_1),
     10, 100000);
 }

 return 0;
}
