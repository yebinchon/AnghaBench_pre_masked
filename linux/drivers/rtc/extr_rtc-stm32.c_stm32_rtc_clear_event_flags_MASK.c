
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rtc {TYPE_1__* data; } ;
struct TYPE_2__ {int (* clear_events ) (struct stm32_rtc*,unsigned int) ;} ;


 int FUNC_0 (struct stm32_rtc*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct stm32_rtc *VAR_0,
     unsigned int VAR_1)
{
 VAR_0->data->clear_events(VAR_0, VAR_1);
}
