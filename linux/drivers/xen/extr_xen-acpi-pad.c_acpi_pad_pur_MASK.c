
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_2__* elements; } ;
union acpi_object {scalar_t__ type; TYPE_3__ package; } ;
struct acpi_buffer {union acpi_object* pointer; int length; int * member_1; int member_0; } ;
typedef int acpi_handle ;
struct TYPE_4__ {int value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_2 (union acpi_object*) ;

__attribute__((used)) static int FUNC_3(acpi_handle VAR_2)
{
 struct acpi_buffer VAR_3 = {VAR_0, ((void*)0)};
 union acpi_object *VAR_4;
 int VAR_5 = -1;

 if (FUNC_0(FUNC_1(VAR_2, "_PUR", ((void*)0), &VAR_3)))
  return VAR_5;

 if (!VAR_3.length || !VAR_3.pointer)
  return VAR_5;

 VAR_4 = VAR_3.pointer;

 if (VAR_4->type == VAR_1 &&
  VAR_4->package.count == 2 &&
  VAR_4->package.elements[0].integer.value == 1)
  VAR_5 = VAR_4->package.elements[1].integer.value;

 FUNC_2(VAR_3.pointer);
 return VAR_5;
}
