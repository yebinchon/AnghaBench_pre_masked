
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct cypress {int udev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct cypress*) ;
 struct cypress* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_0)
{
 struct cypress *VAR_1;

 VAR_1 = FUNC_2(VAR_0);



 FUNC_4(VAR_0, ((void*)0));

 FUNC_3(VAR_1->udev);

 FUNC_0(&VAR_0->dev,
   "Cypress CY7C63xxx device now disconnected\n");

 FUNC_1(VAR_1);
}
