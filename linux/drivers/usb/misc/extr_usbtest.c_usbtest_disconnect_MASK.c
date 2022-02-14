
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtest_dev {int dummy; } ;
struct usb_interface {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usbtest_dev*) ;
 struct usbtest_dev* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_0)
{
 struct usbtest_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_0, ((void*)0));
 FUNC_0(&VAR_0->dev, "disconnect\n");
 FUNC_1(VAR_1);
}
