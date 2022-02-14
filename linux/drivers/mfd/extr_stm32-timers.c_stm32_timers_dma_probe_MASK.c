
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** chans; int lock; int completion; } ;
struct stm32_timers {TYPE_1__ dma; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_5,
       struct stm32_timers *VAR_6)
{
 int VAR_7;
 char VAR_8[4];

 FUNC_2(&VAR_6->dma.completion);
 FUNC_3(&VAR_6->dma.lock);


 for (VAR_7 = VAR_0; VAR_7 <= VAR_1; VAR_7++) {
  FUNC_4(VAR_8, FUNC_0(VAR_8), "ch%1d", VAR_7 + 1);
  VAR_6->dma.chans[VAR_7] = FUNC_1(VAR_5, VAR_8);
 }
 VAR_6->dma.chans[VAR_4] =
  FUNC_1(VAR_5, "up");
 VAR_6->dma.chans[VAR_3] =
  FUNC_1(VAR_5, "trig");
 VAR_6->dma.chans[VAR_2] =
  FUNC_1(VAR_5, "com");
}
