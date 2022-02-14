
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usb_ctrlrequest {int bRequest; int bRequestType; int wLength; int wIndex; int wValue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usbhs_priv*,int ,int ,int ) ;
 int FUNC_2 (struct usbhs_priv*,int ,int) ;

void FUNC_3(struct usbhs_priv *VAR_6, struct usb_ctrlrequest *VAR_7)
{
 FUNC_2(VAR_6, VAR_4, (VAR_7->bRequest << 8) | VAR_7->bRequestType);
 FUNC_2(VAR_6, VAR_5, FUNC_0(VAR_7->wValue));
 FUNC_2(VAR_6, VAR_2, FUNC_0(VAR_7->wIndex));
 FUNC_2(VAR_6, VAR_3, FUNC_0(VAR_7->wLength));

 FUNC_1(VAR_6, VAR_0, VAR_1, VAR_1);
}
