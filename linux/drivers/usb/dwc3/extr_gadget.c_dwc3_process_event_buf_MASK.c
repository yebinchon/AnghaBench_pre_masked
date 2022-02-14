
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union dwc3_event {int raw; } ;
typedef int u32 ;
struct dwc3_event_buffer {int count; int flags; int lpos; int length; scalar_t__ cache; struct dwc3* dwc; } ;
struct dwc3 {int imod_interval; int regs; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct dwc3*,union dwc3_event*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(struct dwc3_event_buffer *VAR_5)
{
 struct dwc3 *VAR_6 = VAR_5->dwc;
 irqreturn_t VAR_7 = VAR_4;
 int VAR_8;
 u32 VAR_9;

 VAR_8 = VAR_5->count;

 if (!(VAR_5->flags & VAR_0))
  return VAR_4;

 while (VAR_8 > 0) {
  union dwc3_event VAR_10;

  VAR_10.raw = *(u32 *) (VAR_5->cache + VAR_5->lpos);

  FUNC_3(VAR_6, &VAR_10);
  VAR_5->lpos = (VAR_5->lpos + 4) % VAR_5->length;
  VAR_8 -= 4;
 }

 VAR_5->count = 0;
 VAR_5->flags &= ~VAR_0;
 VAR_7 = VAR_3;


 VAR_9 = FUNC_4(VAR_6->regs, FUNC_2(0));
 VAR_9 &= ~VAR_2;
 FUNC_5(VAR_6->regs, FUNC_2(0), VAR_9);

 if (VAR_6->imod_interval) {
  FUNC_5(VAR_6->regs, FUNC_1(0), VAR_1);
  FUNC_5(VAR_6->regs, FUNC_0(0), VAR_6->imod_interval);
 }

 return VAR_7;
}
