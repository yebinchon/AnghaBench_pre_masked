
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct usb_ctrlrequest {scalar_t__ bRequestType; int wIndex; int wValue; } ;
struct dwc3_ep {int flags; } ;
struct TYPE_5__ {int length; int complete; scalar_t__ buf; } ;
struct TYPE_6__ {TYPE_2__ request; struct dwc3_ep* dep; } ;
struct TYPE_4__ {int is_selfpowered; } ;
struct dwc3 {TYPE_3__ ep0_usb_req; scalar_t__ setup_buf; struct dwc3_ep** eps; int regs; int speed; TYPE_1__ gadget; } ;
typedef int __le16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 scalar_t__ VAR_10 ;
 int FUNC_0 (struct dwc3_ep*,TYPE_3__*) ;
 int FUNC_1 (int) ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 struct dwc3_ep* FUNC_3 (struct dwc3*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct dwc3 *VAR_12,
  struct usb_ctrlrequest *VAR_13)
{
 struct dwc3_ep *VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u16 VAR_18 = 0;
 __le16 *VAR_19;


 VAR_16 = FUNC_4(VAR_13->wValue);
 if (VAR_16 != 0)
  return -VAR_6;

 VAR_15 = VAR_13->bRequestType & VAR_10;
 switch (VAR_15) {
 case 130:



  VAR_18 |= VAR_12->gadget.is_selfpowered;

  if ((VAR_12->speed == VAR_3) ||
      (VAR_12->speed == VAR_4)) {
   VAR_17 = FUNC_2(VAR_12->regs, VAR_0);
   if (VAR_17 & VAR_1)
    VAR_18 |= 1 << VAR_7;
   if (VAR_17 & VAR_2)
    VAR_18 |= 1 << VAR_8;
  }

  break;

 case 128:




  break;

 case 129:
  VAR_14 = FUNC_3(VAR_12, VAR_13->wIndex);
  if (!VAR_14)
   return -VAR_6;

  if (VAR_14->flags & VAR_5)
   VAR_18 = 1 << VAR_9;
  break;
 default:
  return -VAR_6;
 }

 VAR_19 = (__le16 *) VAR_12->setup_buf;
 *VAR_19 = FUNC_1(VAR_18);

 VAR_14 = VAR_12->eps[0];
 VAR_12->ep0_usb_req.dep = VAR_14;
 VAR_12->ep0_usb_req.request.length = sizeof(*VAR_19);
 VAR_12->ep0_usb_req.request.buf = VAR_12->setup_buf;
 VAR_12->ep0_usb_req.request.complete = VAR_11;

 return FUNC_0(VAR_14, &VAR_12->ep0_usb_req);
}
