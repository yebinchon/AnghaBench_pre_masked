
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
typedef scalar_t__ acpi_handle ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct usb_device*,int) ;

bool FUNC_2(struct usb_device *VAR_0, int VAR_1)
{
 acpi_handle VAR_2;
 int VAR_3 = VAR_1 + 1;

 VAR_2 = FUNC_1(VAR_0,
  VAR_3);
 if (VAR_2)
  return FUNC_0(VAR_2);
 else
  return 0;
}
