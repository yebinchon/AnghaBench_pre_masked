
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int bRequestType; scalar_t__ wLength; scalar_t__ wIndex; int wValue; int bRequest; } ;
struct bcm63xx_udc {int cfg; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm63xx_udc*,struct usb_ctrlrequest*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct bcm63xx_udc *VAR_3)
{
 struct usb_ctrlrequest VAR_4;
 int VAR_5;

 VAR_4.bRequestType = VAR_0 | VAR_1;
 VAR_4.bRequest = VAR_2;
 VAR_4.wValue = FUNC_1(VAR_3->cfg);
 VAR_4.wIndex = 0;
 VAR_4.wLength = 0;

 VAR_5 = FUNC_0(VAR_3, &VAR_4);
 if (VAR_5 < 0) {
  FUNC_2(VAR_3->dev,
   "hardware auto-acked bad SET_CONFIGURATION(%d) request\n",
   VAR_3->cfg);
 }
 return VAR_5;
}
