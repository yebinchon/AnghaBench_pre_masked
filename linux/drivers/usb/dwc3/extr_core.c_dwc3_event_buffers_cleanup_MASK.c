
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_event_buffer {scalar_t__ lpos; } ;
struct dwc3 {int regs; struct dwc3_event_buffer* ev_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

void FUNC_6(struct dwc3 *VAR_1)
{
 struct dwc3_event_buffer *VAR_2;

 VAR_2 = VAR_1->ev_buf;

 VAR_2->lpos = 0;

 FUNC_5(VAR_1->regs, FUNC_1(0), 0);
 FUNC_5(VAR_1->regs, FUNC_0(0), 0);
 FUNC_5(VAR_1->regs, FUNC_3(0), VAR_0
   | FUNC_4(0));
 FUNC_5(VAR_1->regs, FUNC_2(0), 0);
}
