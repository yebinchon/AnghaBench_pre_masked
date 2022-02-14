
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3_event_buffer {int flags; scalar_t__ buf; scalar_t__ cache; scalar_t__ lpos; scalar_t__ length; int count; struct dwc3* dwc; } ;
struct dwc3 {int pending_events; int regs; int irq_gadget; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(struct dwc3_event_buffer *VAR_6)
{
 struct dwc3 *VAR_7 = VAR_6->dwc;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 if (FUNC_8(VAR_7->dev)) {
  FUNC_7(VAR_7->dev);
  FUNC_2(VAR_7->irq_gadget);
  VAR_7->pending_events = 1;
  return VAR_3;
 }







 if (VAR_6->flags & VAR_0)
  return VAR_3;

 VAR_9 = FUNC_3(VAR_7->regs, FUNC_0(0));
 VAR_9 &= VAR_1;
 if (!VAR_9)
  return VAR_4;

 VAR_6->count = VAR_9;
 VAR_6->flags |= VAR_0;


 VAR_10 = FUNC_3(VAR_7->regs, FUNC_1(0));
 VAR_10 |= VAR_2;
 FUNC_4(VAR_7->regs, FUNC_1(0), VAR_10);

 VAR_8 = FUNC_6(VAR_9, VAR_6->length - VAR_6->lpos);
 FUNC_5(VAR_6->cache + VAR_6->lpos, VAR_6->buf + VAR_6->lpos, VAR_8);

 if (VAR_8 < VAR_9)
  FUNC_5(VAR_6->cache, VAR_6->buf, VAR_9 - VAR_8);

 FUNC_4(VAR_7->regs, FUNC_0(0), VAR_9);

 return VAR_5;
}
