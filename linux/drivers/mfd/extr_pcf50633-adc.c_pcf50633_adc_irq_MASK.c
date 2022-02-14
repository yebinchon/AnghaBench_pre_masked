
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_adc_request {int callback_param; int (* callback ) (struct pcf50633*,int ,int) ;} ;
struct pcf50633_adc {int queue_head; int queue_mutex; struct pcf50633_adc_request** queue; struct pcf50633* pcf; } ;
struct pcf50633 {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct pcf50633*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct pcf50633_adc_request*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pcf50633*,int ,int) ;
 int FUNC_7 (struct pcf50633*) ;

__attribute__((used)) static void FUNC_8(int VAR_1, void *VAR_2)
{
 struct pcf50633_adc *VAR_3 = VAR_2;
 struct pcf50633 *VAR_4 = VAR_3->pcf;
 struct pcf50633_adc_request *VAR_5;
 int VAR_6, VAR_7;

 FUNC_4(&VAR_3->queue_mutex);
 VAR_6 = VAR_3->queue_head;

 VAR_5 = VAR_3->queue[VAR_6];
 if (FUNC_0(!VAR_5)) {
  FUNC_2(VAR_4->dev, "pcf50633-adc irq: ADC queue empty!\n");
  FUNC_5(&VAR_3->queue_mutex);
  return;
 }
 VAR_3->queue[VAR_6] = ((void*)0);
 VAR_3->queue_head = (VAR_6 + 1) &
          (VAR_0 - 1);

 VAR_7 = FUNC_1(VAR_4);
 FUNC_7(VAR_4);

 FUNC_5(&VAR_3->queue_mutex);

 VAR_5->callback(VAR_4, VAR_5->callback_param, VAR_7);
 FUNC_3(VAR_5);
}
