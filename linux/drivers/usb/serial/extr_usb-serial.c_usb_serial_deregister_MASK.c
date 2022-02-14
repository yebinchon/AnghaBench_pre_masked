
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_driver {int driver_list; int description; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct usb_serial_driver*) ;

__attribute__((used)) static void FUNC_5(struct usb_serial_driver *VAR_1)
{
 FUNC_3("USB Serial deregistering driver %s\n", VAR_1->description);

 FUNC_1(&VAR_0);
 FUNC_0(&VAR_1->driver_list);
 FUNC_2(&VAR_0);

 FUNC_4(VAR_1);
}
