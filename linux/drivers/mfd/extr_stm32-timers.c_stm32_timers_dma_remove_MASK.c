
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* chans; } ;
struct stm32_timers {TYPE_1__ dma; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_2,
        struct stm32_timers *VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_3->dma.chans[VAR_4])
   FUNC_0(VAR_3->dma.chans[VAR_4]);
}
