
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_skel {struct usb_skel* bulk_in_buffer; int udev; int interface; int bulk_in_urb; } ;
struct kref {int dummy; } ;


 int FUNC_0 (struct usb_skel*) ;
 struct usb_skel* FUNC_1 (struct kref*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct kref *VAR_0)
{
 struct usb_skel *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->bulk_in_urb);
 FUNC_4(VAR_1->interface);
 FUNC_3(VAR_1->udev);
 FUNC_0(VAR_1->bulk_in_buffer);
 FUNC_0(VAR_1);
}
