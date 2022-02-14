
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct usb_interface*) ;
 struct usb_interface* FUNC_1 (struct usb_device*,int) ;
 int FUNC_2 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_3(struct usb_device *VAR_1,
     int VAR_2)
{
 struct usb_interface *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_1(VAR_1, VAR_4);
  if (VAR_3) {
   FUNC_2(VAR_3, ((void*)0));
   FUNC_0(&VAR_0, VAR_3);
  }
 }
}
