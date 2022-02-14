
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_sevsegdev {int udev; } ;
struct usb_interface {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usb_sevsegdev*) ;
 struct usb_sevsegdev* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_0)
{
 struct usb_sevsegdev *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_4(VAR_0, ((void*)0));
 FUNC_3(VAR_1->udev);
 FUNC_1(VAR_1);
 FUNC_0(&VAR_0->dev, "USB 7 Segment now disconnected\n");
}
