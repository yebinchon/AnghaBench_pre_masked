
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_port {int dev; } ;
struct usb_hub {struct usb_port** ports; } ;
struct usb_device {int dummy; } ;
typedef scalar_t__ acpi_handle ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,unsigned char) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ FUNC_2 (struct usb_device*,int) ;
 struct usb_hub* FUNC_3 (struct usb_device*) ;

int FUNC_4(struct usb_device *VAR_4, int VAR_5, bool VAR_6)
{
 struct usb_hub *VAR_7 = FUNC_3(VAR_4);
 struct usb_port *VAR_8;
 acpi_handle VAR_9;
 unsigned char VAR_10;
 int VAR_11 = VAR_5 + 1;
 int VAR_12 = -VAR_2;

 if (!VAR_7)
  return -VAR_3;
 VAR_8 = VAR_7->ports[VAR_11 - 1];

 VAR_9 = (acpi_handle) FUNC_2(VAR_4, VAR_11);
 if (!VAR_9)
  return VAR_12;

 if (VAR_6)
  VAR_10 = VAR_0;
 else
  VAR_10 = VAR_1;

 VAR_12 = FUNC_0(VAR_9, VAR_10);
 if (!VAR_12)
  FUNC_1(&VAR_8->dev, "acpi: power was set to %d\n", VAR_6);
 else
  FUNC_1(&VAR_8->dev, "acpi: power failed to be set\n");

 return VAR_12;
}
