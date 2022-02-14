
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pointer; int length; } ;
struct TYPE_5__ {scalar_t__ value; } ;
union acpi_object {TYPE_3__ buffer; int type; TYPE_2__ integer; } ;
typedef scalar_t__ u8 ;
struct guid_block {scalar_t__ instance_count; int flags; int object_id; } ;
struct wmi_block {TYPE_1__* acpi_device; struct guid_block gblock; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {int pointer; int length; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_4__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,struct acpi_object_list*,int *) ;
 int FUNC_1 (char const*,struct wmi_block**) ;
 int FUNC_2 (char*,int ,int) ;

acpi_status FUNC_3(const char *VAR_9, u8 VAR_10,
     const struct acpi_buffer *VAR_11)
{
 struct guid_block *VAR_12 = ((void*)0);
 struct wmi_block *VAR_13 = ((void*)0);
 acpi_handle VAR_14;
 struct acpi_object_list VAR_15;
 union acpi_object VAR_16[2];
 char VAR_17[5] = "WS";

 if (!VAR_9 || !VAR_11)
  return VAR_6;

 if (!FUNC_1(VAR_9, &VAR_13))
  return VAR_8;

 VAR_12 = &VAR_13->gblock;
 VAR_14 = VAR_13->acpi_device->handle;

 if (VAR_12->instance_count <= VAR_10)
  return VAR_7;


 if (VAR_12->flags & (VAR_3 | VAR_4))
  return VAR_8;

 VAR_15.count = 2;
 VAR_15.pointer = VAR_16;
 VAR_16[0].type = VAR_1;
 VAR_16[0].integer.value = VAR_10;

 if (VAR_12->flags & VAR_5) {
  VAR_16[1].type = VAR_2;
 } else {
  VAR_16[1].type = VAR_0;
 }
 VAR_16[1].buffer.length = VAR_11->length;
 VAR_16[1].buffer.pointer = VAR_11->pointer;

 FUNC_2(VAR_17, VAR_12->object_id, 2);

 return FUNC_0(VAR_14, VAR_17, &VAR_15, ((void*)0));
}
