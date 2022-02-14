
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
typedef int u32 ;
struct wmax_basic_args {int dummy; } ;
struct acpi_buffer {struct wmax_basic_args* pointer; scalar_t__ length; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct wmax_basic_args*) ;
 int FUNC_2 (int ,int ,int,struct acpi_buffer*,struct acpi_buffer*) ;

__attribute__((used)) static acpi_status FUNC_3(struct wmax_basic_args *VAR_3,
       u32 VAR_4, int *VAR_5)
{
 acpi_status VAR_6;
 union acpi_object *VAR_7;
 struct acpi_buffer VAR_8;
 struct acpi_buffer VAR_9;

 VAR_8.length = (acpi_size) sizeof(*VAR_3);
 VAR_8.pointer = VAR_3;
 if (VAR_5) {
  VAR_9.length = VAR_0;
  VAR_9.pointer = ((void*)0);
  VAR_6 = FUNC_2(VAR_2, 0,
          VAR_4, &VAR_8, &VAR_9);
  if (FUNC_0(VAR_6)) {
   VAR_7 = (union acpi_object *)VAR_9.pointer;
   if (VAR_7 && VAR_7->type == VAR_1)
    *VAR_5 = (u32)VAR_7->integer.value;
  }
  FUNC_1(VAR_9.pointer);
 } else {
  VAR_6 = FUNC_2(VAR_2, 0,
          VAR_4, &VAR_8, ((void*)0));
 }
 return VAR_6;
}
