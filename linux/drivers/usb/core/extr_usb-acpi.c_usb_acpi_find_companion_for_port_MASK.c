
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_port {int location; int connect_type; } ;
struct acpi_pld_info {int group_token; int group_position; } ;
struct acpi_device {int * handle; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_pld_info*) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct acpi_pld_info**) ;
 struct acpi_device* FUNC_3 (struct usb_port*) ;
 int FUNC_4 (int *,struct acpi_pld_info*) ;

__attribute__((used)) static struct acpi_device *
FUNC_5(struct usb_port *VAR_1)
{
 struct acpi_device *VAR_2;
 struct acpi_pld_info *VAR_3;
 acpi_handle *VAR_4;
 acpi_status VAR_5;

 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  return ((void*)0);

 VAR_4 = VAR_2->handle;
 VAR_5 = FUNC_2(VAR_4, &VAR_3);
 if (!FUNC_0(VAR_5) && VAR_3) {
  VAR_1->location = VAR_0
   | VAR_3->group_token << 8 | VAR_3->group_position;
  VAR_1->connect_type = FUNC_4(VAR_4, VAR_3);
  FUNC_1(VAR_3);
 }

 return VAR_2;
}
