
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_trb {int dummy; } ;
struct dwc3_request {int dummy; } ;
struct dwc3_event_depevt {int dummy; } ;
struct dwc3_ep {size_t trb_dequeue; struct dwc3_trb* trb_pool; } ;


 int FUNC_0 (struct dwc3_ep*,struct dwc3_request*,struct dwc3_trb*,struct dwc3_event_depevt const*,int,int) ;

__attribute__((used)) static int FUNC_1(struct dwc3_ep *VAR_0,
  struct dwc3_request *VAR_1, const struct dwc3_event_depevt *VAR_2,
  int VAR_3)
{
 struct dwc3_trb *VAR_4 = &VAR_0->trb_pool[VAR_0->trb_dequeue];

 return FUNC_0(VAR_0, VAR_1, VAR_4,
   VAR_2, VAR_3, 0);
}
