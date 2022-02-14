
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int bRequestType; scalar_t__ wLength; void* wIndex; void* wValue; int bRequest; } ;
struct bcm63xx_udc {int alt_iface; int iface; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm63xx_udc*,struct usb_ctrlrequest*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct bcm63xx_udc *VAR_3)
{
 struct usb_ctrlrequest VAR_4;
 int VAR_5;

 VAR_4.bRequestType = VAR_0 | VAR_1;
 VAR_4.bRequest = VAR_2;
 VAR_4.wValue = FUNC_1(VAR_3->alt_iface);
 VAR_4.wIndex = FUNC_1(VAR_3->iface);
 VAR_4.wLength = 0;

 VAR_5 = FUNC_0(VAR_3, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_2(VAR_3->dev,
   "hardware auto-acked bad SET_INTERFACE(%d,%d) request\n",
   VAR_3->iface, VAR_3->alt_iface);
 }
 return VAR_5;
}
