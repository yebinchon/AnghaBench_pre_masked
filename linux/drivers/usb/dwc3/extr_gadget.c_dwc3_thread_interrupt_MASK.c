
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_event_buffer {struct dwc3* dwc; } ;
struct dwc3 {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct dwc3_event_buffer*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct dwc3_event_buffer *VAR_3 = VAR_2;
 struct dwc3 *VAR_4 = VAR_3->dwc;
 unsigned long VAR_5;
 irqreturn_t VAR_6 = VAR_0;

 FUNC_1(&VAR_4->lock, VAR_5);
 VAR_6 = FUNC_0(VAR_3);
 FUNC_2(&VAR_4->lock, VAR_5);

 return VAR_6;
}
