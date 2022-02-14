
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct usb_interface {struct device dev; } ;
struct cbaf {int buffer; int usb_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cbaf*) ;
 int FUNC_2 (int *,int *) ;
 struct cbaf* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_1)
{
 struct cbaf *VAR_2 = FUNC_3(VAR_1);
 struct device *VAR_3 = &VAR_1->dev;
 FUNC_2(&VAR_3->kobj, &VAR_0);
 FUNC_6(VAR_1, ((void*)0));
 FUNC_5(VAR_1);
 FUNC_4(VAR_2->usb_dev);
 FUNC_0(VAR_2->buffer);

 FUNC_1(VAR_2);
}
