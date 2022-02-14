
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* parent; } ;
struct usb_port {int portnum; TYPE_2__ dev; } ;
struct usb_device {int portnum; int parent; int bus; int dev; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_handle ;
struct TYPE_3__ {int parent; } ;


 struct acpi_device* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct acpi_device**) ;
 int FUNC_2 (int ) ;
 struct usb_device* FUNC_3 (int ) ;
 struct acpi_device* FUNC_4 (struct acpi_device*,int) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static struct acpi_device *
FUNC_7(struct usb_port *VAR_0)
{
 struct usb_device *VAR_1;
 struct acpi_device *VAR_2;
 acpi_handle *VAR_3;
 int VAR_4;


 VAR_1 = FUNC_3(VAR_0->dev.parent->parent);






 if (!VAR_1->parent) {
  VAR_2 = FUNC_0(&VAR_1->dev);
  VAR_4 = FUNC_6(FUNC_2(VAR_1->bus),
           VAR_0->portnum);
 } else {
  VAR_3 = FUNC_5(VAR_1->parent,
            VAR_1->portnum);
  if (!VAR_3)
   return ((void*)0);

  FUNC_1(VAR_3, &VAR_2);
  VAR_4 = VAR_0->portnum;
 }

 return FUNC_4(VAR_2, VAR_4);
}
