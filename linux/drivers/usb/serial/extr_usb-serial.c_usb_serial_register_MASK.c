
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ name; } ;
struct usb_serial_driver {scalar_t__ description; int driver_list; int usb_driver; TYPE_1__ driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,scalar_t__) ;
 int FUNC_6 (char*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct usb_serial_driver*) ;
 int VAR_3 ;
 int FUNC_9 (struct usb_serial_driver*) ;

__attribute__((used)) static int FUNC_10(struct usb_serial_driver *VAR_4)
{
 int VAR_5;

 if (FUNC_7())
  return -VAR_1;

 if (!VAR_4->description)
  VAR_4->description = VAR_4->driver.name;
 if (!VAR_4->usb_driver) {
  FUNC_0(1, "Serial driver %s has no usb_driver\n",
    VAR_4->description);
  return -VAR_0;
 }

 FUNC_9(VAR_4);


 FUNC_3(&VAR_2);
 FUNC_1(&VAR_4->driver_list, &VAR_3);

 VAR_5 = FUNC_8(VAR_4);
 if (VAR_5) {
  FUNC_5("problem %d when registering driver %s\n", VAR_5, VAR_4->description);
  FUNC_2(&VAR_4->driver_list);
 } else {
  FUNC_6("USB Serial support registered for %s\n", VAR_4->description);
 }
 FUNC_4(&VAR_2);
 return VAR_5;
}
