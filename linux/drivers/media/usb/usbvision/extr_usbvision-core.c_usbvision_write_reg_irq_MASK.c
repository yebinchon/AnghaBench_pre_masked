
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bRequestType; void* wLength; void* wIndex; scalar_t__ wValue; int bRequest; } ;
struct usb_usbvision {int ctrl_urb_busy; int ctrl_urb; scalar_t__ ctrl_urb_buffer; TYPE_1__ ctrl_urb_setup; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,unsigned char*,int) ;
 int FUNC_3 (int ,int ,int ,unsigned char*,void*,int,int ,void*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_6(struct usb_usbvision *VAR_9, int VAR_10,
    unsigned char *VAR_11, int VAR_12)
{
 int VAR_13 = 0;

 FUNC_0(VAR_0, "");
 if (VAR_12 > 8)
  return -VAR_2;
 if (VAR_9->ctrl_urb_busy)
  return -VAR_1;
 VAR_9->ctrl_urb_busy = 1;

 VAR_9->ctrl_urb_setup.bRequestType = VAR_5 | VAR_7 | VAR_6;
 VAR_9->ctrl_urb_setup.bRequest = VAR_4;
 VAR_9->ctrl_urb_setup.wValue = 0;
 VAR_9->ctrl_urb_setup.wIndex = FUNC_1(VAR_10);
 VAR_9->ctrl_urb_setup.wLength = FUNC_1(VAR_12);
 FUNC_3(VAR_9->ctrl_urb, VAR_9->dev,
       FUNC_4(VAR_9->dev, 1),
       (unsigned char *)&VAR_9->ctrl_urb_setup,
       (void *)VAR_9->ctrl_urb_buffer, VAR_12,
       VAR_8,
       (void *)VAR_9);

 FUNC_2(VAR_9->ctrl_urb_buffer, VAR_11, VAR_12);

 VAR_13 = FUNC_5(VAR_9->ctrl_urb, VAR_3);
 if (VAR_13 < 0) {

  VAR_9->ctrl_urb_busy = 0;
 }
 FUNC_0(VAR_0, "submit %d byte: error %d", VAR_12, VAR_13);
 return VAR_13;
}
