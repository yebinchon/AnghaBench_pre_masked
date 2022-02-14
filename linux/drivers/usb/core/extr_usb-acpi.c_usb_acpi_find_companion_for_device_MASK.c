
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_port {int dummy; } ;
struct usb_hub {struct usb_port** ports; } ;
struct TYPE_2__ {int parent; } ;
struct usb_device {int portnum; int parent; TYPE_1__ dev; } ;
struct acpi_device {int dummy; } ;


 struct acpi_device* FUNC_0 (int ) ;
 struct acpi_device* FUNC_1 (struct acpi_device*,int ,int) ;
 struct acpi_device* FUNC_2 (struct usb_port*) ;
 struct usb_hub* FUNC_3 (int ) ;

__attribute__((used)) static struct acpi_device *
FUNC_4(struct usb_device *VAR_0)
{
 struct acpi_device *VAR_1;
 struct usb_port *VAR_2;
 struct usb_hub *VAR_3;

 if (!VAR_0->parent) {

  VAR_1 = FUNC_0(VAR_0->dev.parent);
  return FUNC_1(VAR_1, 0, 0);
 }

 VAR_3 = FUNC_3(VAR_0->parent);
 if (!VAR_3)
  return ((void*)0);





 VAR_2 = VAR_3->ports[VAR_0->portnum - 1];
 return FUNC_2(VAR_2);
}
