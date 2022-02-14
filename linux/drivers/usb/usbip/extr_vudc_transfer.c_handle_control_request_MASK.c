
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_5__ {int b_hnp_enable; int a_hnp_support; int a_alt_hnp_support; } ;
struct vudc {unsigned int address; int devstatus; TYPE_4__* ep; TYPE_1__ gadget; } ;
struct TYPE_6__ {int name; } ;
struct vep {int halted; int wedged; TYPE_2__ ep; } ;
struct usb_ctrlrequest {int bRequest; int bRequestType; int wValue; int wIndex; } ;
struct urb {int transfer_buffer_length; int actual_length; scalar_t__ transfer_buffer; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_8__ {TYPE_3__ ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_6 ;
 struct vep* FUNC_2 (struct vudc*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct vudc *VAR_7, struct urb *VAR_8,
      struct usb_ctrlrequest *VAR_9,
      int *VAR_10)
{
 struct vep *VAR_11;
 int VAR_12 = 1;
 unsigned int VAR_13;
 unsigned int VAR_14;

 VAR_13 = FUNC_0(VAR_9->wIndex);
 VAR_14 = FUNC_0(VAR_9->wValue);
 switch (VAR_9->bRequest) {
 case 129:
  if (VAR_9->bRequestType != VAR_1)
   break;
  VAR_7->address = VAR_14;
  VAR_12 = 0;
  *VAR_10 = 0;
  break;
 case 128:
  if (VAR_9->bRequestType == VAR_1) {
   VAR_12 = 0;
   switch (VAR_14) {
   case 134:
    break;
   case 136:
    VAR_7->gadget.b_hnp_enable = 1;
    break;
   case 137:
    VAR_7->gadget.a_hnp_support = 1;
    break;
   case 138:
    VAR_7->gadget.a_alt_hnp_support = 1;
    break;
   default:
    VAR_12 = -VAR_2;
   }
   if (VAR_12 == 0) {
    VAR_7->devstatus |= (1 << VAR_14);
    *VAR_10 = 0;
   }
  } else if (VAR_9->bRequestType == VAR_4) {

   VAR_11 = FUNC_2(VAR_7, VAR_13);
   if (!VAR_11 || VAR_11->ep.name == VAR_7->ep[0].ep.name) {
    VAR_12 = -VAR_2;
    break;
   }
   VAR_11->halted = 1;
   VAR_12 = 0;
   *VAR_10 = 0;
  }
  break;
 case 131:
  if (VAR_9->bRequestType == VAR_1) {
   VAR_12 = 0;
   switch (VAR_14) {
   case 134:
    VAR_14 = 134;
    break;

   case 133:
   case 132:
   case 135:
    VAR_12 = -VAR_2;
    break;
   default:
    VAR_12 = -VAR_2;
    break;
   }
   if (VAR_12 == 0) {
    VAR_7->devstatus &= ~(1 << VAR_14);
    *VAR_10 = 0;
   }
  } else if (VAR_9->bRequestType == VAR_4) {

   VAR_11 = FUNC_2(VAR_7, VAR_13);
   if (!VAR_11) {
    VAR_12 = -VAR_2;
    break;
   }
   if (!VAR_11->wedged)
    VAR_11->halted = 0;
   VAR_12 = 0;
   *VAR_10 = 0;
  }
  break;
 case 130:
  if (VAR_9->bRequestType == VAR_0
    || VAR_9->bRequestType == VAR_5
    || VAR_9->bRequestType == VAR_3) {
   char *VAR_15;





   VAR_15 = (char *)VAR_8->transfer_buffer;
   if (VAR_8->transfer_buffer_length > 0) {
    if (VAR_9->bRequestType == VAR_3) {
     VAR_11 = FUNC_2(VAR_7, VAR_13);
     if (!VAR_11) {
      VAR_12 = -VAR_2;
      break;
     }
     VAR_15[0] = VAR_11->halted;
    } else if (VAR_9->bRequestType ==
        VAR_0) {
     VAR_15[0] = (u8)VAR_7->devstatus;
    } else
     VAR_15[0] = 0;
   }
   if (VAR_8->transfer_buffer_length > 1)
    VAR_15[1] = 0;
   VAR_8->actual_length = FUNC_1(VAR_6, 2,
    VAR_8->transfer_buffer_length);
   VAR_12 = 0;
   *VAR_10 = 0;
  }
  break;
 }
 return VAR_12;
}
