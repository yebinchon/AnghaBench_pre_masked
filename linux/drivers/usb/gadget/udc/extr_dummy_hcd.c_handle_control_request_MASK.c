
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u8 ;
struct usb_ctrlrequest {int bRequest; int bRequestType; int wValue; int wIndex; } ;
struct urb {int transfer_buffer_length; int actual_length; scalar_t__ transfer_buffer; } ;
struct dummy_hcd {struct dummy* dum; } ;
struct TYPE_5__ {int name; } ;
struct dummy_ep {int halted; int wedged; TYPE_2__ ep; } ;
struct TYPE_4__ {int b_hnp_enable; int a_hnp_support; int a_alt_hnp_support; } ;
struct dummy {unsigned int address; int devstatus; TYPE_1__ gadget; } ;
struct TYPE_6__ {int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;




 int FUNC_0 (int ,char*,unsigned int) ;
 TYPE_3__* FUNC_1 (struct dummy_hcd*) ;
 int VAR_10 ;
 struct dummy_ep* FUNC_2 (struct dummy*,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_11 ;
 int FUNC_5 (struct dummy*) ;

__attribute__((used)) static int FUNC_6(struct dummy_hcd *VAR_12, struct urb *VAR_13,
      struct usb_ctrlrequest *VAR_14,
      int *VAR_15)
{
 struct dummy_ep *VAR_16;
 struct dummy *VAR_17 = VAR_12->dum;
 int VAR_18 = 1;
 unsigned VAR_19;
 unsigned VAR_20;

 VAR_19 = FUNC_3(VAR_14->wIndex);
 VAR_20 = FUNC_3(VAR_14->wValue);
 switch (VAR_14->bRequest) {
 case 129:
  if (VAR_14->bRequestType != VAR_1)
   break;
  VAR_17->address = VAR_20;
  *VAR_15 = 0;
  FUNC_0(FUNC_5(VAR_17), "set_address = %d\n",
    VAR_20);
  VAR_18 = 0;
  break;
 case 128:
  if (VAR_14->bRequestType == VAR_1) {
   VAR_18 = 0;
   switch (VAR_20) {
   case 134:
    break;
   case 136:
    VAR_17->gadget.b_hnp_enable = 1;
    break;
   case 137:
    VAR_17->gadget.a_hnp_support = 1;
    break;
   case 138:
    VAR_17->gadget.a_alt_hnp_support = 1;
    break;
   case 133:
    if (FUNC_1(VAR_12)->speed ==
        VAR_5)
     VAR_20 = VAR_8;
    else
     VAR_18 = -VAR_2;
    break;
   case 132:
    if (FUNC_1(VAR_12)->speed ==
        VAR_5)
     VAR_20 = VAR_9;
    else
     VAR_18 = -VAR_2;
    break;
   case 135:
    if (FUNC_1(VAR_12)->speed ==
        VAR_5)
     VAR_20 = VAR_7;
    else
     VAR_18 = -VAR_2;
    break;
   default:
    VAR_18 = -VAR_2;
   }
   if (VAR_18 == 0) {
    VAR_17->devstatus |= (1 << VAR_20);
    *VAR_15 = 0;
   }
  } else if (VAR_14->bRequestType == VAR_4) {

   VAR_16 = FUNC_2(VAR_17, VAR_19);
   if (!VAR_16 || VAR_16->ep.name == VAR_10) {
    VAR_18 = -VAR_2;
    break;
   }
   VAR_16->halted = 1;
   VAR_18 = 0;
   *VAR_15 = 0;
  }
  break;
 case 131:
  if (VAR_14->bRequestType == VAR_1) {
   VAR_18 = 0;
   switch (VAR_20) {
   case 134:
    VAR_20 = 134;
    break;
   case 133:
    if (FUNC_1(VAR_12)->speed ==
        VAR_5)
     VAR_20 = VAR_8;
    else
     VAR_18 = -VAR_2;
    break;
   case 132:
    if (FUNC_1(VAR_12)->speed ==
        VAR_5)
     VAR_20 = VAR_9;
    else
     VAR_18 = -VAR_2;
    break;
   case 135:
    if (FUNC_1(VAR_12)->speed ==
        VAR_5)
     VAR_20 = VAR_7;
    else
     VAR_18 = -VAR_2;
    break;
   default:
    VAR_18 = -VAR_2;
    break;
   }
   if (VAR_18 == 0) {
    VAR_17->devstatus &= ~(1 << VAR_20);
    *VAR_15 = 0;
   }
  } else if (VAR_14->bRequestType == VAR_4) {

   VAR_16 = FUNC_2(VAR_17, VAR_19);
   if (!VAR_16) {
    VAR_18 = -VAR_2;
    break;
   }
   if (!VAR_16->wedged)
    VAR_16->halted = 0;
   VAR_18 = 0;
   *VAR_15 = 0;
  }
  break;
 case 130:
  if (VAR_14->bRequestType == VAR_0
    || VAR_14->bRequestType == VAR_6
    || VAR_14->bRequestType == VAR_3) {
   char *VAR_21;





   VAR_21 = (char *)VAR_13->transfer_buffer;
   if (VAR_13->transfer_buffer_length > 0) {
    if (VAR_14->bRequestType == VAR_3) {
     VAR_16 = FUNC_2(VAR_17, VAR_19);
     if (!VAR_16) {
      VAR_18 = -VAR_2;
      break;
     }
     VAR_21[0] = VAR_16->halted;
    } else if (VAR_14->bRequestType ==
        VAR_0) {
     VAR_21[0] = (u8)VAR_17->devstatus;
    } else
     VAR_21[0] = 0;
   }
   if (VAR_13->transfer_buffer_length > 1)
    VAR_21[1] = 0;
   VAR_13->actual_length = FUNC_4(VAR_11, 2,
    VAR_13->transfer_buffer_length);
   VAR_18 = 0;
   *VAR_15 = 0;
  }
  break;
 }
 return VAR_18;
}
