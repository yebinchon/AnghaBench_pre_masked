
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_event_depevt {int status; int endpoint_number; } ;
struct dwc3_ep {int pending_list; } ;
struct dwc3 {int ep0_expect_in; int delayed_status; int gadget; struct dwc3_ep** eps; int ep0state; int ep0_next_event; int dev; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dwc3*,struct dwc3_event_depevt const*) ;
 int FUNC_3 (struct dwc3*,struct dwc3_ep*) ;
 int FUNC_4 (struct dwc3*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct dwc3 *VAR_3,
  const struct dwc3_event_depevt *VAR_4)
{
 switch (VAR_4->status) {
 case 129:
  if (VAR_3->ep0_expect_in != VAR_4->endpoint_number) {
   struct dwc3_ep *VAR_5 = VAR_3->eps[VAR_3->ep0_expect_in];

   FUNC_1(VAR_3->dev, "unexpected direction for Data Phase\n");
   FUNC_3(VAR_3, VAR_5);
   FUNC_4(VAR_3);
   return;
  }

  break;

 case 128:
  if (VAR_3->ep0_next_event != VAR_0)
   return;

  VAR_3->ep0state = VAR_1;

  if (VAR_3->delayed_status) {
   struct dwc3_ep *VAR_6 = VAR_3->eps[0];

   FUNC_0(VAR_4->endpoint_number != 1);





   if (!FUNC_5(&VAR_6->pending_list)) {
    VAR_3->delayed_status = 0;
    FUNC_6(&VAR_3->gadget,
           VAR_2);
    FUNC_2(VAR_3, VAR_4);
   }

   return;
  }

  FUNC_2(VAR_3, VAR_4);
 }
}
