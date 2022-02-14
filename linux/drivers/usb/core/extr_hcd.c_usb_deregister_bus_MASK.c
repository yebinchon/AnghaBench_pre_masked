
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int busnum; int controller; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct usb_bus*) ;

__attribute__((used)) static void FUNC_5 (struct usb_bus *VAR_2)
{
 FUNC_0 (VAR_2->controller, "USB bus %d deregistered\n", VAR_2->busnum);






 FUNC_2(&VAR_1);
 FUNC_1(&VAR_0, VAR_2->busnum);
 FUNC_3(&VAR_1);

 FUNC_4(VAR_2);
}
