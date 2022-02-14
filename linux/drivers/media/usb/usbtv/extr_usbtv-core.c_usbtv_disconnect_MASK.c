
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtv {int v4l2_dev; int * udev; } ;
struct usb_interface {int dummy; } ;


 struct usbtv* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_interface*,int *) ;
 int FUNC_3 (struct usbtv*) ;
 int FUNC_4 (struct usbtv*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct usbtv *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_0, ((void*)0));

 if (!VAR_1)
  return;

 FUNC_3(VAR_1);
 FUNC_4(VAR_1);

 FUNC_1(VAR_1->udev);
 VAR_1->udev = ((void*)0);



 FUNC_5(&VAR_1->v4l2_dev);
}
