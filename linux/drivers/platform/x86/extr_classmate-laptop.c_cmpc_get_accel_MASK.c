
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* pointer; } ;
struct TYPE_3__ {int value; } ;
union acpi_object {TYPE_2__ buffer; void* type; TYPE_1__ integer; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_1 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_2 (union acpi_object*) ;

__attribute__((used)) static acpi_status FUNC_3(acpi_handle VAR_2,
      unsigned char *VAR_3,
      unsigned char *VAR_4,
      unsigned char *VAR_5)
{
 union acpi_object VAR_6[2];
 struct acpi_object_list VAR_7;
 struct acpi_buffer VAR_8 = { VAR_0, ((void*)0) };
 unsigned char *VAR_9;
 acpi_status VAR_10;

 VAR_6[0].type = VAR_1;
 VAR_6[0].integer.value = 0x01;
 VAR_6[1].type = VAR_1;
 VAR_7.count = 2;
 VAR_7.pointer = VAR_6;
 VAR_10 = FUNC_1(VAR_2, "ACMD", &VAR_7, &VAR_8);
 if (FUNC_0(VAR_10)) {
  union acpi_object *VAR_11;
  VAR_11 = VAR_8.pointer;
  VAR_9 = VAR_11->buffer.pointer;
  *VAR_3 = VAR_9[0];
  *VAR_4 = VAR_9[1];
  *VAR_5 = VAR_9[2];
  FUNC_2(VAR_8.pointer);
 }
 return VAR_10;
}
