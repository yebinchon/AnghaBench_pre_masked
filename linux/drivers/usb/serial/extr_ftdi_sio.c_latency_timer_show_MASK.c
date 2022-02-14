
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct ftdi_private {int flags; int latency; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 struct usb_serial_port* FUNC_1 (struct device*) ;
 struct ftdi_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct usb_serial_port *VAR_4 = FUNC_1(VAR_1);
 struct ftdi_private *VAR_5 = FUNC_2(VAR_4);
 if (VAR_5->flags & VAR_0)
  return FUNC_0(VAR_3, "1\n");
 else
  return FUNC_0(VAR_3, "%i\n", VAR_5->latency);
}
