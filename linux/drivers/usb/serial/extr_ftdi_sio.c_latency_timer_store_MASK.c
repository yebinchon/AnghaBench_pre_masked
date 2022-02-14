
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dummy; } ;
struct ftdi_private {int latency; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int,int *) ;
 struct usb_serial_port* FUNC_1 (struct device*) ;
 struct ftdi_private* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
       struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct usb_serial_port *VAR_6 = FUNC_1(VAR_2);
 struct ftdi_private *VAR_7 = FUNC_2(VAR_6);
 u8 VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_4, 10, &VAR_8))
  return -VAR_0;

 VAR_7->latency = VAR_8;
 VAR_9 = FUNC_3(VAR_6);
 if (VAR_9 < 0)
  return -VAR_1;
 return VAR_5;
}
