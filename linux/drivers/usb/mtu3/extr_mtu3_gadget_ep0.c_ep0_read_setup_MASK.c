
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct usb_ctrlrequest {int bRequestType; int wLength; int wIndex; int wValue; int bRequest; } ;
struct mtu3_request {int request; } ;
struct mtu3 {int ep0_state; int mac_base; int dev; int ep0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct mtu3*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 struct mtu3_request* FUNC_6 (struct mtu3*) ;

__attribute__((used)) static void FUNC_7(struct mtu3 *VAR_8, struct usb_ctrlrequest *VAR_9)
{
 struct mtu3_request *VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 VAR_12 = FUNC_4(VAR_8->mac_base, VAR_5) & VAR_2;
 VAR_11 = FUNC_4(VAR_8->mac_base, VAR_6);

 FUNC_1(VAR_8->ep0, (u8 *)VAR_9, VAR_11);

 FUNC_0(VAR_8->dev, "SETUP req%02x.%02x v%04x i%04x l%04x\n",
   VAR_9->bRequestType, VAR_9->bRequest,
   FUNC_3(VAR_9->wValue), FUNC_3(VAR_9->wIndex),
   FUNC_3(VAR_9->wLength));


 VAR_10 = FUNC_6(VAR_8);
 if (VAR_10)
  FUNC_2(VAR_8, &VAR_10->request);

 if (FUNC_3(VAR_9->wLength) == 0) {
  ;
 } else if (VAR_9->bRequestType & VAR_7) {
  FUNC_5(VAR_8->mac_base, VAR_5,
   VAR_12 | VAR_1 | VAR_0);
  VAR_8->ep0_state = VAR_4;
 } else {
  FUNC_5(VAR_8->mac_base, VAR_5,
   (VAR_12 | VAR_1) & (~VAR_0));
  VAR_8->ep0_state = VAR_3;
 }
}
