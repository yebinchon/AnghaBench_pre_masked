
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pi433_device {scalar_t__* irq_state; int fifo_wait_queue; scalar_t__ free_in_fifo; int dev; int rx_wait_queue; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 struct pi433_device *VAR_8 = VAR_7;

 if (VAR_8->irq_state[VAR_0] == VAR_1) {
  VAR_8->free_in_fifo = VAR_4;
  FUNC_0(VAR_8->dev, "DIO0 irq: Packet sent\n");
  FUNC_1(&VAR_8->fifo_wait_queue);
 } else if (VAR_8->irq_state[VAR_0] == VAR_3) {
  FUNC_0(VAR_8->dev, "DIO0 irq: RSSI level over threshold\n");
  FUNC_1(&VAR_8->rx_wait_queue);
 } else if (VAR_8->irq_state[VAR_0] == VAR_2) {
  FUNC_0(VAR_8->dev, "DIO0 irq: Payload ready\n");
  VAR_8->free_in_fifo = 0;
  FUNC_1(&VAR_8->fifo_wait_queue);
 }

 return VAR_5;
}
