
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_event_depevt {size_t endpoint_number; } ;
struct dwc3_ep {int dummy; } ;
struct dwc3 {struct dwc3_ep** eps; } ;


 int FUNC_0 (struct dwc3*,struct dwc3_ep*) ;

__attribute__((used)) static void FUNC_1(struct dwc3 *VAR_0,
  const struct dwc3_event_depevt *VAR_1)
{
 struct dwc3_ep *VAR_2 = VAR_0->eps[VAR_1->endpoint_number];

 FUNC_0(VAR_0, VAR_2);
}
