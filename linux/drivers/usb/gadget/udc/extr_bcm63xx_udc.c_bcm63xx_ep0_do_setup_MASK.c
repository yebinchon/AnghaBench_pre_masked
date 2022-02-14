
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int bRequestType; int wLength; } ;
struct bcm63xx_udc {int * bep; int dev; scalar_t__ ep0_ctrl_buf; } ;
typedef enum bcm63xx_ep0_state { ____Placeholder_bcm63xx_ep0_state } bcm63xx_ep0_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm63xx_udc*) ;
 int FUNC_1 (struct bcm63xx_udc*,struct usb_ctrlrequest*) ;
 int FUNC_2 (struct bcm63xx_udc*,int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static enum bcm63xx_ep0_state FUNC_5(struct bcm63xx_udc *VAR_5)
{
 int VAR_6;
 struct usb_ctrlrequest *VAR_7 = (void *)VAR_5->ep0_ctrl_buf;

 VAR_6 = FUNC_0(VAR_5);

 if (VAR_6 < 0) {
  FUNC_3(VAR_5->dev, "missing SETUP packet\n");
  return VAR_0;
 }






 if (VAR_6 == 0)
  return VAR_3;


 if (VAR_6 != sizeof(*VAR_7)) {
  FUNC_4(VAR_5->dev,
   "malformed SETUP packet (%d bytes)\n", VAR_6);
  return VAR_3;
 }


 VAR_6 = FUNC_1(VAR_5, VAR_7);
 if (VAR_6 < 0) {
  FUNC_2(VAR_5, &VAR_5->bep[0], 1);
  return VAR_3;
 }

 if (!VAR_7->wLength)
  return VAR_3;
 else if (VAR_7->bRequestType & VAR_4)
  return VAR_1;
 else
  return VAR_2;
}
