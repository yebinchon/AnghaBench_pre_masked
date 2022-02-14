
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pointer; } ;
union acpi_object {int length; int result_code; int device_id; int command; int on_time; int off_time; scalar_t__ type; TYPE_1__ buffer; } ;
typedef int u8 ;
struct bios_args {int length; int result_code; int device_id; int command; int on_time; int off_time; scalar_t__ type; TYPE_1__ buffer; } ;
struct acpi_buffer {int length; union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (union acpi_object*) ;
 int FUNC_2 (int ,int ,int,struct acpi_buffer*,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_3(u8 VAR_4, u8 VAR_5, u8 VAR_6,
          u8 VAR_7, u8 VAR_8, u8 VAR_9)
{
 struct acpi_buffer VAR_10 = { VAR_0, ((void*)0) };
 struct bios_args *VAR_11;
 struct acpi_buffer VAR_12;
 union acpi_object *VAR_13;
 acpi_status VAR_14;
 u8 VAR_15;

 struct bios_args VAR_16 = {
  .length = VAR_4,
  .result_code = VAR_5,
  .device_id = VAR_6,
  .command = VAR_7,
  .on_time = VAR_8,
  .off_time = VAR_9
 };

 VAR_12.length = sizeof(struct bios_args);
 VAR_12.pointer = &VAR_16;

 VAR_14 = FUNC_2(VAR_2, 0, 1, &VAR_12, &VAR_10);
 if (FUNC_0(VAR_14))
  return VAR_14;

 VAR_13 = VAR_10.pointer;

 if (!VAR_13)
  return -VAR_3;
 if (VAR_13->type != VAR_1) {
  FUNC_1(VAR_13);
  return -VAR_3;
 }

 VAR_11 = ((struct bios_args *)VAR_13->buffer.pointer);
 VAR_15 = VAR_11->result_code;

 FUNC_1(VAR_13);

 return VAR_15;
}
