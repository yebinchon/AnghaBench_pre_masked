
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_event_depevt {int parameters; } ;
struct dwc3_ep {int frame_number; } ;



__attribute__((used)) static void FUNC_0(struct dwc3_ep *VAR_0,
  const struct dwc3_event_depevt *VAR_1)
{
 VAR_0->frame_number = VAR_1->parameters;
}
