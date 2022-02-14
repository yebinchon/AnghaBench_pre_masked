
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_rtc_registers {int cr; scalar_t__ sr; } ;
struct stm32_rtc_events {unsigned int alra; } ;
struct stm32_rtc {TYPE_2__* rtc_dev; scalar_t__ base; TYPE_1__* data; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int ops_lock; int dev; } ;
struct TYPE_3__ {struct stm32_rtc_events events; struct stm32_rtc_registers regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (struct stm32_rtc*,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct stm32_rtc *VAR_6 = (struct stm32_rtc *)VAR_5;
 const struct stm32_rtc_registers *VAR_7 = &VAR_6->data->regs;
 const struct stm32_rtc_events *VAR_8 = &VAR_6->data->events;
 unsigned int VAR_9, VAR_10;

 FUNC_1(&VAR_6->rtc_dev->ops_lock);

 VAR_9 = FUNC_3(VAR_6->base + VAR_7->sr);
 VAR_10 = FUNC_3(VAR_6->base + VAR_7->cr);

 if ((VAR_9 & VAR_8->alra) &&
     (VAR_10 & VAR_3)) {

  FUNC_0(&VAR_6->rtc_dev->dev, "Alarm occurred\n");


  FUNC_4(VAR_6->rtc_dev, 1, VAR_2 | VAR_1);


  FUNC_5(VAR_6, VAR_8->alra);
 }

 FUNC_2(&VAR_6->rtc_dev->ops_lock);

 return VAR_0;
}
