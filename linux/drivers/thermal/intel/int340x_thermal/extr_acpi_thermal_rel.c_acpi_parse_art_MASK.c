
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; int * elements; } ;
union acpi_object {scalar_t__ type; scalar_t__ target; scalar_t__ source; TYPE_1__ package; } ;
struct art {scalar_t__ type; scalar_t__ target; scalar_t__ source; TYPE_1__ package; } ;
struct acpi_device {int dummy; } ;
struct acpi_buffer {int member_0; char* member_1; int length; union acpi_object* pointer; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,struct acpi_device**) ;
 int FUNC_2 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_3 (int *,struct acpi_buffer*,struct acpi_buffer*) ;
 union acpi_object* FUNC_4 (int,int,int ) ;
 int FUNC_5 (union acpi_object*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;

int FUNC_8(acpi_handle VAR_6, int *VAR_7, struct art **VAR_8,
  bool VAR_9)
{
 acpi_status VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13 = 0;
 struct art *VAR_14;
 struct acpi_device *VAR_15;
 union acpi_object *VAR_16;
 struct acpi_buffer VAR_17 = { VAR_0, ((void*)0) };
 struct acpi_buffer VAR_18 = { 0, ((void*)0) };
 struct acpi_buffer VAR_19 = {
  sizeof("RRNNNNNNNNNNN"), "RRNNNNNNNNNNN" };

 VAR_10 = FUNC_2(VAR_6, "_ART", ((void*)0), &VAR_17);
 if (FUNC_0(VAR_10))
  return -VAR_3;

 VAR_16 = VAR_17.pointer;
 if (!VAR_16 || (VAR_16->type != VAR_1)) {
  FUNC_6("Invalid _ART data\n");
  VAR_11 = -VAR_2;
  goto end;
 }


 *VAR_7 = VAR_16->package.count - 1;
 VAR_14 = FUNC_4(*VAR_7, sizeof(struct art), VAR_5);
 if (!VAR_14) {
  VAR_11 = -VAR_4;
  goto end;
 }

 for (VAR_12 = 0; VAR_12 < *VAR_7; VAR_12++) {
  struct art *VAR_20 = &VAR_14[VAR_12 - VAR_13];

  VAR_18.length = sizeof(struct art);
  VAR_18.pointer = VAR_20;

  VAR_10 = FUNC_3(&(VAR_16->package.elements[VAR_12 + 1]),
           &VAR_19, &VAR_18);
  if (FUNC_0(VAR_10)) {
   FUNC_7("_ART package %d is invalid, ignored", VAR_12);
   VAR_13++;
   continue;
  }
  if (!VAR_9)
   continue;

  if (VAR_20->source) {
   VAR_11 = FUNC_1(VAR_20->source, &VAR_15);
   if (VAR_11)
    FUNC_7("Failed to get source ACPI device\n");
  }
  if (VAR_20->target) {
   VAR_11 = FUNC_1(VAR_20->target, &VAR_15);
   if (VAR_11)
    FUNC_7("Failed to get target ACPI device\n");
  }
 }

 *VAR_8 = VAR_14;

 *VAR_7 -= VAR_13;
end:
 FUNC_5(VAR_17.pointer);
 return VAR_11;
}
