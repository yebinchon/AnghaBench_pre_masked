
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rtc_registers {int cr; } ;
struct stm32_rtc_events {int alra; } ;
struct stm32_rtc {scalar_t__ base; TYPE_1__* data; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct stm32_rtc_events events; struct stm32_rtc_registers regs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct stm32_rtc* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct stm32_rtc*,int ) ;
 int FUNC_3 (struct stm32_rtc*) ;
 int FUNC_4 (struct stm32_rtc*) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, unsigned int VAR_3)
{
 struct stm32_rtc *VAR_4 = FUNC_0(VAR_2);
 const struct stm32_rtc_registers *VAR_5 = &VAR_4->data->regs;
 const struct stm32_rtc_events *VAR_6 = &VAR_4->data->events;
 unsigned int VAR_7;

 VAR_7 = FUNC_1(VAR_4->base + VAR_5->cr);

 FUNC_4(VAR_4);


 if (VAR_3)
  VAR_7 |= (VAR_1 | VAR_0);
 else
  VAR_7 &= ~(VAR_1 | VAR_0);
 FUNC_5(VAR_7, VAR_4->base + VAR_5->cr);


 FUNC_2(VAR_4, VAR_6->alra);

 FUNC_3(VAR_4);

 return 0;
}
