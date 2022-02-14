
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_event_depevt {size_t endpoint_number; } ;
struct dwc3_ep {scalar_t__ resource_index; int flags; } ;
struct dwc3 {int setup_packet_pending; int ep0state; struct dwc3_ep** eps; } ;


 int VAR_0 ;



 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct dwc3*,struct dwc3_event_depevt const*) ;
 int FUNC_2 (struct dwc3*,struct dwc3_event_depevt const*) ;
 int FUNC_3 (struct dwc3*,struct dwc3_event_depevt const*) ;

__attribute__((used)) static void FUNC_4(struct dwc3 *VAR_1,
   const struct dwc3_event_depevt *VAR_2)
{
 struct dwc3_ep *VAR_3 = VAR_1->eps[VAR_2->endpoint_number];

 VAR_3->flags &= ~VAR_0;
 VAR_3->resource_index = 0;
 VAR_1->setup_packet_pending = 0;

 switch (VAR_1->ep0state) {
 case 129:
  FUNC_3(VAR_1, VAR_2);
  break;

 case 130:
  FUNC_1(VAR_1, VAR_2);
  break;

 case 128:
  FUNC_2(VAR_1, VAR_2);
  break;
 default:
  FUNC_0(1, "UNKNOWN ep0state %d\n", VAR_1->ep0state);
 }
}
