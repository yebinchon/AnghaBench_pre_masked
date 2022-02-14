
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_event_buffer {int length; int dma; scalar_t__ lpos; } ;
struct dwc3 {int regs; struct dwc3_event_buffer* ev_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct dwc3 *VAR_0)
{
 struct dwc3_event_buffer *VAR_1;

 VAR_1 = VAR_0->ev_buf;
 VAR_1->lpos = 0;
 FUNC_5(VAR_0->regs, FUNC_1(0),
   FUNC_6(VAR_1->dma));
 FUNC_5(VAR_0->regs, FUNC_0(0),
   FUNC_7(VAR_1->dma));
 FUNC_5(VAR_0->regs, FUNC_3(0),
   FUNC_4(VAR_1->length));
 FUNC_5(VAR_0->regs, FUNC_2(0), 0);

 return 0;
}
