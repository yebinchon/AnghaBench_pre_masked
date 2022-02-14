
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
typedef scalar_t__ u32 ;
struct bios_args {scalar_t__ arg0; scalar_t__ arg1; scalar_t__ arg2; } ;
struct acpi_buffer {scalar_t__ pointer; struct bios_args* member_1; int member_0; } ;
typedef int args ;
typedef int acpi_status ;
typedef int acpi_size ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (union acpi_object*) ;
 int FUNC_2 (int ,int ,scalar_t__,struct acpi_buffer*,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_3(u32 VAR_6,
  u32 VAR_7, u32 VAR_8, u32 VAR_9, u32 *VAR_10)
{
 struct bios_args VAR_11 = {
  .arg0 = VAR_7,
  .arg1 = VAR_8,
  .arg2 = VAR_9,
 };
 struct acpi_buffer VAR_12 = { (acpi_size) sizeof(VAR_11), &VAR_11 };
 struct acpi_buffer VAR_13 = { VAR_0, ((void*)0) };
 acpi_status VAR_14;
 union acpi_object *VAR_15;
 u32 VAR_16 = 0;

 VAR_14 = FUNC_2(VAR_2, 0, VAR_6,
         &VAR_12, &VAR_13);

 if (FUNC_0(VAR_14))
  return -VAR_4;

 VAR_15 = (union acpi_object *)VAR_13.pointer;
 if (VAR_15 && VAR_15->type == VAR_1)
  VAR_16 = (u32) VAR_15->integer.value;

 if (VAR_10)
  *VAR_10 = VAR_16;

 FUNC_1(VAR_15);

 if (VAR_16 == VAR_3)
  return -VAR_5;

 return 0;
}
