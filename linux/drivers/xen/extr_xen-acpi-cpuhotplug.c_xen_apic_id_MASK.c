
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__ pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ type; } ;
struct acpi_madt_local_apic {int lapic_flags; scalar_t__ id; TYPE_2__ header; } ;
struct acpi_buffer {union acpi_object* pointer; scalar_t__ length; int * member_1; scalar_t__ member_0; } ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_2 (union acpi_object*) ;

__attribute__((used)) static int FUNC_3(acpi_handle VAR_5)
{
 struct acpi_buffer VAR_6 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_7;
 struct acpi_madt_local_apic *VAR_8;
 int VAR_9;

 if (FUNC_0(FUNC_1(VAR_5, "_MAT", ((void*)0), &VAR_6)))
  return -VAR_4;

 if (!VAR_6.length || !VAR_6.pointer)
  return -VAR_4;

 VAR_7 = VAR_6.pointer;
 if (VAR_7->type != VAR_3 ||
     VAR_7->buffer.length < sizeof(*VAR_8)) {
  FUNC_2(VAR_6.pointer);
  return -VAR_4;
 }

 VAR_8 = (struct acpi_madt_local_apic *)VAR_7->buffer.pointer;

 if (VAR_8->header.type != VAR_2 ||
     !(VAR_8->lapic_flags & VAR_1)) {
  FUNC_2(VAR_6.pointer);
  return -VAR_4;
 }

 VAR_9 = (uint32_t)VAR_8->id;
 FUNC_2(VAR_6.pointer);
 VAR_6.length = VAR_0;
 VAR_6.pointer = ((void*)0);

 return VAR_9;
}
