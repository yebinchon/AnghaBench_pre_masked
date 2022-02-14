
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_2__* elements; } ;
union acpi_object {scalar_t__ type; TYPE_3__ package; } ;
struct acpi_pld_info {scalar_t__ user_visible; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef enum usb_port_connect_type { ____Placeholder_usb_port_connect_type } usb_port_connect_type ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_1 (union acpi_object*) ;

__attribute__((used)) static enum usb_port_connect_type FUNC_2(acpi_handle VAR_6,
  struct acpi_pld_info *VAR_7)
{
 enum usb_port_connect_type VAR_8 = VAR_4;
 struct acpi_buffer VAR_9 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_10;
 acpi_status VAR_11;
 VAR_11 = FUNC_0(VAR_6, "_UPC", ((void*)0), &VAR_9);
 VAR_10 = VAR_9.pointer;
 if (!VAR_10 || (VAR_10->type != VAR_1)
  || VAR_10->package.count != 4) {
  goto out;
 }

 if (VAR_10->package.elements[0].integer.value)
  if (VAR_7->user_visible)
   VAR_8 = VAR_3;
  else
   VAR_8 = VAR_2;
 else if (!VAR_7->user_visible)
  VAR_8 = VAR_5;
out:
 FUNC_1(VAR_10);
 return VAR_8;
}
