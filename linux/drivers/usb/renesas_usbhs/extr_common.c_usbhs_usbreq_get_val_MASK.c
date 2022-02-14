
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;
struct usb_ctrlrequest {int bRequest; int bRequestType; void* wLength; void* wIndex; void* wValue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct usbhs_priv*,int ) ;

void FUNC_2(struct usbhs_priv *VAR_4, struct usb_ctrlrequest *VAR_5)
{
 u16 VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_2);
 VAR_5->bRequest = (VAR_6 >> 8) & 0xFF;
 VAR_5->bRequestType = (VAR_6 >> 0) & 0xFF;

 VAR_5->wValue = FUNC_0(FUNC_1(VAR_4, VAR_3));
 VAR_5->wIndex = FUNC_0(FUNC_1(VAR_4, VAR_0));
 VAR_5->wLength = FUNC_0(FUNC_1(VAR_4, VAR_1));
}
