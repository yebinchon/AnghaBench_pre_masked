
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; union acpi_object* elements; } ;
struct TYPE_3__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_2__ package; TYPE_1__ integer; } ;
struct pcc_acpi {int num_sifr; int* sinf; int handle; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ,int *,struct acpi_buffer*) ;
 int FUNC_3 (union acpi_object*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct pcc_acpi *VAR_7)
{
 acpi_status VAR_8;
 struct acpi_buffer VAR_9 = {VAR_0, ((void*)0)};
 union acpi_object *VAR_10 = ((void*)0);
 int VAR_11;

 VAR_8 = FUNC_2(VAR_7->handle, VAR_6, ((void*)0),
          &VAR_9);
 if (FUNC_1(VAR_8)) {
  FUNC_0((VAR_1,
      "evaluation error HKEY.SINF\n"));
  return 0;
 }

 VAR_10 = VAR_9.pointer;
 if (!VAR_10 || (VAR_10->type != VAR_3)) {
  FUNC_0((VAR_1, "Invalid HKEY.SINF\n"));
  VAR_8 = VAR_4;
  goto end;
 }

 if (VAR_7->num_sifr < VAR_10->package.count) {
  FUNC_0((VAR_1,
     "SQTY reports bad SINF length\n"));
  VAR_8 = VAR_4;
  goto end;
 }

 for (VAR_11 = 0; VAR_11 < VAR_10->package.count; VAR_11++) {
  union acpi_object *VAR_12 = &(VAR_10->package.elements[VAR_11]);
  if (FUNC_4(VAR_12->type == VAR_2)) {
   VAR_7->sinf[VAR_11] = VAR_12->integer.value;
  } else
   FUNC_0((VAR_1,
      "Invalid HKEY.SINF data\n"));
 }
 VAR_7->sinf[VAR_10->package.count] = -1;

end:
 FUNC_3(VAR_9.pointer);
 return VAR_8 == VAR_5;
}
