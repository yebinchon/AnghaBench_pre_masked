
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int length; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ buffer; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 int FUNC_2 (int ,int,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_3(int VAR_5, int *VAR_6)
{
 acpi_status VAR_7;
 union acpi_object *VAR_8;

 struct acpi_buffer VAR_9 = { VAR_0, ((void*)0) };

 VAR_7 = FUNC_2(VAR_4, VAR_5, &VAR_9);

 VAR_8 = VAR_9.pointer;

 if (!VAR_8 || VAR_8->type != VAR_2) {
  if (VAR_8) {
   FUNC_1("query block returned object "
          "type: %d - buffer length:%d\n", VAR_8->type,
          VAR_8->type == VAR_1 ?
          VAR_8->buffer.length : 0);
  }
  FUNC_0(VAR_8);
  return -VAR_3;
 }
 *VAR_6 = VAR_8->integer.value;
 FUNC_0(VAR_8);
 return 0;
}
