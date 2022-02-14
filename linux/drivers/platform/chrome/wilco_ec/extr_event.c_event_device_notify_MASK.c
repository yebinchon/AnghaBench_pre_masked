
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
typedef scalar_t__ u32 ;
struct ec_event {int dummy; } ;
struct acpi_device {int dev; int handle; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int *,struct acpi_buffer*) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (struct acpi_device*,int ,int) ;
 int FUNC_4 (union acpi_object*) ;

__attribute__((used)) static void FUNC_5(struct acpi_device *VAR_4, u32 VAR_5)
{
 struct acpi_buffer VAR_6 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_7;
 acpi_status VAR_8;

 if (VAR_5 != VAR_3) {
  FUNC_2(&VAR_4->dev, "Invalid event: 0x%08x\n", VAR_5);
  return;
 }


 VAR_8 = FUNC_1(VAR_4->handle, VAR_2,
          ((void*)0), &VAR_6);
 if (FUNC_0(VAR_8)) {
  FUNC_2(&VAR_4->dev, "Error executing ACPI method %s()\n",
   VAR_2);
  return;
 }

 VAR_7 = (union acpi_object *)VAR_6.pointer;
 if (!VAR_7) {
  FUNC_2(&VAR_4->dev, "Nothing returned from %s()\n",
   VAR_2);
  return;
 }
 if (VAR_7->type != VAR_1) {
  FUNC_2(&VAR_4->dev, "Invalid object returned from %s()\n",
   VAR_2);
  FUNC_4(VAR_7);
  return;
 }
 if (VAR_7->buffer.length < sizeof(struct ec_event)) {
  FUNC_2(&VAR_4->dev, "Invalid buffer length %d from %s()\n",
   VAR_7->buffer.length, VAR_2);
  FUNC_4(VAR_7);
  return;
 }

 FUNC_3(VAR_4, VAR_7->buffer.pointer, VAR_7->buffer.length);
 FUNC_4(VAR_7);
}
