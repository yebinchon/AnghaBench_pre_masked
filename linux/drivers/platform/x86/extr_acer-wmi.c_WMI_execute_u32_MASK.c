
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int length; scalar_t__ pointer; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ buffer; } ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct acpi_buffer {void* member_1; scalar_t__ pointer; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_size ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__,struct acpi_buffer*,struct acpi_buffer*) ;

__attribute__((used)) static acpi_status
FUNC_3(u32 VAR_4, u32 VAR_5, u32 *VAR_6)
{
 struct acpi_buffer VAR_7 = { (acpi_size) sizeof(u32), (void *)(&VAR_5) };
 struct acpi_buffer VAR_8 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_9;
 u32 VAR_10 = 0;
 acpi_status VAR_11;

 VAR_11 = FUNC_2(VAR_3, 0, VAR_4, &VAR_7, &VAR_8);

 if (FUNC_0(VAR_11))
  return VAR_11;

 VAR_9 = (union acpi_object *) VAR_8.pointer;
 if (VAR_9) {
  if (VAR_9->type == VAR_1 &&
   (VAR_9->buffer.length == sizeof(u32) ||
   VAR_9->buffer.length == sizeof(u64))) {
   VAR_10 = *((u32 *) VAR_9->buffer.pointer);
  } else if (VAR_9->type == VAR_2) {
   VAR_10 = (u32) VAR_9->integer.value;
  }
 }

 if (VAR_6)
  *VAR_6 = VAR_10;

 FUNC_1(VAR_8.pointer);

 return VAR_11;
}
