
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* find_raw_port_number ) (struct usb_hcd*,int) ;} ;


 int FUNC_0 (struct usb_hcd*,int) ;

int FUNC_1(struct usb_hcd *VAR_0, int VAR_1)
{
 if (!VAR_0->driver->find_raw_port_number)
  return VAR_1;

 return VAR_0->driver->find_raw_port_number(VAR_0, VAR_1);
}
