
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct usb_request {scalar_t__ length; scalar_t__ actual; scalar_t__ zero; } ;
struct dwc3_trb {scalar_t__ size; int ctrl; } ;
struct dwc3_request {scalar_t__ direction; struct usb_request request; } ;
struct dwc3_event_depevt {int endpoint_number; } ;
struct TYPE_2__ {int maxpacket; } ;
struct dwc3_ep {scalar_t__ trb_enqueue; TYPE_1__ endpoint; int pending_list; } ;
struct dwc3 {int setup_packet_pending; int ep0_bounced; struct dwc3_ep** eps; struct dwc3_trb* ep0_trb; int ep0_next_event; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct dwc3*) ;
 int FUNC_3 (struct dwc3_ep*,struct dwc3_request*,int ) ;
 struct dwc3_request* FUNC_4 (int *) ;
 int FUNC_5 (struct dwc3_ep*,struct dwc3_trb*) ;

__attribute__((used)) static void FUNC_6(struct dwc3 *VAR_5,
  const struct dwc3_event_depevt *VAR_6)
{
 struct dwc3_request *VAR_7;
 struct usb_request *VAR_8;
 struct dwc3_trb *VAR_9;
 struct dwc3_ep *VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12;
 u32 VAR_13;
 u8 VAR_14;

 VAR_14 = VAR_6->endpoint_number;
 VAR_10 = VAR_5->eps[0];

 VAR_5->ep0_next_event = VAR_0;
 VAR_9 = VAR_5->ep0_trb;
 FUNC_5(VAR_10, VAR_9);

 VAR_7 = FUNC_4(&VAR_10->pending_list);
 if (!VAR_7)
  return;

 VAR_12 = FUNC_0(VAR_9->size);
 if (VAR_12 == VAR_1) {
  VAR_5->setup_packet_pending = 1;
  if (VAR_7)
   FUNC_3(VAR_10, VAR_7, -VAR_4);

  return;
 }

 VAR_8 = &VAR_7->request;

 VAR_13 = VAR_9->size & VAR_3;
 VAR_11 = VAR_8->length - VAR_13;
 VAR_8->actual += VAR_11;

 if ((FUNC_1(VAR_8->length, VAR_10->endpoint.maxpacket) &&
      VAR_8->length && VAR_8->zero) || VAR_5->ep0_bounced) {
  VAR_9++;
  VAR_9->ctrl &= ~VAR_2;
  FUNC_5(VAR_10, VAR_9);

  if (VAR_7->direction)
   VAR_5->eps[1]->trb_enqueue = 0;
  else
   VAR_5->eps[0]->trb_enqueue = 0;

  VAR_5->ep0_bounced = 0;
 }

 if ((VAR_14 & 1) && VAR_8->actual < VAR_8->length)
  FUNC_2(VAR_5);
 else
  FUNC_3(VAR_10, VAR_7, 0);
}
