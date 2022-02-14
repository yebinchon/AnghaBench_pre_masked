
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_adc_request {int dummy; } ;
struct pcf50633_adc {int queue_head; int queue_tail; int queue_mutex; struct pcf50633_adc_request** queue; } ;
struct pcf50633 {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcf50633_adc* FUNC_0 (struct pcf50633*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pcf50633*) ;

__attribute__((used)) static int
FUNC_5(struct pcf50633 *VAR_2, struct pcf50633_adc_request *VAR_3)
{
 struct pcf50633_adc *VAR_4 = FUNC_0(VAR_2);
 int VAR_5, VAR_6;

 FUNC_2(&VAR_4->queue_mutex);

 VAR_5 = VAR_4->queue_head;
 VAR_6 = VAR_4->queue_tail;

 if (VAR_4->queue[VAR_6]) {
  FUNC_3(&VAR_4->queue_mutex);
  FUNC_1(VAR_2->dev, "ADC queue is full, dropping request\n");
  return -VAR_0;
 }

 VAR_4->queue[VAR_6] = VAR_3;
 if (VAR_5 == VAR_6)
  FUNC_4(VAR_2);
 VAR_4->queue_tail = (VAR_6 + 1) & (VAR_1 - 1);

 FUNC_3(&VAR_4->queue_mutex);

 return 0;
}
