
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct usb_request {scalar_t__ context; } ;
struct usb_ep {int dummy; } ;
struct usb_ctrlrequest {int bRequestType; scalar_t__ bRequest; int wIndex; int wValue; } ;
struct nbu2ss_udc {struct usb_ctrlrequest ctrl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nbu2ss_udc*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct usb_ep *VAR_6, struct usb_request *VAR_7)
{
 u8 VAR_8;
 u16 VAR_9;
 u16 VAR_10;
 u32 VAR_11;
 struct usb_ctrlrequest *VAR_12;
 struct nbu2ss_udc *VAR_13;

 if (!VAR_6 || !VAR_7)
  return;

 VAR_13 = (struct nbu2ss_udc *)VAR_7->context;
 VAR_12 = &VAR_13->ctrl;
 if ((VAR_12->bRequestType & VAR_4) == VAR_5) {
  if (VAR_12->bRequest == VAR_3) {


   VAR_8 = (u8)(VAR_12->bRequestType & VAR_2);
   VAR_9 = FUNC_1(VAR_12->wValue);
   if ((VAR_8 == VAR_1) &&
       (VAR_9 == VAR_0)) {
    VAR_10 = FUNC_1(VAR_12->wIndex);
    VAR_11 = (u32)(VAR_10 >> 8);
    FUNC_0(VAR_13, VAR_11);
   }
  }
 }
}
