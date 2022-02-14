
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct ttusbir {TYPE_1__* bulk_urb; TYPE_1__** urb; int led; int rc; struct usb_device* udev; } ;
struct TYPE_3__ {int transfer_dma; int transfer_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (struct ttusbir*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_device*,int,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 struct ttusbir* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_1)
{
 struct ttusbir *VAR_2 = FUNC_5(VAR_1);
 struct usb_device *VAR_3 = VAR_2->udev;
 int VAR_4;

 VAR_2->udev = ((void*)0);

 FUNC_2(VAR_2->rc);
 FUNC_1(&VAR_2->led);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_6(VAR_2->urb[VAR_4]);
  FUNC_3(VAR_3, 128, VAR_2->urb[VAR_4]->transfer_buffer,
      VAR_2->urb[VAR_4]->transfer_dma);
  FUNC_4(VAR_2->urb[VAR_4]);
 }
 FUNC_6(VAR_2->bulk_urb);
 FUNC_4(VAR_2->bulk_urb);
 FUNC_7(VAR_1, ((void*)0));
 FUNC_0(VAR_2);
}
