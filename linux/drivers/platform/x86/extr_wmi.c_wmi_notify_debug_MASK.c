
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int count; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int pointer; } ;
struct TYPE_5__ {int length; } ;
union acpi_object {int type; TYPE_4__ package; TYPE_3__ integer; TYPE_2__ string; TYPE_1__ buffer; } ;
typedef int u32 ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ,struct acpi_buffer*) ;

__attribute__((used)) static void FUNC_4(u32 VAR_2, void *VAR_3)
{
 struct acpi_buffer VAR_4 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_5;
 acpi_status VAR_6;

 VAR_6 = FUNC_3(VAR_2, &VAR_4);
 if (VAR_6 != VAR_1) {
  FUNC_2("bad event status 0x%x\n", VAR_6);
  return;
 }

 VAR_5 = (union acpi_object *)VAR_4.pointer;

 if (!VAR_5)
  return;

 FUNC_2("DEBUG Event ");
 switch(VAR_5->type) {
 case 131:
  FUNC_1("BUFFER_TYPE - length %d\n", VAR_5->buffer.length);
  break;
 case 128:
  FUNC_1("STRING_TYPE - %s\n", VAR_5->string.pointer);
  break;
 case 130:
  FUNC_1("INTEGER_TYPE - %llu\n", VAR_5->integer.value);
  break;
 case 129:
  FUNC_1("PACKAGE_TYPE - %d elements\n", VAR_5->package.count);
  break;
 default:
  FUNC_1("object type 0x%X\n", VAR_5->type);
 }
 FUNC_0(VAR_5);
}
