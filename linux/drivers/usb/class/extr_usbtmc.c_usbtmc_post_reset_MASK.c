
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtmc_device_data {int io_mutex; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (int *) ;
 struct usbtmc_device_data* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_0)
{
 struct usbtmc_device_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->io_mutex);

 return 0;
}
