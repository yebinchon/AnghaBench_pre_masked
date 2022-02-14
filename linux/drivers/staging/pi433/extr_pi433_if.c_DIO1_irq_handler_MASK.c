
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pi433_device {scalar_t__* irq_state; int fifo_wait_queue; void* free_in_fifo; int dev; scalar_t__ rx_active; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,void*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 struct pi433_device *VAR_8 = VAR_7;

 if (VAR_8->irq_state[VAR_0] == VAR_2) {
  VAR_8->free_in_fifo = VAR_3;
 } else if (VAR_8->irq_state[VAR_0] == VAR_1) {
  if (VAR_8->rx_active)
   VAR_8->free_in_fifo = VAR_4 - 1;
  else
   VAR_8->free_in_fifo = VAR_3 - VAR_4 - 1;
 }
 FUNC_0(VAR_8->dev,
  "DIO1 irq: %d bytes free in fifo\n", VAR_8->free_in_fifo);
 FUNC_1(&VAR_8->fifo_wait_queue);

 return VAR_5;
}
