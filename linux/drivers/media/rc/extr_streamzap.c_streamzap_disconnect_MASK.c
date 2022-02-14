
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct streamzap_ir {int dma_in; int buf_in; int buf_in_len; int urb_in; int rdev; int * usbdev; } ;


 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct streamzap_ir*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_device*,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 struct streamzap_ir* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_0)
{
 struct streamzap_ir *VAR_1 = FUNC_5(VAR_0);
 struct usb_device *VAR_2 = FUNC_0(VAR_0);

 FUNC_7(VAR_0, ((void*)0));

 if (!VAR_1)
  return;

 VAR_1->usbdev = ((void*)0);
 FUNC_2(VAR_1->rdev);
 FUNC_6(VAR_1->urb_in);
 FUNC_4(VAR_1->urb_in);
 FUNC_3(VAR_2, VAR_1->buf_in_len, VAR_1->buf_in, VAR_1->dma_in);

 FUNC_1(VAR_1);
}
