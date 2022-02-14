
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vprbrd {int usb_dev; } ;
struct usb_interface {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct vprbrd*) ;
 int FUNC_2 (int *) ;
 struct vprbrd* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_0)
{
 struct vprbrd *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(&VAR_0->dev);
 FUNC_5(VAR_0, ((void*)0));
 FUNC_4(VAR_1->usb_dev);
 FUNC_1(VAR_1);

 FUNC_0(&VAR_0->dev, "disconnected\n");
}
