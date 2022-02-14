
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_ctrlrequest {int bRequestType; int wLength; } ;
struct dwc3_event_depevt {int dummy; } ;
struct dwc3 {int three_stage_setup; int ep0_expect_in; int delayed_status; int ep0_next_event; int gadget_driver; scalar_t__ ep0_trb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dwc3*,struct usb_ctrlrequest*) ;
 int FUNC_1 (struct dwc3*) ;
 int FUNC_2 (struct dwc3*,struct usb_ctrlrequest*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_ctrlrequest*) ;

__attribute__((used)) static void FUNC_5(struct dwc3 *VAR_7,
  const struct dwc3_event_depevt *VAR_8)
{
 struct usb_ctrlrequest *VAR_9 = (void *) VAR_7->ep0_trb;
 int VAR_10 = -VAR_2;
 u32 VAR_11;

 if (!VAR_7->gadget_driver)
  goto out;

 FUNC_4(VAR_9);

 VAR_11 = FUNC_3(VAR_9->wLength);
 if (!VAR_11) {
  VAR_7->three_stage_setup = 0;
  VAR_7->ep0_expect_in = 0;
  VAR_7->ep0_next_event = VAR_1;
 } else {
  VAR_7->three_stage_setup = 1;
  VAR_7->ep0_expect_in = !!(VAR_9->bRequestType & VAR_3);
  VAR_7->ep0_next_event = VAR_0;
 }

 if ((VAR_9->bRequestType & VAR_5) == VAR_6)
  VAR_10 = FUNC_2(VAR_7, VAR_9);
 else
  VAR_10 = FUNC_0(VAR_7, VAR_9);

 if (VAR_10 == VAR_4)
  VAR_7->delayed_status = 1;

out:
 if (VAR_10 < 0)
  FUNC_1(VAR_7);
}
