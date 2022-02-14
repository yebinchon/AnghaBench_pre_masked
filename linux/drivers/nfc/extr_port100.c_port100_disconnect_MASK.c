
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct port100 {int cmd; int udev; int out_urb; int in_urb; int nfc_digital_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ) ;
 struct port100* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_0)
{
 struct port100 *VAR_1;

 VAR_1 = FUNC_5(VAR_0);
 FUNC_8(VAR_0, ((void*)0));

 FUNC_2(VAR_1->nfc_digital_dev);
 FUNC_1(VAR_1->nfc_digital_dev);

 FUNC_6(VAR_1->in_urb);
 FUNC_6(VAR_1->out_urb);

 FUNC_4(VAR_1->in_urb);
 FUNC_4(VAR_1->out_urb);
 FUNC_7(VAR_1->udev);

 FUNC_0(VAR_1->cmd);

 FUNC_3(&VAR_0->dev, "Sony Port-100 NFC device disconnected\n");
}
