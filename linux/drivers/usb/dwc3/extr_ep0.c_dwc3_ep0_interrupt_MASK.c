
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_event_depevt {int endpoint_event; } ;
struct dwc3 {int dummy; } ;
 int FUNC_0 (struct dwc3*,struct dwc3_event_depevt const*) ;
 int FUNC_1 (struct dwc3*,struct dwc3_event_depevt const*) ;

void FUNC_2(struct dwc3 *VAR_0,
  const struct dwc3_event_depevt *VAR_1)
{
 switch (VAR_1->endpoint_event) {
 case 130:
  FUNC_0(VAR_0, VAR_1);
  break;

 case 128:
  FUNC_1(VAR_0, VAR_1);
  break;

 case 129:
 case 132:
 case 131:
 case 133:
  break;
 }
}
