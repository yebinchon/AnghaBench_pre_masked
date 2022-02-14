
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_driver {TYPE_2__* usb_driver; int id_table; int dynids; } ;
struct device_driver {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {struct device_driver driver; } ;
struct TYPE_4__ {TYPE_1__ drvwrap; int id_table; int dynids; } ;


 struct usb_serial_driver* FUNC_0 (struct device_driver*) ;
 scalar_t__ FUNC_1 (int *,int ,struct device_driver*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct device_driver *VAR_0,
       const char *VAR_1, size_t VAR_2)
{
 struct usb_serial_driver *VAR_3 = FUNC_0(VAR_0);
 ssize_t VAR_4 = FUNC_1(&VAR_3->dynids, VAR_3->id_table,
      VAR_0, VAR_1, VAR_2);

 if (VAR_4 >= 0 && VAR_3->usb_driver != ((void*)0))
  VAR_4 = FUNC_1(&VAR_3->usb_driver->dynids,
       VAR_3->usb_driver->id_table,
       &VAR_3->usb_driver->drvwrap.driver,
       VAR_1, VAR_2);
 return VAR_4;
}
