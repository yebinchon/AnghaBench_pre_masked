
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3 {int pending_events; int irq_gadget; int ev_buf; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct dwc3 *VAR_0)
{
 if (VAR_0->pending_events) {
  FUNC_0(VAR_0->irq_gadget, VAR_0->ev_buf);
  VAR_0->pending_events = 0;
  FUNC_1(VAR_0->irq_gadget);
 }
}
