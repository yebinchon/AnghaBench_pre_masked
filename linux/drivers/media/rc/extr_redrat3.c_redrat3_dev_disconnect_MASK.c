
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct redrat3_dev {int led; int rc; } ;


 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct redrat3_dev*,struct usb_device*) ;
 struct redrat3_dev* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct usb_device *VAR_1 = FUNC_0(VAR_0);
 struct redrat3_dev *VAR_2 = FUNC_4(VAR_0);

 FUNC_5(VAR_0, ((void*)0));
 FUNC_2(VAR_2->rc);
 FUNC_1(&VAR_2->led);
 FUNC_3(VAR_2, VAR_1);
}
