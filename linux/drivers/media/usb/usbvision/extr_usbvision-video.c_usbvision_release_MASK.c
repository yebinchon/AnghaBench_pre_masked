
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int v4l2_dev; int hdl; int ctrl_urb; struct usb_usbvision* alt_max_pkt_size; int vdev; scalar_t__ initialized; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct usb_usbvision*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_usbvision*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct usb_usbvision *VAR_1)
{
 FUNC_0(VAR_0, "");

 VAR_1->initialized = 0;

 FUNC_3(&VAR_1->vdev);
 FUNC_4(VAR_1);
 FUNC_1(VAR_1->alt_max_pkt_size);

 FUNC_2(VAR_1->ctrl_urb);

 FUNC_5(&VAR_1->hdl);
 FUNC_6(&VAR_1->v4l2_dev);
 FUNC_1(VAR_1);

 FUNC_0(VAR_0, "success");
}
