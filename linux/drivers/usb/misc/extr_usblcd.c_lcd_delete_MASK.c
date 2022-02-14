
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_lcd {struct usb_lcd* bulk_in_buffer; int udev; } ;
struct kref {int dummy; } ;


 int FUNC_0 (struct usb_lcd*) ;
 struct usb_lcd* FUNC_1 (struct kref*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kref *VAR_0)
{
 struct usb_lcd *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->udev);
 FUNC_0(VAR_1->bulk_in_buffer);
 FUNC_0(VAR_1);
}
