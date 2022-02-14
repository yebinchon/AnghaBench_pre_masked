
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_2__ integer; TYPE_1__ package; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 union acpi_object* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (int) ;

union acpi_object *FUNC_3(struct device *VAR_5,
      union acpi_object *VAR_6,
      int VAR_7, int *VAR_8)
{
 int VAR_9;
 union acpi_object *VAR_10;






 if (FUNC_2(VAR_7 < 2))
  return FUNC_0(-VAR_3);







 if (VAR_6->type != VAR_1 ||
     VAR_6->package.count < 2 ||
     VAR_6->package.elements[0].type != VAR_0 ||
     VAR_6->package.elements[0].integer.value > 1) {
  FUNC_1(VAR_5, "Unsupported packages structure\n");
  return FUNC_0(-VAR_3);
 }

 *VAR_8 = VAR_6->package.elements[0].integer.value;


 for (VAR_9 = 1; VAR_9 < VAR_6->package.count; VAR_9++) {
  union acpi_object *VAR_11;

  VAR_10 = &VAR_6->package.elements[VAR_9];


  if (VAR_10->type != VAR_1 ||
      VAR_10->package.count != VAR_7)
   continue;

  VAR_11 = &VAR_10->package.elements[0];
  if (VAR_11->type == VAR_0 &&
      VAR_11->integer.value == VAR_2)
   goto found;
 }

 return FUNC_0(-VAR_4);

found:
 return VAR_10;
}
