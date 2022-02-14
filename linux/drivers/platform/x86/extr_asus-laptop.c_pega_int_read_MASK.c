
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
struct asus_laptop {int handle; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,struct acpi_buffer*) ;

__attribute__((used)) static int FUNC_1(struct asus_laptop *VAR_4, int VAR_5, int *VAR_6)
{
 struct acpi_buffer VAR_7 = { VAR_0, ((void*)0) };
 int VAR_8 = FUNC_0(VAR_4->handle, VAR_3, VAR_5,
         &VAR_7);
 if (!VAR_8) {
  union acpi_object *VAR_9 = VAR_7.pointer;
  if (VAR_9 && VAR_9->type == VAR_1)
   *VAR_6 = VAR_9->integer.value;
  else
   VAR_8 = -VAR_2;
 }
 return VAR_8;
}
