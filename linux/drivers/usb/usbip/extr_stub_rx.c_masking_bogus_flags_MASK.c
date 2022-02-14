
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int desc; } ;
struct usb_device {scalar_t__ state; struct usb_host_endpoint** ep_out; struct usb_host_endpoint** ep_in; } ;
struct usb_ctrlrequest {int bRequestType; int wLength; } ;
struct urb {unsigned int transfer_flags; scalar_t__ setup_packet; int pipe; struct usb_device* dev; int complete; scalar_t__ hcpriv; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;

 scalar_t__ VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_10)
{
 int VAR_11;
 struct usb_device *VAR_12;
 struct usb_host_endpoint *VAR_13;
 int VAR_14;
 unsigned int VAR_15;

 if (!VAR_10 || VAR_10->hcpriv || !VAR_10->complete)
  return;
 VAR_12 = VAR_10->dev;
 if ((!VAR_12) || (VAR_12->state < VAR_9))
  return;

 VAR_13 = (FUNC_3(VAR_10->pipe) ? VAR_12->ep_in : VAR_12->ep_out)
  [FUNC_2(VAR_10->pipe)];
 if (!VAR_13)
  return;

 VAR_11 = FUNC_1(&VAR_13->desc);
 if (VAR_11 == VAR_8) {
  struct usb_ctrlrequest *VAR_16 =
   (struct usb_ctrlrequest *) VAR_10->setup_packet;

  if (!VAR_16)
   return;
  VAR_14 = !(VAR_16->bRequestType & VAR_7) ||
   !VAR_16->wLength;
 } else {
  VAR_14 = FUNC_0(&VAR_13->desc);
 }


 VAR_15 = (VAR_4 | VAR_3 |
     VAR_0 | VAR_1);
 switch (VAR_11) {
 case 129:
  if (VAR_14)
   VAR_15 |= VAR_6;

 default:
  if (!VAR_14)
   VAR_15 |= VAR_5;
  break;
 case 128:
  VAR_15 |= VAR_2;
  break;
 }
 VAR_10->transfer_flags &= VAR_15;
}
